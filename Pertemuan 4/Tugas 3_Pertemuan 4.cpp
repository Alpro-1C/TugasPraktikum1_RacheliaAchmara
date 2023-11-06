#include <iostream>
using namespace std;
int main()
{
    cout<< "Program C++ BILANGAN FIBONACCI"<<endl;
    cout<< "------------------------------"<<endl;
    cout<< endl;

    int n; //untuk mendeklarasikan variabel n
    cout<< "Masukkan jumlah suku pada deret: "; //yang akan tampil pada user (output)
    cin>> n; //input variabel n

    int U1=0, U2=1, U3; //untuk mendeklarasikan suku/bilangan pada deret

    cout<<endl;

    cout<<n<< " Suku Pertama Deret Fibonacci adalah: "; //yang akan tampil pada user (output)

    for (int i=0; i<n; i++){
        if (i<2){
            U3=i;
        }
        else {
            U3=U1+U2;
            U1=U2;
            U2=U3;
        }
        cout<<U3<<" ";
    }
    cout<<endl;
    return 0;
}
