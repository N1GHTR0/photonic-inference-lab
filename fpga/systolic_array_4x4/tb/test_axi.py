import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge
import numpy as np

N = 4

ADDR_ID     = 0x00
ADDR_CTRL   = 0x04
ADDR_STATUS = 0x08
ADDR_A      = 0x10
ADDR_B      = 0x20
ADDR_C      = 0x40

ID_VALUE = 0x5A440001


class AxiLiteMaster:
    """Minimal AXI4-Lite master.

    ready/valid sinyalleri clock'un dusen kenarinda orneklenir (stabil oldugu an);
    handshake bir sonraki yukselen kenarda gerceklesir.
    """

    def __init__(self, dut):
        self.dut = dut
        self.clk = dut.s_axi_aclk
        dut.s_axi_awaddr.value = 0
        dut.s_axi_awprot.value = 0
        dut.s_axi_awvalid.value = 0
        dut.s_axi_wdata.value = 0
        dut.s_axi_wstrb.value = 0
        dut.s_axi_wvalid.value = 0
        dut.s_axi_bready.value = 0
        dut.s_axi_araddr.value = 0
        dut.s_axi_arprot.value = 0
        dut.s_axi_arvalid.value = 0
        dut.s_axi_rready.value = 0

    async def _wait_ready(self, valid, ready, timeout=100):
        for _ in range(timeout):
            await FallingEdge(self.clk)
            if ready.value == 1:
                await RisingEdge(self.clk)  # handshake bu kenarda
                valid.value = 0
                return
        raise TimeoutError(f"{ready._name} gelmedi")

    async def write(self, addr, data, strb=0xF):
        dut = self.dut
        dut.s_axi_awaddr.value = addr
        dut.s_axi_awvalid.value = 1
        dut.s_axi_wdata.value = data & 0xFFFFFFFF
        dut.s_axi_wstrb.value = strb
        dut.s_axi_wvalid.value = 1
        dut.s_axi_bready.value = 1

        # AW ve W handshake'leri farkli clock'larda da olabilir.
        # Not: cocotb'de yazilan deger hemen geri okunamaz, durumu Python'da tut.
        aw_pending, w_pending = True, True
        for _ in range(100):
            await FallingEdge(self.clk)
            aw_hs = aw_pending and dut.s_axi_awready.value == 1
            w_hs = w_pending and dut.s_axi_wready.value == 1
            await RisingEdge(self.clk)
            if aw_hs:
                dut.s_axi_awvalid.value = 0
                aw_pending = False
            if w_hs:
                dut.s_axi_wvalid.value = 0
                w_pending = False
            if not aw_pending and not w_pending:
                break
        else:
            raise TimeoutError("awready/wready gelmedi")

        for _ in range(100):
            await FallingEdge(self.clk)
            if dut.s_axi_bvalid.value == 1:
                resp = int(dut.s_axi_bresp.value)
                await RisingEdge(self.clk)
                dut.s_axi_bready.value = 0
                assert resp == 0, f"write 0x{addr:02x}: BRESP={resp}"
                return
        raise TimeoutError("bvalid gelmedi")

    async def read(self, addr):
        dut = self.dut
        dut.s_axi_araddr.value = addr
        dut.s_axi_arvalid.value = 1
        dut.s_axi_rready.value = 1
        await self._wait_ready(dut.s_axi_arvalid, dut.s_axi_arready)

        for _ in range(100):
            await FallingEdge(self.clk)
            if dut.s_axi_rvalid.value == 1:
                data = int(dut.s_axi_rdata.value)
                resp = int(dut.s_axi_rresp.value)
                await RisingEdge(self.clk)
                dut.s_axi_rready.value = 0
                assert resp == 0, f"read 0x{addr:02x}: RRESP={resp}"
                return data
        raise TimeoutError("rvalid gelmedi")


def pack_row(row):
    """4 tane int8 -> 32 bit kelime, [7:0] = row[0]."""
    word = 0
    for k, v in enumerate(row):
        word |= (int(v) & 0xFF) << (8 * k)
    return word


def to_i32(v):
    return v - (1 << 32) if v & 0x80000000 else v


