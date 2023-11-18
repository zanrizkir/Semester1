#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama_kry, pendidikan;
    int jumlah_anak, jenis_kelamin, gaji_pokok, tunjangan_istri, tunjangan_anak, gaji_bersih;

    cout << "=================== DATA KARYAWAN ====================" <<endl;
    cout << "Masukan Nama Lengkap : ";
    cin >> nama_kry;
    cout << "Masukkan jenis kelamin (1 = Laki-laki / 2 = Perempuan) : ";
    cin >> jenis_kelamin;
    cout << "Masukkan pendidikan (D3/S1/S2) : ";
    cin >> pendidikan;
    cout << "Masukkan jumlah anak: ";
    cin >> jumlah_anak;

    // Menghitung gaji pokok dari pendidikan
    if (pendidikan == "D3") {
        gaji_pokok = 500000;
    } else if (pendidikan == "S1") {
        gaji_pokok = 750000;
    } else if (pendidikan == "S2") {
        gaji_pokok = 1000000;
    } else {
        cout << "Pilihan Pendidikan tidak sesuai." << endl;
        return 1;
    }

    if (jenis_kelamin != 1 && jenis_kelamin != 2)
    {
        cout << "Pilihan Jenis Kelamin tidak sesuai." << endl;
        return 1;
    }

    // Menghitung tunjangan istri
    tunjangan_istri = (jenis_kelamin == 1) ? 500000 : 0;

    // Menghitung tunjangan anak
    tunjangan_anak = (jenis_kelamin == 1 && jumlah_anak > 0 && jumlah_anak <= 2) ? (200000 * jumlah_anak) : 0;

    // Menghitung gaji bersih setelah dipotong pajak 5%
    gaji_bersih = gaji_pokok + tunjangan_istri + tunjangan_anak * 0.05;

    // Hasil penghitungan
    cout << "Gaji Pokok        : Rp. " << gaji_pokok << endl;
    cout << "Tunjangan Istri   : Rp. " << tunjangan_istri << endl;
    cout << "Tunjangan Anak    : Rp. " << tunjangan_anak << endl;
    cout << "Gaji Bersih       : Rp. " << gaji_bersih << endl;

    return 0;
}