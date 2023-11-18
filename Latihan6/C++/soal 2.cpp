#include <iostream>
using namespace std;

int main() {
    int max_huruf = 5;
    char nama[max_huruf];

    cout << "Masukkan huruf dalam nama Anda (maksimal 5 huruf):\n";

    for (int i = 0; i < max_huruf; ++i) {
        cout << "Input elemen [" << i << "] = ";
        cin >> *(nama + i);
    }

    cout << "[";
    for (int i = 0; i < max_huruf - 1; ++i) {
        cout << *(nama + i) << " ";
    }
    cout << *(nama + max_huruf - 1) << "]\n";

    return 0;
}