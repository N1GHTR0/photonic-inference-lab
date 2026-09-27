#!/usr/bin/env bash
# XSA'dan standalone BSP + test uygulamasini derler (Vitis IDE/sunucusu gerekmez).
#
# Kullanim (repo kokunden, create_project.tcl calistiktan sonra):
#   source vivado_enable.sh
#   bash fpga/systolic_soc/sw/build_sw.sh
#
# Cikti: fpga/systolic_soc/sw/workspace/app/build/systolic_test.elf
#
# Gereksinim: arm-none-eabi-gcc (Ubuntu: gcc-arm-none-eabi libnewlib-arm-none-eabi
#             libstdc++-arm-none-eabi-newlib) ve PyYAML'li bir python3.
set -euo pipefail

SW_DIR=$(cd "$(dirname "$0")" && pwd)
XSA=$(realpath "$SW_DIR/../build/system.xsa")
WS=$SW_DIR/workspace

# empyro (pyesw) PATH'teki python3'u kullanir; conda ortamlarinda yaml olmayabilir
PATH=$(echo "$PATH" | tr ':' '\n' | grep -v -e miniforge -e conda | paste -sd:)
export PATH

command -v arm-none-eabi-gcc >/dev/null || { echo "arm-none-eabi-gcc bulunamadi"; exit 1; }
command -v empyro >/dev/null || { echo "empyro bulunamadi: once 'source vivado_enable.sh'"; exit 1; }

rm -rf "$WS"
mkdir -p "$WS"
cd "$WS"

echo "== 1/4 System Device Tree (XSA -> sdt/) =="
sdtgen -eval "set_dt_param -xsa $XSA -dir $WS/sdt; generate_sdt" > sdt.log 2>&1

echo "== 2/4 BSP (standalone, ps7_cortexa9_0) =="
empyro create_bsp -s "$WS/sdt/system-top.dts" -p ps7_cortexa9_0 -o standalone \
    -t empty_application -w "$WS/bsp" > bsp.log 2>&1
empyro build_bsp -d "$WS/bsp" >> bsp.log 2>&1

echo "== 3/4 Uygulama =="
empyro create_app -d "$WS/bsp" -t empty_application -n systolic_test -w "$WS/app" > app.log 2>&1
cp "$SW_DIR/src/main.c" "$WS/app/src/"

echo "== 4/4 Derleme =="
empyro build_app -s "$WS/app/src" -b "$WS/app/build" >> app.log 2>&1

arm-none-eabi-size "$WS/app/build/systolic_test.elf"
echo "BITTI: $WS/app/build/systolic_test.elf"
