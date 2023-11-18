#include <iostream>

using namespace std;

// Fungsi untuk menentukan keterangan nilai
void keteranganNilai(const int *nilai) {
    if (*nilai >= 90 && *nilai <= 100) {
        cout << "Keterangan: A" << endl;
    } else if (*nilai >= 80 && *nilai < 90) {
        cout << "Keterangan: B" << endl;
    } else if (*nilai >= 70 && *nilai < 80) {
        cout << "Keterangan: C" << endl;
    } else if (*nilai >= 60 && *nilai < 70) {
        cout << "Keterangan: D" << endl;
    } else if (*nilai >= 50 && *nilai < 60) {
        cout << "Keterangan: E" << endl;
    } else if (*nilai < 50) {
        cout << "Keterangan: Tidak Lulus" << endl;
    } else {
        cout << "Nilai tidak benar/sesuai." << endl;
    }
}

int main() {
    int nilai;

    // Meminta pengguna memasukkan nilai mata kuliah
    cout << "Masukkan nilai mata kuliah: ";
    cin >> nilai;

    // Memanggil fungsi untuk menentukan keterangan nilai
    keteranganNilai(&nilai);

    return 0;
}