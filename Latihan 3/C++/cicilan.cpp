#include <iostream>

using namespace std;

int main() {
    int harga_motor, lama_kredit;

    cout << "Masukan harga motor                = ";
    cin >> harga_motor;
    cout << "Masukan lama kredit (dalam bulan)  = ";
    cin >> lama_kredit;

    int harga_pokok = harga_motor / lama_kredit;
    int bunga = (harga_pokok * 0.1);
    int cicilan = harga_pokok + bunga;
    int total_harga = cicilan * lama_kredit;
    int keuntungan = total_harga - harga_motor;

    cout << "Cicilan /bulan     : " << cicilan << endl;
    cout << "Total harga motor  : " << total_harga << endl;
    cout << "Keuntungan Dealer  : " << keuntungan;

    return 0;

}
