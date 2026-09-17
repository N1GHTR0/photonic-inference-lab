# Kullanım: source conda_enable.sh
# (Doğrudan "bash conda_enable.sh" ile çalıştırırsan aktivasyon terminaline yansımaz.)

if [[ "${BASH_SOURCE[0]}" == "${0}" ]]; then
    echo "Bu script 'source' ile çalıştırılmalı, yoksa aktivasyon kalıcı olmaz."
    echo "Doğru kullanım: source conda_enable.sh"
    exit 1
fi

source "$HOME/miniforge3/etc/profile.d/conda.sh"
conda activate photonic-inference
echo "Ortam aktif: $(python3 -c 'import sys; print(sys.executable)')"
