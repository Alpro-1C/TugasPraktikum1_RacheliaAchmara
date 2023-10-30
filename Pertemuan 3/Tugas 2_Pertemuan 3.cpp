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
    //jika angka pertama lebih besar dari angka kedua dan angka ketiga, maka angka terbesar yang muncul adalah angka pertama(X)
    }

    else if (Y>X && Y>Z){
    cout<<Y<< " adalah angka terbesar.";
    //jika angka kedua lebih besar dari angka pertama dan angka ketiga, maka angka terbesar yang muncul adalah angka kedua(Y)
    }

    else if (Z>X && Z>Y){
    cout<<Z<< " adalah angka terbesar."<<endl<<endl;
    //jika angka ketiga lebih besar dari angka pertama dan kedua, maka angka terbesar yang muncul adalah angka ketiga(Z)
    }
    return 0;
}
