import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer
import numpy as np
import random

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


@cocotb.test()
async def array_matmul_test(dut):
    """4x4 systolic array matmul testi (skewed input)."""

    clock = Clock(dut.clk, 10, unit="ns")
    cocotb.start_soon(clock.start())

    await reset_dut(dut)

    A = np.random.randint(-128, 128, size=(N, N)).astype(np.int32)
    B = np.random.randint(-128, 128, size=(N, N)).astype(np.int32)
    C_exp = A @ B

    dut._log.info(f"A =\n{A}")
    dut._log.info(f"B =\n{B}")
    dut._log.info(f"C_exp =\n{C_exp}")

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
    dut._log.info("4x4 Systolic Array testi GECTI!")
