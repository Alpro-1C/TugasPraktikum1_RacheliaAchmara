#include <iostream>
using namespace std;
int main(){

//Menukar nilai dengan variabel tambahan
int x,y,z;
x=10;
y=8;

cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl<<endl;

z=x;
x=y;
y=z;

cout<<"Nilai setelah ditukar"<<endl<<endl;
cout<<"x="<<x<<endl;
cout<<"y="<<y<<endl;

return 0;
}
