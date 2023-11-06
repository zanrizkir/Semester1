#include <iostream>

using namespace std;

int main() {
    string nama, NIK;
    int jk, sp, kendaraan, gajiPokok, uangMakan, Tunjangan, Transport, GajiKotor, Pajak, GajiBersih;

    cout << "Masukan nama : ";
    getline(cin, nama);
    cout << "Masukan NIK : ";
    getline(cin, NIK);
    cout << "Masukan Jenis Kelamin (0=perempuan 1=laki-laki) : ";
    cin >> jk;
    cout << "Masukan Status Pernikahan (0=belum 1=sudah) : ";
    cin >> sp;
    cout << "Masukan Jenis Kendaraan (0=motor 1=mobil) : ";
    cin >> kendaraan;
    cout << "Masukan Gaji Pokok : ";
    cin >> gajiPokok;
    cout << "Masukan Uang Makan : ";
    cin >> uangMakan;

    // menghitung Tunjangan
    if(jk == 1 && sp == 1){
        Tunjangan = 500;
    }else{
        Tunjangan = 0;
    }

    // menghitung transport
    if(kendaraan == 1){
        Transport = 1000;
    }else if(kendaraan == 0){
        Transport = 500;
    }else{
        Transport = 0;
    }

    //gaji
    GajiKotor = gajiPokok + Tunjangan + uangMakan + Transport;
    Pajak = (0.05 * GajiKotor);
    GajiBersih = GajiKotor - Pajak;

    cout << "Tunjangan = " << Tunjangan <<endl;
    cout << "Transportasi = " << Transport <<endl;
    cout << "Gaji Kotor = " << GajiKotor <<endl;
    cout << "Pajak = " << Pajak <<endl;
    cout << "Gaji Bersih = " << GajiBersih <<endl;

    // cout << nama;
    
    return 0;
}
