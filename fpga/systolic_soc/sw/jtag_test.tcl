# C programi olmadan, JTAG (xsdb) uzerinden kartta donanim testi.
#
# xsdb, ARM'in bus'ina dogrudan erisebildigi icin 0x4000_0000'a yazip okuyabilir.
# Yol: JTAG -> ARM debug portu -> M_AXI_GP0 -> interconnect -> systolic_axi -> dizi
#
# Kullanim (repo kokunden, create_project.tcl calistiktan sonra, JP4 = JTAG):
#   source vivado_enable.sh
#   xsdb fpga/systolic_soc/sw/jtag_test.tcl

set dir   [file dirname [file normalize [info script]]]
set build [file normalize $dir/../build]
set bit   $build/systolic_soc.runs/impl_1/system_wrapper.bit
set init  $build/systolic_soc.gen/sources_1/bd/system/ip/system_processing_system7_0_0/ps7_init.tcl

set BASE       0x40000000
set NUM_RANDOM 200

# ---------------- kart hazirligi ----------------
connect
puts "Hedefler:"
puts [targets]

targets -set -nocase -filter {name =~ "*APU*"}
rst -system
after 1000

targets -set -nocase -filter {name =~ "xc7z*"}
puts "Bitstream yukleniyor: $bit"
fpga -file $bit

targets -set -nocase -filter {name =~ "*APU*"}
source $init
ps7_init
ps7_post_config   ;# PS-PL seviye donusturuculeri ve FCLK aktif

targets -set -nocase -filter {name =~ "*Cortex-A9 MPCore #0*"}
catch {stop}

# ---------------- yardimci fonksiyonlar ----------------
proc rd {off} {
    global BASE
    return [lindex [mrd -force -value [expr {$BASE + $off}]] 0]
}

proc wr {off val} {
    global BASE
    mwr -force [expr {$BASE + $off}] [expr {$val & 0xFFFFFFFF}]
}

proc to_i32 {v} {
    if {$v >= 0x80000000} { return [expr {$v - 0x100000000}] }
    return $v
}

proc rand_i8 {} { return [expr {int(rand() * 256) - 128}] }

proc pack_row {row} {
    set w 0
    for {set k 0} {$k < 4} {incr k} {
        set w [expr {$w | (([lindex $row $k] & 0xFF) << (8 * $k))}]
    }
    return $w
}

# A, B: 4 satirlik listeler. Donus: hata sayisi (0 = OK)
proc run_matmul {A B {verbose 0}} {
    for {set i 0} {$i < 4} {incr i} {
        wr [expr {0x10 + 4 * $i}] [pack_row [lindex $A $i]]
        wr [expr {0x20 + 4 * $i}] [pack_row [lindex $B $i]]
    }
    wr 0x04 1

    set polls 0
    while {([rd 0x08] & 1) == 0} {
        if {[incr polls] > 100} { puts "HATA: DONE gelmedi"; return 16 }
    }

    set errors 0
    for {set i 0} {$i < 4} {incr i} {
        set line "  "
        for {set j 0} {$j < 4} {incr j} {
            set exp 0
            for {set k 0} {$k < 4} {incr k} {
                incr exp [expr {[lindex $A $i $k] * [lindex $B $k $j]}]
            }
            set got [to_i32 [rd [expr {0x40 + 4 * (4 * $i + $j)}]]]
            append line [format "%8d" $got]
            if {$got != $exp} {
                incr errors
                puts "HATA: C\[$i\]\[$j\] = $got, beklenen $exp"
            }
        }
        if {$verbose} { puts $line }
    }
    return $errors
}

proc rand_matrix {} {
    set M {}
    for {set i 0} {$i < 4} {incr i} {
        lappend M [list [rand_i8] [rand_i8] [rand_i8] [rand_i8]]
    }
    return $M
}

proc const_matrix {v} {
    return [lrepeat 4 [lrepeat 4 $v]]
}

# ---------------- testler ----------------
puts "\n=== 4x4 Systolic Array - JTAG donanim testi ==="

set id [rd 0x00]
puts [format "ID = 0x%08X %s" $id [expr {$id == 0x5A440001 ? "OK" : "YANLIS!"}]]
if {$id != 0x5A440001} { error "ID yanlis, bitstream yuklenmemis olabilir" }

set total 0
set failed 0

set A [rand_matrix]
set B [rand_matrix]
puts "A = $A"
puts "B = $B"
puts "C (FPGA) ="
incr total
if {[run_matmul $A $B 1]} { incr failed }

incr total
if {[run_matmul [const_matrix -128] [const_matrix -128]]} { incr failed } else { puts "En kotu durum 1 (C = 65536): OK" }
incr total
if {[run_matmul [const_matrix -128] [const_matrix 127]]}  { incr failed } else { puts "En kotu durum 2 (C = -65024): OK" }

set t0 [clock milliseconds]
for {set n 0} {$n < $NUM_RANDOM} {incr n} {
    incr total
    if {[run_matmul [rand_matrix] [rand_matrix]]} { incr failed }
}
set t1 [clock milliseconds]

puts "\nToplam test: $total  basarisiz: $failed  ($NUM_RANDOM rastgele matris [expr {$t1 - $t0}] ms)"
puts [expr {$failed == 0 ? "TUM TESTLER GECTI" : "TESTLER BASARISIZ"}]
