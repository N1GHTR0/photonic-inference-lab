// ARM (bare-metal) uzerinden 4x4 systolic array testi.
//
// 1. ID register'ini kontrol eder
// 2. En kotu durumlar + NUM_RANDOM rastgele matris: A/B yaz, START, DONE bekle, C oku
// 3. Her sonucu ARM'in kendi hesabiyla karsilastirir
// 4. Sonucu UART'a (115200 8N1) yazar ve g_result'a koyar (JTAG'den okunabilsin diye)

#include <stdint.h>
#include "xil_io.h"
#include "xil_printf.h"
#include "xiltimer.h"   // XTime_GetTime, COUNTS_PER_SECOND (SDT BSP)
#include "sleep.h"

#define SA_BASE      0x40000000u
#define REG_ID       0x00u
#define REG_CTRL     0x04u
#define REG_STATUS   0x08u
#define REG_A        0x10u
#define REG_B        0x20u
#define REG_C        0x40u

#define SA_ID        0x5A440001u
#define N            4
#define NUM_RANDOM   1000
#define POLL_LIMIT   100000

// JTAG uzerinden okunan sonuc (xsdb: mrd &g_result 8)
typedef struct {
    uint32_t magic;       // 0xC0FFEE00 = program basladi, 0xC0FFEE01 = bitti
    uint32_t id;
    uint32_t tests;
    uint32_t errors;
    uint32_t timeouts;
    uint32_t hw_ns;       // matris basina ortalama sure: AXI yazma + hesap + AXI okuma
    uint32_t sw_ns;       // ayni isi ARM'in kendisi yapsa
    uint32_t polls_max;   // DONE icin en fazla kac STATUS okumasi gerekti
} result_t;

volatile result_t g_result;

static uint32_t rng_state = 0x12345678u;

static uint32_t rng(void)
{
    // xorshift32
    rng_state ^= rng_state << 13;
    rng_state ^= rng_state >> 17;
    rng_state ^= rng_state << 5;
    return rng_state;
}

static uint32_t pack_row(const int8_t row[N])
{
    return  (uint32_t)(uint8_t)row[0]
         | ((uint32_t)(uint8_t)row[1] << 8)
         | ((uint32_t)(uint8_t)row[2] << 16)
         | ((uint32_t)(uint8_t)row[3] << 24);
}

// 0: ok, -1: DONE gelmedi
static int hw_matmul(int8_t A[N][N], int8_t B[N][N], int32_t C[N][N])
{
    for (int i = 0; i < N; i++) {
        Xil_Out32(SA_BASE + REG_A + 4 * i, pack_row(A[i]));
        Xil_Out32(SA_BASE + REG_B + 4 * i, pack_row(B[i]));
    }
    Xil_Out32(SA_BASE + REG_CTRL, 1);

    uint32_t polls = 0;
    while ((Xil_In32(SA_BASE + REG_STATUS) & 1u) == 0) {
        if (++polls > POLL_LIMIT)
            return -1;
    }
    if (polls > g_result.polls_max)
        g_result.polls_max = polls;

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            C[i][j] = (int32_t)Xil_In32(SA_BASE + REG_C + 4 * (i * N + j));
    return 0;
}

static void sw_matmul(int8_t A[N][N], int8_t B[N][N], int32_t C[N][N])
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++) {
            int32_t acc = 0;
            for (int k = 0; k < N; k++)
                acc += (int32_t)A[i][k] * (int32_t)B[k][j];
            C[i][j] = acc;
        }
}

static void print_matrix(const char *name, int n, const void *m, int is_i32)
{
    xil_printf("%s =\r\n", name);
    for (int i = 0; i < n; i++) {
        xil_printf("  ");
        for (int j = 0; j < n; j++) {
            int v = is_i32 ? ((const int32_t *)m)[i * n + j] : ((const int8_t *)m)[i * n + j];
            xil_printf("%7d", v);
        }
        xil_printf("\r\n");
    }
}

