# Hafta 3 — 2026-09-27

## Hedef
4x4 systolic array'i gerçek kartta, ARM'dan kullanmak (Q1 go/no-go kriteri).

## Yapılanlar
- DSP çıkarımı düzeltildi: `use_dsp` attribute'u `assign` yerine sinyal bildirimine taşındı
  → her PE tek bir DSP48E1 MAC (16 DSP, 0 LUT, 8 FF)
- Akümülatör 16 → 32 bit (`ACC_WIDTH`); taşma testleri eklendi (−128×−128, 20 matris regresyon)
- XDC: Arty Z7 H16 clock'u 125 MHz (8 ns)
- Out-of-context sentez + implementation: `HD.CLK_SRC`, giriş/çıkış gecikmeleri
  → 125 MHz'de WNS +1.845 ns, WHS +0.164 ns
- AXI4-Lite wrapper (`systolic_axi.sv`): ID / CTRL / STATUS / A / B / C register'ları,
  CLEAR → FEED → DRAIN → CAPTURE FSM, skew artık donanımda
- cocotb AXI testleri (kendi küçük AXI-Lite master'ımız): 5/5 ✅
- Zynq block design tek Tcl script'iyle (`fpga/systolic_soc/create_project.tcl`):
  PS7 + AXI interconnect + systolic_axi @ `0x4000_0000`, FCLK0 100 MHz → bitstream + XSA
- ARM bare-metal test programı (`sw/src/main.c`) + tek komutla derleme (`sw/build_sw.sh`)
- Kartta çalıştı ✅
  - ARM: **1003/1003** doğru (ID, 2 en kötü durum, 1000 rastgele matris)
  - JTAG (C programı olmadan, `sw/jtag_test.tcl`): **203/203** doğru
- Roadmap revize edildi (`docs/roadmap.tex`): Z7-10, go/no-go kriterleri, fotonik simülatör

## Ölçüm: veri taşıma darboğazı
| | Matris başına (4x4) |
|---|---|
| FPGA (AXI dahil) | 1595 ns |
| ARM yazılım | ~840 ns |

Asıl hesap ~15 clock (~150 ns). Kalan süre 26 AXI-Lite işleminden (~60 ns/işlem) geliyor:
sürenin ~%90'ı veri taşıma. Hesaplama birimi ne kadar hızlı olursa olsun (dijital ya da
fotonik), veri tek tek kelime kelime taşınırsa kazanç kaybolur → büyük matris + DMA/AXI-Stream gerekli.

## Karşılaşılan Sorunlar
- DSP = 0: `(* use_dsp = "yes" *)` `assign` satırındaydı, Vivado sessizce yok saydı
- Rapor "birebir aynı" → cache değil; RTL değişikliği netlist'i değiştirmiyordu
- IOB 323/100 → OOC sentez; OOC'de "UnBuffered IOs: clk" → `PACKAGE_PIN` kaldırıldı, `HD.CLK_SRC` eklendi
- Sahte hold ihlalleri (−0.147 ns): giriş gecikmesinde BUFG clock gecikmesi (~1.8 ns) hesaba katılmamıştı
- cocotb: yazılan sinyal değeri aynı adımda geri okunamıyor → testbench durumu Python değişkeninde
- Vitis platformu sessizce çöktü: ARM derleyicisi (arm-none-eabi-gcc) kurulu değildi
  → `apt install gcc-arm-none-eabi ...`; Vitis sunucusu yine de çalışmadı → sdtgen + empyro ile derleme
- miniforge `python3`'te PyYAML yok → empyro için miniforge PATH'ten çıkarıldı
- UART görünmüyordu: udev kuralı FTDI'nin iki arayüzünü de ayırıyordu → sadece arayüz 0 (JTAG)
- JTAG ile yüklenince (FSBL yok) global timer başlamıyor → `usleep(1)`
- İlk JTAG testi anlamsız sonuç: JP4 QSPI'de, fabrika demosu bizim bitstream'le yarışıyordu → JP4 = JTAG
- Kartı taktıktan hemen sonra JTAG görünmüyor: udev'in kuralı uygulaması birkaç saniye sürüyor

## Öğrenilenler
- Vivado attribute'larının nereye yazıldığı önemli (sinyal/modül, ifade değil)
- DSP48E1 içine MAC + systolic register'ların (AREG/BREG, ACIN/BCIN kaskad) emilmesi
- OOC akışı, `HD.CLK_SRC`, I/O delay ve hold analizi
- AXI4-Lite handshake (valid/ready, AW/W/B, AR/R)
- Zynq PS/PL ayrımı, M_AXI_GP0, FCLK, `ps7_init`
- SDT tabanlı bare-metal akış: sdtgen → empyro (BSP, app)
- xsdb ile JTAG üzerinden bitstream/ELF yükleme ve bellek okuma
- Zynq boot modu (JP4) ve `BOOT_MODE` register'ı (`0xF800025C`)

## Sonraki Hafta
Fotonik hat: `photonic/` klasörü, gdsfactory ile ilk MZI, SAX ile 2x2 transfer matrisi.
