# 100 MHz clock
set_property -dict { PACKAGE_PIN H16   IOSTANDARD LVCMOS33 } [get_ports { clk }]
create_clock -add -name sys_clk_pin -period 10.00 -waveform {0 5} [get_ports { clk }]

# Reset (buton) - aktif düşük değil, bizim tasarımda aktif yüksek
set_property -dict { PACKAGE_PIN P18   IOSTANDARD LVCMOS33 } [get_ports { rst }]

# LED LD0
set_property -dict { PACKAGE_PIN R14   IOSTANDARD LVCMOS33 } [get_ports { led }]