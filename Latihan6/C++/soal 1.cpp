#include <iostream>
using namespace std;

int main() {
    int tgl_lahir_array[3] = {25, 7, 1999};
    int *tgl_lahir_pointer = tgl_lahir_array;

    cout<<"Diakses dengan pointer";
    cout<<"\nTanggal = " << *tgl_lahir_pointer;
    cout<<"\nBulan = " << *(tgl_lahir_pointer + 1);
    cout<<"\nTahun = " << *(tgl_lahir_pointer + 2);

    cout<<"\n\nDiakses dengan array biasa";
    cout<<"\nTanggal = "<< tgl_lahir_array[0];
    cout<<"\nBulan = "<< tgl_lahir_array[1];
    cout<<"\nTahun = "<< tgl_lahir_array[2];

    return 0;
}