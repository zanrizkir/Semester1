#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Fungsi untuk mengkonversi nilai huruf ke bobot nilai
double konversiNilaiKeBobot(string nilai) {
    if (nilai == "A") return 4.0;
    if (nilai == "A-") return 3.7;
    if (nilai == "B+") return 3.3;
    if (nilai == "B") return 3.0;
    if (nilai == "B-") return 2.7;
    if (nilai == "C+") return 2.3;
    if (nilai == "C") return 2.0;
    if (nilai == "D") return 1.0;
    if (nilai == "E") return 0.0;
    return -1.0;  // Mengembalikan -1 jika nilai tidak valid
}

int main() {
    int jumlahMataKuliah;
    double totalSKS = 0.0;
    double totalNilai = 0.0;

    int pilihanMenu;

menu:
    cout << "Menu:\n";
    cout << "1. Menghitung IPK\n";
    cout << "2. Keluar\n";
    cout << "Pilih menu (1/2): ";
    cin >> pilihanMenu;

    if (pilihanMenu == 1) {
        cout << "Masukkan jumlah mata kuliah: ";
        cin >> jumlahMataKuliah;

        for (int i = 1; i <= jumlahMataKuliah; i++) {
            string namaMatkul;
            int sks;
            string nilai;

            cout << "Nama Mata Kuliah ke-" << i << ": ";
            cin.ignore();  // Menghapus karakter newline sebelum membaca string
            getline(cin, namaMatkul);

            cout << "Jumlah SKS Mata Kuliah " << namaMatkul << ": ";
            cin >> sks;

            cout << "Nilai Mata Kuliah " << namaMatkul << " (A, A-, B+, B, B-, C+, C, D, atau E): ";
            cin >> nilai;

            double bobotNilai = konversiNilaiKeBobot(nilai);

            if (bobotNilai == -1.0) {
                cout << "Nilai tidak valid. Silakan masukkan nilai yang benar." << endl;
                goto menu;  // Kembali ke menu utama
            }

            totalSKS += sks;
            totalNilai += bobotNilai * sks;
        }

        double ipk = totalNilai / totalSKS;

        cout << fixed << setprecision(2);
        cout << "IPK Anda adalah: " << ipk << endl;
        goto menu;  // Kembali ke menu utama
    } else if (pilihanMenu == 2) {
        cout << "Terima kasih! Program selesai." << endl;
    } else {
        cout << "Pilihan tidak valid. Silakan pilih menu yang benar." << endl;
        goto menu;  // Kembali ke menu utama
    }

    return 0;
}
