# Hafta 1 — 2026-09-17

## Hedef
İlk RTL tasarımını FPGA'da çalıştırmak.

## Yapılanlar
- Vivado 2026.1 kurulumu (Linux)
- Digilent Arty Z7-10 board dosyaları
- led_blink.sv + led_blink.xdc
- Sentez → Implement → Bitstream → FPGA
- LED yanıp sönüyor ✅

## Karşılaşılan Sorunlar
- FTDI/fdi_sio çakışması → udev kuralı ile çözüldü
- Kart Z7-20 sanıldı, gerçekte Z7-10 → proje yeniden oluşturuldu
- GitHub fine-grained token izinleri → classic token ile çözüldü

## Öğrenilenler
- Vivado tam akış
- XDC pin kısıtları
- JTAG IDCODE kavramı
- Git credential yönetimi

## Sonraki Hafta
4x4 INT8 systolic array RTL + cocotb doğrulama
