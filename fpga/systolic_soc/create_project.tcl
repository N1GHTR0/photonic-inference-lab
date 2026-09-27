# Zynq PS + systolic_axi block design'ini sifirdan kurar, bitstream ve XSA uretir.
#
# Kullanim (repo kokunden):
#   source vivado_enable.sh
#   vivado -mode batch -source fpga/systolic_soc/create_project.tcl
#
# Ciktilar:
#   fpga/systolic_soc/build/                 Vivado projesi (git'e girmez)
#   fpga/systolic_soc/build/system.xsa       Vitis icin donanim platformu (bitstream dahil)
#
# Not: PL'in disariya hic pini yok. Clock (FCLK_CLK0) ve reset PS'ten gelir,
# ARM ile konusma M_AXI_GP0 uzerinden olur. Bu yuzden XDC gerekmiyor.

set origin_dir [file normalize [file dirname [info script]]]
set rtl_dir    [file normalize $origin_dir/../systolic_array_4x4/rtl]
set build_dir  $origin_dir/build
set fclk_mhz   100

create_project systolic_soc $build_dir -part xc7z010clg400-1 -force
set_property board_part digilentinc.com:arty-z7-10:part0:1.1 [current_project]

add_files -norecurse [list \
    $rtl_dir/pe.sv \
    $rtl_dir/systolic_array_4x4.sv \
    $rtl_dir/systolic_axi.sv \
]
update_compile_order -fileset sources_1

# ---------------- block design ----------------
create_bd_design system

# Zynq PS: DDR, UART, clock ayarlari kartin preset'inden gelir
set ps [create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7 processing_system7_0]
apply_bd_automation -rule xilinx.com:bd_rule:processing_system7 \
    -config {make_external "FIXED_IO, DDR" apply_board_preset "1" Master "Disable" Slave "Disable"} $ps
set_property -dict [list \
    CONFIG.PCW_FPGA0_PERIPHERAL_FREQMHZ $fclk_mhz \
    CONFIG.PCW_USE_M_AXI_GP0 {1} \
] $ps

# Bizim RTL modulumuz (s_axi_* portlari AXI4-Lite arayuzu olarak taninir)
set acc [create_bd_cell -type module -reference systolic_axi systolic_axi_0]

# PS M_AXI_GP0 -> interconnect -> systolic_axi; clock ve reset (proc_sys_reset) otomatik
apply_bd_automation -rule xilinx.com:bd_rule:axi4 \
    -config [list Clk_master {Auto} Clk_slave {Auto} Clk_xbar {Auto} \
                  Master {/processing_system7_0/M_AXI_GP0} Slave {/systolic_axi_0/s_axi} \
                  ddr_seg {Auto} intc_ip {New AXI Interconnect} master_apm {0}] \
    [get_bd_intf_pins systolic_axi_0/s_axi]

assign_bd_address
validate_bd_design
save_bd_design

# ---------------- HDL wrapper, sentez, bitstream ----------------
set bd_file [get_files system.bd]
make_wrapper -files $bd_file -top
add_files -norecurse [file normalize $build_dir/systolic_soc.gen/sources_1/bd/system/hdl/system_wrapper.v]
set_property top system_wrapper [current_fileset]
update_compile_order -fileset sources_1

launch_runs impl_1 -to_step write_bitstream -jobs 6
wait_on_run impl_1

if {[get_property PROGRESS [get_runs impl_1]] != "100%"} {
    error "impl_1 tamamlanmadi: [get_property STATUS [get_runs impl_1]]"
}

open_run impl_1
report_utilization    -file $build_dir/utilization.rpt
report_timing_summary -file $build_dir/timing.rpt

# Vitis icin donanim platformu (bitstream dahil)
write_hw_platform -fixed -include_bit -force $build_dir/system.xsa

# ARM'in gorecegi adres
set seg [get_bd_addr_segs -of_objects [get_bd_addr_spaces processing_system7_0/Data]]
foreach s $seg {
    puts "ADRES: [get_property NAME $s]  offset=[get_property OFFSET $s]  range=[get_property RANGE $s]"
}
puts "BITTI: $build_dir/system.xsa"
