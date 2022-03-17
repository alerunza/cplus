#include <iostream>
/* Scrivi un programma in C++ che
permetta di visualizzare tutti gli elementi di un vettore.
Suggerimento:
Si devono implementare le seguenti funzioni:
carica_vettore  che inserisce gli elementi all’interno
dell’array;
stampa_vettore che visualizza a
monitor gli elementi inseriti. */
using namespace std;

int array[5];

void carica_vettore(){
    for(int i = 0; i < 5; i++){
        cin>>array[i];
    }
}
void stampa_vettore(){
    for(int i = 0; i < 5; i++){
        cout<<array[i]<<endl;
    }
}

int main(){
    //carica array
    carica_vettore();
    //stampa array
    stampa_vettore();
}