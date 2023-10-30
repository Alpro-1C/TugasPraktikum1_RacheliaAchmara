#include <iostream>
using namespace std;
int main(){
    cout<<"SOAL 2: MENENTUKAN NILAI TERBESAR DARI 3 ANGKA"<<endl<<endl;
    int X,Y,Z;
    cout<<"Masukkan angka pertama: ";
    cin>>X;

    cout<<"Masukkan angka kedua: ";
    cin>>Y;

    cout<<"Masukkan angka ketiga: ";
    cin>>Z;

cout<<" "<<endl<<endl;

    if (X>Y && X>Z){
    cout<<X<< " adalah angka terbesar.";
    }

    else if (Y>X && Y>Z){
    cout<<Y<< " adalah angka terbesar.";
    }

    else if (Z>X && Z>Y){
    cout<<Z<< " adalah angka terbesar."<<endl<<endl;
    }
    return 0;
}
