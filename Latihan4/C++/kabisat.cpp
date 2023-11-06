#include <iostream>

using namespace std;

int main()
{
    int tahun;

    // Input tahun dari pengguna
    cout << "Masukkan tahun: ";
    cin >> tahun;

    // Cek apakah tahun kabisat
    if ((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0)
    {
        cout << tahun << " adalah tahun kabisat" << endl;
    }
    else
    {
        cout << tahun << " bukan tahun kabisat" << endl;
    }

    return 0;
}
