#include <iostream>

using namespace std;

// Fungsi Kalkulator
float tambah(float a, float b) {
    return a + b;
}

float kurang(float a, float b) {
    return a - b;
}

float kali(float a, float b) {
    return a * b;
}

float bagi(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Pembagian oleh nol tidak bisa." << endl;
        return 0;
    }
}

int modulo(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        cout << "Modulo dengan nol tidak bisa." << endl;
        return 0;
    }
}

int main() {
    float bilangan1, bilangan2;
    char operasi;

    // Memasukan bilangan dan operasi
    cout << "Masukkan bilangan Pertama : ";
    cin >> bilangan1;

    cout << "Pilih salah satu operasi (+, -, *, /, %) : ";
    cin >> operasi;

    cout << "Masukan bilangan Kedua : ";
    cin >> bilangan2;

    // Menentukan operasi yang di pilih
    switch (operasi) {
        case '+':
            cout << bilangan1 << " + " << bilangan2 << " = " << tambah(bilangan1, bilangan2) << endl;
        break;
        case '-':
            cout << bilangan1 << " - " << bilangan2 << " = " << kurang(bilangan1, bilangan2) << endl;
        break;
        case '*':
            cout << bilangan1 << " * " << bilangan2 <<" = " << kali(bilangan1, bilangan2) << endl;
        break;
        case '/':
            cout << bilangan1 << " / " << bilangan2 << " = " << bagi(bilangan1, bilangan2) << endl;
        break;
        case '%':
            cout << bilangan1 << " % " << bilangan2 << " = " << modulo(bilangan1, bilangan2) << endl;
        break;
        default:
            cout << "Operasi tidak sesuai." << endl;
        break;
    }

    return 0;
}