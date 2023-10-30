#include <iostream>
using namespace std;
int main (){
    int score;
    cout<<"SOAL 1: MENGEVALUASI NILAI SCORE"<<endl<<endl;
    cout<<"Masukkan score anda : ";
    cin>> score;

    if (score>=90){
        cout<<"Selamat! Anda mendapatkan nilai A.";
        //jika score yang diinput 90 atau lebih, maka kalimat ini yang akan muncul
    }
    else if (score>=80 && score<=89){
        cout<<"Anda mendapatkan nilai B."<<endl;
        //jika score yang diinput antara 80-89, maka kalimat ini yang akan muncul
    }
    else if (score>=70 && score<=79){
        cout<<"Anda mendapatkan nilai C."<<endl;
        //jika score yang diinput antara 70-79, maka kalimat ini yang akan muncul
    }
    else if (score>=60 && score<=69){
        cout<<"Anda mendapatkan nilai D."<<endl;
        //jika score yang diinput antara 60-69, maka kalimat ini yang akan muncul
    }
    else if (score<60){
        cout<<"Anda mendapatkan nilai E."<<endl;
        //jika score yang diinput kurang dari 60, maka kalimat ini yang akan muncul
    }
    return 0;
}
