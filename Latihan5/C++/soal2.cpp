#include <iostream>
using namespace std;

int main() {
    // Inisialisasi variabel
    double total_penjualan = 0;
    int n;
    
    // Meminta jumlah jenis barang
    cout << "Masukkan jumlah jenis barang: ";
    cin >> n;

    // Loop untuk menginput harga dan jumlah barang
    for (int i = 0; i < n; i++) {
        double harga;
        int jumlah;
        cout << "Masukkan harga barang ke-" << i + 1 << ": ";
        cin >> harga;
        cout << "Masukkan jumlah barang ke-" << i + 1 << ": ";
        cin >> jumlah;
        double subtotal = harga * jumlah;
        total_penjualan += subtotal;
    }

    // Menghitung diskon berdasarkan total penjualan
    double diskon = 0;
    if (total_penjualan > 500000) {
        diskon = 0.1;  // Diskon 10%
    } else if (total_penjualan >= 200000) {
        diskon = 0.05;  // Diskon 5%
    }

    // Menghitung total pembayaran setelah diskon
    double total_pembayaran = total_penjualan - (total_penjualan * diskon);

    // Menampilkan total penjualan dan total pembayaran
    cout << "Total Penjualan: Rp " << total_penjualan << endl;
    cout << "Diskon: " << (diskon * 100) << "%" << endl;
    cout << "Total Pembayaran setelah Diskon: Rp " << total_pembayaran << endl;

    return 0;
}
