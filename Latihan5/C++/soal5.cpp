#include <iostream>

int main() {
    // Inisialisasi a
    int a = 10;

    // Loop i dari a hingga 1
    for (int i = a; i >= 1; i--) {
        // Loop n dari 1 hingga i
        for (int n = 1; n <= i; n++) {
            // Jika nilai Loop n tidak lebih besar dari a
            if (n <= a) {
                std::cout << i * n << " ";
            }
        }
        // Akhir loop n
        std::cout << std::endl;  // Cetak baris kosong
    }

    // Jika nilai loop i lebih besar dari a
    if (a < 1) {
        std::cout << "Program selesai" << std::endl;
    }

    return 0;
}