export PYTEST_DISABLE_PLUGIN_AUTOLOAD = 1

TOPLEVEL_LANG = verilog
SIM = verilator
TOPLEVEL = systolic_array_4x4
MODULE = test_array

VERILOG_SOURCES = $(PWD)/../rtl/pe.sv
VERILOG_SOURCES += $(PWD)/../rtl/systolic_array_4x4.sv

EXTRA_ARGS += --trace --trace-structs -Wno-fatal

include $(shell cocotb-config --makefiles)/Makefile.sim
