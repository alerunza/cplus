#include <iostream>
/* Calcolare la somma di tutti i numeri interi compresi fra due valori positivi dati in input */
using namespace std;

int main(){
     int somma, a, b;

     cout<<"Inserisci due numeri in due input"<<endl;
          cin>>a>>b;
     
     while(a<=b){
          somma=+a;
          a++;
          cout<<somma<<endl;
     }

    return 0;
}