#include <iostream>

using namespace std;

// Fungsi untuk mencari nilai maksimal dari n bilangan
int cariNilaiMaksimal(const int *arr, int n) {
    int maksimal = *arr; // Inisialisasi maksimal dengan nilai pertama

    for (int i = 1; i < n; ++i) {
        if (*(arr + i) > maksimal) {
            maksimal = *(arr + i);
        }
    }

    return maksimal;
}

int main() {
    int n;

    cout << "Masukkan jumlah bilangan: ";
    cin >> n;

    int *bilangan = new int[n];

    cout << "Masukkan bilangan-bilangan:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Bilangan ke-" << i + 1 << ": ";
        cin >> *(bilangan + i);
    }

    //fungsi untuk mencari nilai maksimal
    int maksimal = cariNilaiMaksimal(bilangan, n);

    // Menampilkan hasil
    cout << "Nilai Maksimal: " << maksimal << endl;

    delete[] bilangan;

    return 0;
}