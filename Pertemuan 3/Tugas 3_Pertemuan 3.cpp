#include <iostream>
using namespace std;
int main (){
    cout<<"SOAL 3 : MENGHITUNG LUAS PERSEGI, PERSEGI PANJANG, DAN SEGITIGA"<<endl<<endl;
    int bangundatar, luas;
    //tersedia 3 pilihan bangun datar
    cout<<"Pilih bangun datar yang tersedia :"<<endl;
    cout<<"1. Persegi"<<endl; //ketik 1 untuk menghitung luas persegi
    cout<<"2. Persegi Panjang"<<endl; //ketik 2 untuk menghitung luas persegi panjang
    cout<<"3. Segitiga"<<endl<<endl; //ketik 3 untuk menghitung luas segitiga
    cout<<"Masukkan pilihan (1/2/3) :";
    cin>>bangundatar;
    cout<<endl;

switch (bangundatar){
    case 1: //untuk menghitung luas persegi
        cout<<"Anda memilih persegi"<<endl; //jika mengetik 1 pada pilihan sebelumnya, maka kalimat ini akan muncul
        int sisi; //untuk mendeklarasikan sisi
        cout<<" Masukkan panjang sisi persegi: ";
        cin>>sisi;
        luas=sisi*sisi; //proses perhitungan
        cout<<"Luas persegi adalah : "<<luas<<endl; //jika panjang sisi telah di input, hasil perhitungan akan muncul
        break; //break untuk membatasi gerakan dari case 1 ke case lainnya

    case 2: //untuk menghitung luas persegi panjang
        cout<<"Anda memilih persegi panjang"<<endl; //jika mengetik 2 pada pilihan sebelumnya, maka kalimat ini akan muncul
        int panjang, lebar; //untuk mendeklarasikan panjang dan lebar
        cout<<"Masukkan panjang: ";
        cin>>panjang;
        cout<<"Masukkan lebar: ";
        cin>>lebar;
        luas=panjang*lebar; //proses perhitungan
        cout<<"Luas persegi panjang adalah : "<<luas<<endl; //jika panjang dan lebar telah di input, maka hasil perhitungan akan muncul
        break; //break untuk membatasi gerakan dari case 2 ke case lainnya

    case 3: //untuk menghitung luas segitiga
        cout<<"Anda memilih segitiga"<<endl; //jika mengetik 3 pada pilihan sebelumnya, maka kalimat ini akan muncul
        int alas, tinggi; //untuk mendeklarasikan alas dan tinggi
        cout<<"Masukkan panjang alas: ";
        cin>>alas;
        cout<<"Masukkan tinggi segitiga: ";
        cin>>tinggi;
        luas=0.5*alas*tinggi; //proses perhitungan
        cout<<"Luas segitiga adalah :"<<luas<<endl; //jika alas dan tinggi telah di input, maka hasil perhitungan akan muncul
        break; //break untuk membatasi gerakan dari case 3 ke case lainnya

    default:
        cout<<"Pilihan tidak tersedia."<<endl; //jika pilihan yang diinput tidak sesuai, maka kalimat ini akan muncul
        cout<<endl;
    }
return 0;
}