async def setup(dut):
    cocotb.start_soon(Clock(dut.s_axi_aclk, 8, unit="ns").start())
    axi = AxiLiteMaster(dut)
    dut.s_axi_aresetn.value = 0
    for _ in range(5):
        await RisingEdge(dut.s_axi_aclk)
    dut.s_axi_aresetn.value = 1
    await RisingEdge(dut.s_axi_aclk)
    return axi


async def run_matmul(dut, axi, A, B):
    """ARM'in yapacagi isi yap: A/B yaz, START, DONE bekle, C oku, kontrol et."""

    for i in range(N):
        await axi.write(ADDR_A + 4 * i, pack_row(A[i]))
        await axi.write(ADDR_B + 4 * i, pack_row(B[i]))

    await axi.write(ADDR_CTRL, 1)

    for polls in range(1, 101):
        status = await axi.read(ADDR_STATUS)
        if status & 1:
            break
    else:
        raise TimeoutError("DONE gelmedi")
    assert status & 2 == 0, "DONE iken BUSY de 1"

    C_exp = A.astype(np.int64) @ B.astype(np.int64)
    errors = 0
    for i in range(N):
        for j in range(N):
            got = to_i32(await axi.read(ADDR_C + 4 * (i * N + j)))
            exp = int(C_exp[i, j])
            if got != exp:
                errors += 1
                dut._log.error(f"C[{i}][{j}] = {got}  beklenen={exp}")

    assert errors == 0, f"{errors} hata!"
    return polls


@cocotb.test()
async def axi_id_test(dut):
    """ID okunuyor, reset sonrasi STATUS = 0."""

    axi = await setup(dut)

    idv = await axi.read(ADDR_ID)
    assert idv == ID_VALUE, f"ID = 0x{idv:08x}"
    status = await axi.read(ADDR_STATUS)
    assert status == 0, f"STATUS = 0x{status:08x}"
    dut._log.info(f"ID = 0x{idv:08x}, STATUS = 0 OK")


@cocotb.test()
async def axi_register_test(dut):
    """A/B geri okunuyor, WSTRB ile tek byte yazilabiliyor."""

    axi = await setup(dut)

    await axi.write(ADDR_A + 4, 0x11223344)
    await axi.write(ADDR_B + 12, 0xDEADBEEF)
    assert await axi.read(ADDR_A + 4) == 0x11223344
    assert await axi.read(ADDR_B + 12) == 0xDEADBEEF

    # sadece byte 2'yi degistir
    await axi.write(ADDR_A + 4, 0xAABBCCDD, strb=0b0100)
    got = await axi.read(ADDR_A + 4)
    assert got == 0x11BB3344, f"WSTRB: 0x{got:08x}"

    # tanimsiz adres 0 okunur
    assert await axi.read(0x30) == 0
    dut._log.info("Register okuma/yazma ve WSTRB OK")


@cocotb.test()
async def axi_matmul_test(dut):
    """Rastgele 4x4 matris: AXI uzerinden uctan uca."""

    axi = await setup(dut)

    A = np.random.randint(-128, 128, size=(N, N))
    B = np.random.randint(-128, 128, size=(N, N))
    dut._log.info(f"A =\n{A}")
    dut._log.info(f"B =\n{B}")

    polls = await run_matmul(dut, axi, A, B)
    dut._log.info(f"AXI matmul GECTI (DONE {polls}. STATUS okumasinda)")


@cocotb.test()
async def axi_worst_case_test(dut):
    """En kotu durum: -128 x -128 ve -128 x 127."""

    axi = await setup(dut)

    A = np.full((N, N), -128)
    await run_matmul(dut, axi, A, np.full((N, N), -128))  # C = 65536
    await run_matmul(dut, axi, A, np.full((N, N), 127))   # C = -65024
    dut._log.info("AXI en kotu durum GECTI")


@cocotb.test()
async def axi_regression_test(dut):
    """Reset olmadan arka arkaya 20 matris (CLEAR durumu acc'yi sifirliyor mu?)."""

    axi = await setup(dut)

    for _ in range(20):
        A = np.random.randint(-128, 128, size=(N, N))
        B = np.random.randint(-128, 128, size=(N, N))
        await run_matmul(dut, axi, A, B)
    dut._log.info("AXI 20 matris regresyon GECTI")
