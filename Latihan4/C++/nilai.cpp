#include <iostream>

using namespace std;

int main()
{
    int nilai;

    cout << "Masukan Nilai = ";
    cin >> nilai;
    if (nilai >= 80 && nilai <= 100)
    {
        cout << "Nilai A";
    }
    else if (nilai >= 65 && nilai <= 79)
    {
        cout << "Nilai B";
    }
    else if (nilai >= 50 && nilai <= 64)
    {
        cout << "Nilai C";
    }
    else if (nilai >= 35 && nilai <= 49)
    {
        cout << "Nilai D";
    }
    else if (nilai >= 0 && nilai <= 34)
    {
        cout << "Nilai E";
    }
    else
    {
        cout << "404 Not Found";
    }
    

    return 0;
}
