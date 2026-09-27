import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import numpy as np

N = 4

def to_u8(v):
    return int(v) & 0xFF

async def reset_dut(dut):
    dut.rst.value = 1
    dut.en.value = 0
    for i in range(N):
        dut.a_in[i].value = 0
        dut.b_in[i].value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.rst.value = 0


async def run_matmul(dut, A, B):
    """A ve B'yi skewed olarak diziye besle, C'yi oku ve A @ B ile karsilastir."""

    await reset_dut(dut)
    C_exp = A.astype(np.int64) @ B.astype(np.int64)

    for t in range(3 * N - 1):
        for i in range(N):
            k = t - i
            if 0 <= k < N:
                dut.a_in[i].value = to_u8(A[i, k])
            else:
                dut.a_in[i].value = 0
        for j in range(N):
            k = t - j
            if 0 <= k < N:
                dut.b_in[j].value = to_u8(B[k, j])
            else:
                dut.b_in[j].value = 0

        dut.en.value = 1
        await RisingEdge(dut.clk)
        await Timer(1, unit="ns")

    for i in range(N):
        dut.a_in[i].value = 0
        dut.b_in[i].value = 0
    dut.en.value = 0
    for _ in range(3):
        await RisingEdge(dut.clk)

    errors = 0
    for i in range(N):
        for j in range(N):
            got = dut.c_out[i][j].value.to_signed()
            exp = int(C_exp[i, j])
            ok = "OK" if got == exp else "FAIL"
            if got != exp:
                errors += 1
            dut._log.info(f"C[{i}][{j}] = {got:8d}  beklenen={exp:8d}  {ok}")

    assert errors == 0, f"{errors} hata!"


@cocotb.test()
async def array_matmul_test(dut):
    """4x4 systolic array matmul testi (skewed input)."""

    cocotb.start_soon(Clock(dut.clk, 8, unit="ns").start())

    A = np.random.randint(-128, 128, size=(N, N))
    B = np.random.randint(-128, 128, size=(N, N))
    dut._log.info(f"A =\n{A}")
    dut._log.info(f"B =\n{B}")

    await run_matmul(dut, A, B)
    dut._log.info("4x4 Systolic Array testi GECTI!")


@cocotb.test()
async def array_worst_case_test(dut):
    """En kotu durum: 16 bit akumulatoru tasiran degerler."""

    cocotb.start_soon(Clock(dut.clk, 8, unit="ns").start())

    # (-128) x (-128) x 4 = 65536  (int16 max = 32767)
    A = np.full((N, N), -128)
    B = np.full((N, N), -128)
    await run_matmul(dut, A, B)

    # (-128) x 127 x 4 = -65024  (int16 min = -32768)
    B = np.full((N, N), 127)
    await run_matmul(dut, A, B)

    dut._log.info("En kotu durum testi GECTI!")


@cocotb.test()
async def array_random_regression_test(dut):
    """Arka arkaya 20 rastgele matris (her birinden once reset)."""

    cocotb.start_soon(Clock(dut.clk, 8, unit="ns").start())

    for _ in range(20):
        A = np.random.randint(-128, 128, size=(N, N))
        B = np.random.randint(-128, 128, size=(N, N))
        await run_matmul(dut, A, B)

    dut._log.info("20 rastgele matris testi GECTI!")
