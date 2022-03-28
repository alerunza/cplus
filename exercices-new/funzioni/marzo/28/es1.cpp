#include <iostream>

using namespace std;

void doppio(float n){
     float doppio;

     doppio = n * n;

     cout<<doppio<<endl;
}

void cubo(float n){
     float cubo;

     cubo =  n * n * n;

     cout<<cubo<<endl;
}

int main(){
     int numero;

     cout<<"Inserisci un numero..."<<endl;
          cin>>numero;
     
     doppio(numero);
     cubo(numero);

     return 0;
}