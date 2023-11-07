#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    for (int i = n; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}