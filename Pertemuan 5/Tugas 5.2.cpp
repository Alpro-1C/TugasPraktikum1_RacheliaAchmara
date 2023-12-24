#include <iostream>
using namespace std;

void gambarPiramida (int tinggi_piramida);

int tinggi_piramida,i,j,k;
    //i untuk membuat tinggi segitiga
    //j untuk membuat spasi yang akan mendorong karakter bintang ke arah kanan
    //k untuk menampilkan karakter bintang

void gambarPiramida (int tinggi_piramida)
{
    //looping untuk membuat piramida
    for(i=1; i<=tinggi_piramida; i++){

        for(j=1; j<=tinggi_piramida-i; j++){
          cout<<" ";
        }
        for (k=1; k<=i; k++){
          cout<<" *";
        }
        cout<<endl;
    }
}

int main(){
cout<<"PROGRAM C++ PIRAMIDA BINTANG"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<endl;

    cout<<"Input tinggi piramida : ";
    cin>>tinggi_piramida;
    cout<<endl;

    gambarPiramida(tinggi_piramida);
    cout<<endl;
}
