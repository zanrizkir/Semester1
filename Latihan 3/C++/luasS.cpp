#include <iostream>
#include <cmath>


using namespace std;

int main() {
    int tinggi, alas, sisimiring, keliling;

    cout << "Masukan Tinggi Segitiga    : ";
    cin >> tinggi;
    cout << "Masukan Alas Segitiga      : ";
    cin >> alas;

    sisimiring = sqrt(alas * alas + tinggi * tinggi);
    keliling = (alas + tinggi + sisimiring);

    cout << "Sisimiring = " << sisimiring << endl;
    cout << "Keliling = " << keliling ;

    return 0;
}
