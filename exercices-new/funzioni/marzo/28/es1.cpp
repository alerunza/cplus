#include <iostream>
/* Le funzioni "doppio" e  "cubo" 
Definisci le funzioni "doppio" ( che riceve in ingresso un numero reale e restitusce il suo doppio) 
e "cubo" ( che riceve un numero reale e ne restituisce il cubo). 
crivi un programma che richiede all'utente un numero x e utilizza le due funzioni per calcolare: */
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