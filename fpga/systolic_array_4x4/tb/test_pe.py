import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import random

@cocotb.test()
async def pe_basic_test(dut):
    """Tek bir PE'nin MAC islemini test et."""

    clock = Clock(dut.clk, 10, unit="ns")
    cocotb.start_soon(clock.start())

    # Baslangic reset
    dut.rst.value = 1
    dut.en.value = 0
    dut.a_in.value = 0
    dut.b_in.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    for i in range(10):
        # Her testten once PE'yi reset et (akumulator sifirlansin)
        dut.rst.value = 1
        dut.en.value = 0
        await RisingEdge(dut.clk)
        dut.rst.value = 0

        a = random.randint(-128, 127)
        b = random.randint(-128, 127)
        expected_acc = a * b

        dut.a_in.value = a & 0xFF
        dut.b_in.value = b & 0xFF
        dut.en.value = 1

        await RisingEdge(dut.clk)
        await Timer(1, unit="ns")

        acc = dut.acc.value.to_signed()
        assert acc == expected_acc, \
            f"Test {i}: a={a}, b={b}, beklenen={expected_acc}, gelen={acc}"

        dut._log.info(f"Test {i}: {a} x {b} = {acc} OK")

    dut._log.info("Tum PE testleri gecti!")


@cocotb.test()
async def pe_accumulate_test(dut):
    """Reset olmadan art arda MAC: akumulator genisligini test et."""

    clock = Clock(dut.clk, 8, unit="ns")
    cocotb.start_soon(clock.start())

    dut.rst.value = 1
    dut.en.value = 0
    dut.a_in.value = 0
    dut.b_in.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    dut.rst.value = 0

    # (-128) x (-128) = 16384; 256 kez -> 4_194_304 (int16'yi 2. adimda tasirir)
    a, b, steps = -128, -128, 256
    dut.a_in.value = a & 0xFF
    dut.b_in.value = b & 0xFF
    dut.en.value = 1

    for k in range(1, steps + 1):
        await RisingEdge(dut.clk)
        await Timer(1, unit="ns")
        acc = dut.acc.value.to_signed()
        assert acc == k * a * b, \
            f"Adim {k}: beklenen={k * a * b}, gelen={acc}"

    dut.en.value = 0
    dut._log.info(f"{steps} adim birikim: {acc} OK")
