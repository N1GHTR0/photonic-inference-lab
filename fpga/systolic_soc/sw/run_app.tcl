# Bitstream + ps7_init + ELF'i JTAG ile yukler, ARM'da calistirir, sonucu JTAG'den okur.
# Program ciktisi UART'ta: /dev/ttyUSB1, 115200 8N1 (ornek: picocom -b 115200 /dev/ttyUSB1)
#
# Kullanim (repo kokunden, JP4 = JTAG):
#   source vivado_enable.sh
#   xsdb fpga/systolic_soc/sw/run_app.tcl [systolic_test.elf]
# ELF verilmezse build_sw.sh'in ciktisi kullanilir.

set dir   [file dirname [file normalize [info script]]]
set build [file normalize $dir/../build]
set bit   $build/systolic_soc.runs/impl_1/system_wrapper.bit
set init  $build/systolic_soc.gen/sources_1/bd/system/ip/system_processing_system7_0_0/ps7_init.tcl
if {[llength $argv] > 0} {
    set elf [file normalize [lindex $argv 0]]
} else {
    set elf $dir/workspace/app/build/systolic_test.elf
}

connect

targets -set -nocase -filter {name =~ "*APU*"}
rst -system
after 1000

targets -set -nocase -filter {name =~ "xc7z*"}
fpga -file $bit

targets -set -nocase -filter {name =~ "*APU*"}
source $init
ps7_init
ps7_post_config

targets -set -nocase -filter {name =~ "*Cortex-A9 MPCore #0*"}
catch {stop}
puts "ELF yukleniyor: $elf"
dow $elf

# g_result (main.c): magic id tests errors timeouts hw_ns sw_ns polls_max
# xsdb pointer'i byte byte, little-endian yazar: "&g_result  : 56 -64 16 0" -> 0x0010C038
set bytes [regexp -all -inline -- {-?\d+} [lindex [split [print &g_result] :] end]]
set addr 0
set sh 0
foreach b $bytes {
    set addr [expr {$addr | (($b & 0xFF) << $sh)}]
    incr sh 8
}
puts [format "g_result @ 0x%08X" $addr]
con

set magic 0
for {set i 0} {$i < 120} {incr i} {
    after 500
    set magic [lindex [mrd -force -value $addr 1] 0]
    if {$magic == 0xC0FFEE01} break
}
catch {stop}

set r [mrd -force -value $addr 8]
puts [format "magic=0x%08X id=0x%08X tests=%d errors=%d timeouts=%d hw_ns=%d sw_ns=%d polls_max=%d" {*}$r]
if {$magic != 0xC0FFEE01} {
    puts "PROGRAM BITMEDI"
} elseif {[lindex $r 3] == 0} {
    puts "TUM TESTLER GECTI"
} else {
    puts "TESTLER BASARISIZ"
}
