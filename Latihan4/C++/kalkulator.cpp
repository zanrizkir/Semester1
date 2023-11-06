#include <iostream>

using namespace std;

int main()
{
    char operasi;
    double angka1, angka2;
    char lanjut;

    do
    {
        cout << "Masukkan operasi (+, -, *, /, %): ";
        cin >> operasi;

        cout << "Masukkan angka pertama: ";
        cin >> angka1;

        cout << "Masukkan angka kedua: ";
        cin >> angka2;

        switch (operasi)
        {
        case '+':
            cout << "Hasil penjumlahan: " << angka1 + angka2 << endl;
            break;
        case '-':
            cout << "Hasil pengurangan: " << angka1 - angka2 << endl;
            break;
        case '*':
            cout << "Hasil perkalian: " << angka1 * angka2 << endl;
            break;
        case '/':
            if (angka2 != 0)
            {
                cout << "Hasil pembagian: " << angka1 / angka2 << endl;
            }
            else
            {
                cout << "Tidak dapat membagi oleh nol." << endl;
            }
            break;
        case '%':
            if (angka2 == 0)
            {
                cout << "Tidak bisa melakukan modulo dengan nol" << endl;
            }
            else
            {
                int hasil_modulo = static_cast<int>(angka1) % static_cast<int>(angka2);
                cout << "Hasil modulo: " << hasil_modulo << endl;
            }
            break;
        default:
            cout << "Operasi tidak valid." << endl;
        }

        cout << "Apakah Anda ingin melanjutkan (y/n)? ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    cout << "Terima kasih telah menggunakan kalkulator!" << endl;

    return 0;
}

