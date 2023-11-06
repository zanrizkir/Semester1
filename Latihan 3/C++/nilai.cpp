#include <iostream>

using namespace std;

int main() {
    int nilai_pratikum, nilai_teori, final_prject;

    cout << "Masukan Nilai Pratikum = ";
    cin >> nilai_pratikum;
    cout << "Masukan Nilai Teori = ";
    cin >> nilai_teori;
    cout << "Masukan Nilai Tugas dan Final Project = ";
    cin >> final_prject;

    int rata_rata = (0.4 * nilai_pratikum) + (0.4 * nilai_teori) + (0.2 * final_prject);

    cout << "Nilai Rata-rata mata kuliah Algoritma Struktur Data " << rata_rata;

    return 0;
}
