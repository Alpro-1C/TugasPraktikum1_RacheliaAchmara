#include <iostream>
using namespace std;
int main()
{
    cout<<"PROGRAM C++ PIRAMIDA BINTANG"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<endl;

    int tinggi_segitiga,i,j,k;
    //i untuk membuat tinggi segitiga
    //j untuk membuat spasi yang akan mendorong karakter bintang ke arah kanan
    //k untuk menampilkan karakter bintang

    cout<<"Input tinggi segitiga : ";
    cin>>tinggi_segitiga;

    cout<<endl;

    for(i=1; i<=tinggi_segitiga; i++){

        for(j=1; j<=tinggi_segitiga-i; j++){
          cout<<" ";
        }
        for (k=1; k<=i; k++){
          cout<<" *";
        }
        cout<<endl;
    }


    return 0;
}

