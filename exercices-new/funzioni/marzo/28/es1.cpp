#include <iostream>
/* Le funzioni "doppio" e  "cubo" 
Definisci le funzioni "doppio" ( che riceve in ingresso un numero reale e restitusce il suo doppio) 
e "cubo" ( che riceve un numero reale e ne restituisce il cubo). 
crivi un programma che richiede all'utente un numero x e utilizza le due funzioni per calcolare: */
using namespace std;

float doppio(float n){
     float doppio;

     doppio = n * 2;

     return doppio;
}

float cubo(float n){
     float cubo;

     cubo =  n * n * n;

     return cubo;
}

int main(){
     int numero;

     cout<<"Inserisci un numero..."<<endl;
          cin>>numero;
     
     cout<<"Ecco il DOPPIO del numero: "<<numero<<" - "<<doppio(numero)<<endl;
     cout<<"Ecco il CUBO del numero: "<<numero<<" - "<<cubo(numero)<<endl;

     return 0;
}