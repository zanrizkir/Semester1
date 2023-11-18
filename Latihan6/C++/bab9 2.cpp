#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Fungsi untuk mengkonversi nilai huruf ke nilai
double konversiHurufKeNilai(string nilai) {
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
    int jumlah_matkul,sks;
    double total_sks = 0.0;
    double total_nilai = 0.0;
    string nama_lkp,nim,jurusan,nama_matkul,nilai;

    cout << "==================== Menghitung IPK ====================" <<endl;
    cout << "Nama Lengkap : ";
    cin >> nama_lkp;
    getline(cin, nama_lkp);
    cout << "NIM : ";
    cin >> nim;
    cout << "Jurusan : ";
    cin >> jurusan;
    getline(cin, jurusan);
    cout << "Masukkan jumlah mata kuliah: ";
    cin >> jumlah_matkul;

    for (int i = 1; i <= jumlah_matkul; i++) {
        cout << "Nama Mata Kuliah ke-" << i << ": ";
        cin.ignore(); 
        getline(cin, nama_matkul);

        cout << "Jumlah SKS Mata Kuliah " << nama_matkul << ": ";
        cin >> sks;

        cout << "Nilai Mata Kuliah " << nama_matkul << " (A, A-, B+, B, B-, C+, C, D, atau E): ";
        cin >> nilai;

        double bobot_nilai = konversiHurufKeNilai(nilai);

        if (bobot_nilai == -1.0) {
            cout << "Nilai tidak valid. Silakan masukkan nilai yang benar." << endl;
            return 1;  // Keluar program dengan kode kesalahan
        }

        total_sks += sks;
        total_nilai += bobot_nilai * sks;
    }

    double ipk = total_nilai / total_sks;

    cout << fixed << setprecision(2);
    cout << "IPK Anda adalah: " << ipk << endl;

    return 0;
}