// 1 = esit
static int check(int8_t A[N][N], int8_t B[N][N], int verbose)
{
    int32_t C_hw[N][N], C_sw[N][N];

    g_result.tests++;
    if (hw_matmul(A, B, C_hw) != 0) {
        g_result.timeouts++;
        g_result.errors++;
        xil_printf("HATA: DONE gelmedi (test %d)\r\n", (int)g_result.tests);
        return 0;
    }
    sw_matmul(A, B, C_sw);

    if (verbose) {
        print_matrix("A", N, A, 0);
        print_matrix("B", N, B, 0);
        print_matrix("C (FPGA)", N, C_hw, 1);
    }

    int ok = 1;
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            if (C_hw[i][j] != C_sw[i][j]) {
                if (g_result.errors < 10)
                    xil_printf("HATA: test %d C[%d][%d] = %d, beklenen %d\r\n",
                               (int)g_result.tests, i, j, C_hw[i][j], C_sw[i][j]);
                ok = 0;
            }
    if (!ok)
        g_result.errors++;
    return ok;
}

static void fill(int8_t M[N][N], int mode)
{
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            M[i][j] = (mode == 0) ? (int8_t)(rng() & 0xFF) : (int8_t)mode;
}

int main(void)
{
    int8_t A[N][N], B[N][N];
    int32_t C[N][N];
    XTime t0, t1;

    g_result.magic = 0xC0FFEE00u;
    g_result.tests = g_result.errors = g_result.timeouts = 0;
    g_result.polls_max = 0;

    // Global timer ilk sleep cagrisinda baslatilir. JTAG ile yuklendiginde
    // (FSBL yok) baslatilmamis olur ve XTime_GetTime hep 0 doner.
    usleep(1);

    xil_printf("\r\n=== 4x4 Systolic Array - ARM testi ===\r\n");

    g_result.id = Xil_In32(SA_BASE + REG_ID);
    xil_printf("ID = 0x%08x %s\r\n", (unsigned)g_result.id,
               g_result.id == SA_ID ? "OK" : "YANLIS!");
    if (g_result.id != SA_ID) {
        g_result.errors = 1;
        g_result.magic = 0xC0FFEE01u;
        return 1;
    }

    // ornek: rastgele bir matris, ekrana bas
    fill(A, 0);
    fill(B, 0);
    check(A, B, 1);

    // en kotu durumlar: -128 x -128 (C = 65536) ve -128 x 127 (C = -65024)
    fill(A, -128);
    fill(B, -128);
    xil_printf("En kotu durum 1: %s\r\n", check(A, B, 0) ? "OK" : "HATA");
    fill(B, 127);
    xil_printf("En kotu durum 2: %s\r\n", check(A, B, 0) ? "OK" : "HATA");

    // rastgele regresyon
    for (int n = 0; n < NUM_RANDOM; n++) {
        fill(A, 0);
        fill(B, 0);
        check(A, B, 0);
    }

    // sure olcumu (ayni matris, 1000 kez)
    XTime_GetTime(&t0);
    for (int n = 0; n < NUM_RANDOM; n++)
        hw_matmul(A, B, C);
    XTime_GetTime(&t1);
    g_result.hw_ns = (uint32_t)(((t1 - t0) * 1000000000ull / COUNTS_PER_SECOND) / NUM_RANDOM);

    XTime_GetTime(&t0);
    for (int n = 0; n < NUM_RANDOM; n++) {
        sw_matmul(A, B, C);
        __asm__ volatile("" ::: "memory");  // derleyici donguyu silmesin
    }
    XTime_GetTime(&t1);
    g_result.sw_ns = (uint32_t)(((t1 - t0) * 1000000000ull / COUNTS_PER_SECOND) / NUM_RANDOM);

    xil_printf("\r\nToplam test: %d  hata: %d  timeout: %d\r\n",
               (int)g_result.tests, (int)g_result.errors, (int)g_result.timeouts);
    xil_printf("DONE icin ilk STATUS okumasindan sonra en fazla %d ek okuma gerekti\r\n",
               (int)g_result.polls_max);
    xil_printf("Matris basina sure: FPGA (AXI dahil) %d ns, ARM yazilim %d ns\r\n",
               (int)g_result.hw_ns, (int)g_result.sw_ns);
    xil_printf("%s\r\n", g_result.errors == 0 ? "TUM TESTLER GECTI" : "TESTLER BASARISIZ");

    g_result.magic = 0xC0FFEE01u;
    return 0;
}
