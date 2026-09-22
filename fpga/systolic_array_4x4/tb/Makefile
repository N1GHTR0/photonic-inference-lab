TOPLEVEL_LANG = verilog
SIM = verilator
TOPLEVEL = pe
MODULE = test_pe

VERILOG_SOURCES = $(PWD)/../rtl/pe.sv

EXTRA_ARGS += --trace --trace-structs -Wno-fatal

include $(shell cocotb-config --makefiles)/Makefile.sim
