#include <iostream>
using namespace std;
int main ()
{
    cout << "PROGRAM C++ MENCARI NILAI TERTINGGI DALAM ARRAY" << endl;
    cout << "------------------------------------------------" << endl;
    cout << endl;

    int x=100;
    int arr[x];
    int n;

    //input jumlah elemen array
    cout << "Masukkan jumlah elemen array yang kamu inginkan: ";
    cin >> n;
    cout << endl;

    //input nilai dalam array
    cout << "Silahkan masukkan nilai dalam array: " << endl;
    for (int i=0; i < n; ++i){
        cout << "Elemen ke- " << i+1 << " : ";
        cin >> arr[i];
    }

    //mencari nilai tertinggi dalam array
    int nilai_max = arr[0];
    int indeks = 0;

    for (int i=1; i < n; ++i){
        if (arr[i] > nilai_max){
            nilai_max = arr[i];
            indeks = i;
        }
    }

    //menampilkan hasil
    cout << endl;
    cout << "Maka, nilai tertinggi dalam array adalah: " << nilai_max << endl;

    if (indeks !=-1){
        cout << "dan ditemukan pada indeks ke- " << indeks << endl;
    }
    cout << endl;

    return 0;
}
