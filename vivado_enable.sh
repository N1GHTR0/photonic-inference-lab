# Kullanım: source vivado_enable.sh
if [[ "${BASH_SOURCE[0]}" == "${0}" ]]; then
    echo "Bu script 'source' ile çalıştırılmalı."
    echo "Doğru kullanım: source vivado_enable.sh"
    exit 1
fi

source /home/ahmet/2026.1/Vivado/settings64.sh
echo "Vivado ortamı aktif. Kullanılabilir komutlar: vivado, vlm, xsct"
