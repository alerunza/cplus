#include <iostream>

using namespace std;

int numfattoriale(int num);

int main(){
     int numero;
     
     cout<<"Inserisci un NUMERO"<<endl;
          cin>>numero;

     cout<<"Il NUMERO Fattoriale "<<numero<<"! e' : "<<numfattoriale(numero)<<endl;
}

int numfattoriale(int num){
     int fattoriale = 1;

     for(int i = num; i>1; i--){
          fattoriale = fattoriale * i;
     }

     return fattoriale;
}