#include <iostream>
using namespace std;

int n, jumlah_ganjil=0, jumlah_genap=0,jumlah_prima=0;

void bilanganGanjil ();
void bilanganGenap ();
void bilanganPrima ();
void faktorGanjil ();
void faktorGenap ();
void faktorPrima ();

void bilanganGanjil (){
for (int i=0; i<=n; i++){
        if (i%2!=0){
            cout<<i<< " "; //menampilkan bilangan ganjil
            jumlah_ganjil +=i; //menjumlahkan bilangan ganjil
        }
    }
    cout<<endl;
}

void bilanganGenap (){
 for (int i=0; i<=n; i+=2){
        cout<<i<< " "; //menampilkan bilangan genap
        jumlah_genap +=i; //menjumlahkan bilangan genap
    }
    cout<<endl;
}

void bilanganPrima(){
for (int i=2; i<=n; i++){
        int j; //untuk mendeklarasi variabel
        for (j=2; j*j<=i && i%j!=0; j++){
        }
        if (j*j>i){
            cout<<i<<" "; //menampilkan bilangan prima
            jumlah_prima +=i; //menjumlahkan bilangan genap
        }
    }
    cout<<endl<<endl;
}

void faktorGanjil (){
 for (int k=1; k<=jumlah_ganjil; k++){
        if (jumlah_ganjil%k==0){
            cout<<k<<" ";
        }
    }
    cout<<endl;
}

void faktorGenap (){
 for (int l=1; l<=jumlah_genap; l++){
        if (jumlah_genap%l==0){
            cout<<l<<" ";
        }
    }
    cout<<endl;
}

void faktorPrima (){
for (int m=1; m<=jumlah_prima; m++){
        if (jumlah_prima%m==0){
            cout<<m<<" ";
        }
    }
    cout<<endl;
}


int main()
{
    cout << "Program C++ MENENTUKAN BILANGAN GANJIL, GENAP, DAN PRIMA DENGAN BATAS TERTENTU"<<endl;
    cout << "SERTA MENENTUKAN JUMLAH DAN FAKTOR DARI JUMLAH BILANGAN-BILANGAN TERSEBUT DENGAN FUNCTION"<<endl;
    cout << "------------------------------------------------------------------------------------------"<<endl;
    cout << endl;

    cout << "Masukkan batas bilangan: ";
    cin >> n; //untuk input batas akhir yang diinginkan
    cout << endl;
    cout << "Bilangan Ganjil: ";
    bilanganGanjil();
    cout << "Bilangan Genap: ";
    bilanganGenap();
    cout << "Bilangan Prima: ";
    bilanganPrima();
    cout << "Jumlah Bilangan Ganjil: " << jumlah_ganjil << endl;
    cout << "Jumlah Bilangan Genap: " << jumlah_genap << endl;
    cout << "Jumlah Bilangan Prima: " << jumlah_prima << endl <<endl;
    cout << "Faktor dari jumlah bilangan Ganjil: ";
    faktorGanjil();
    cout << "Faktor dari jumlah bilangan Genap: ";
    faktorGenap();
    cout << "Faktor dari jumlah bilangan Prima: ";
    faktorPrima();
    cout << endl;
}

