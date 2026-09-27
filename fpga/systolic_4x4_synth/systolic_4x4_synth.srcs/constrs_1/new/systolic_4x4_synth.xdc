# Bu proje OUT-OF-CONTEXT (OOC) calisiyor: portlar pine baglanmaz, IBUF/BUFG eklenmez.
# Karta yuklenecek top-level tasarimda (AXI wrapper) clock su sekilde kisitlanacak:
#   set_property -dict { PACKAGE_PIN H16 IOSTANDARD LVCMOS33 } [get_ports { clk }]

# Sistem saati: 125 MHz (Arty Z7, Ethernet PHY -> H16 pini)
create_clock -add -name sys_clk_pin -period 8.00 -waveform {0 4} [get_ports { clk }]

# OOC: clock ust tasarimda bir BUFG'den geliyormus gibi davran
# (bu olmadan placer "UnBuffered IOs: clk" hatasi verir)
set_property HD.CLK_SRC BUFGCTRL_X0Y0 [get_ports { clk }]

# OOC: I/O yollari da timing'e girsin.
# Girisler ust tasarimda ayni BUFG'ye bagli bir register'dan gelecek; o register'in
# clock'u da ~1.8 ns BUFG gecikmesiyle gelir. Bu yuzden giris gecikmesi:
#   min = ~1.8 (clock insertion) + ~0.3 (clk->Q)           ~ 2.0 ns
#   max = min + ~1 ns dis mantik                            ~ 3.0 ns
# (min'i 1.0 vermek, var olmayan ~0.15 ns'lik hold ihlalleri uretiyor)
set_input_delay  -clock sys_clk_pin -max 3.0 [get_ports -filter {DIRECTION == IN && NAME != clk}]
set_input_delay  -clock sys_clk_pin -min 2.0 [get_ports -filter {DIRECTION == IN && NAME != clk}]
set_output_delay -clock sys_clk_pin 1.0 [all_outputs]
