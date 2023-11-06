#include <iostream>
#include <cmath>

using namespace std;

// Mendefinisikan konstanta untuk akar dan pangkat
const int akar = 2;
const int pangkat = 2;

int main() {
    double bilangan = 4;

    // Menghitung akar dan pangkat tiga bilangan
    double hasilAkar = pow(bilangan, 1.0 / akar);
    double hasilPangkat = pow(bilangan, pangkat);

    // Menampilkan hasil
    cout << "Akar dari angka " << bilangan << " = " << hasilAkar << endl;
    cout << bilangan << " pangkat " << pangkat << " adalah " << hasilPangkat << endl;

    return 0;
}

