# Kullanim:
#   make                                      # 4x4 dizi testleri
#   make TOPLEVEL=pe MODULE=test_pe           # tek PE testleri
#   make TOPLEVEL=systolic_axi MODULE=test_axi  # AXI-Lite wrapper testleri

export PYTEST_DISABLE_PLUGIN_AUTOLOAD = 1

TOPLEVEL_LANG = verilog
SIM = verilator
TOPLEVEL ?= systolic_array_4x4
MODULE ?= test_array

# her top-level kendi build klasorunu kullansin (degistirince yeniden derlemesin)
SIM_BUILD ?= sim_build_$(TOPLEVEL)

VERILOG_SOURCES = $(PWD)/../rtl/pe.sv
VERILOG_SOURCES += $(PWD)/../rtl/systolic_array_4x4.sv
VERILOG_SOURCES += $(PWD)/../rtl/systolic_axi.sv

EXTRA_ARGS += --trace --trace-structs -Wno-fatal

include $(shell cocotb-config --makefiles)/Makefile.sim
