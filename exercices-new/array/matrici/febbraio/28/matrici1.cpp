#include <iostream>
/* 1 - Scrivere un programma che calcola la
somma di due array inseriti da tastiera. */
using namespace std;

int main(){
    int n1, n2;

    cout<<"Inserisci la dimensione del primo ARRAY"<<endl;
        cin>>n1;
    int array1[n1];

    cout<<"Inserisci la dimensione del secondo ARRAY"<<endl;
        cin>>n2;
    int array2[n2];

    cout<<"Inserisci i numeri all'interno del primo ARRAY"<<endl;
    for(int i = 0; i < n1; i++){ // inserimento array 1
        cin>>array1[i];
    }
    cout<<"Inserisci i numeri all'interno del Secondo ARRAY"<<endl;
    for(int i = 0; i < n2; i++){ // inserimento array 2
        cin>>array2[i];
    }
    cout<<endl;
    cout<<"Primo ARRAY: "<<endl;
    for(int i = 0; i < n1; i++){ // stampa array 1
        cout<<array1[i]<<endl;
    }
    cout<<endl;
    cout<<"Secondo ARRAY: "<<endl;
    for(int i = 0; i < n2; i++){ // stampa array 2
        cout<<array2[i]<<endl;
    }

/*     int somma = 0;
    int var = n1 + n2;
    for(int i = 0; i < var; i++){ // somma array 1 + 2
        somma = array1[i] + array2[i];
    } */
    int somma = 0;
    for(int i = 0; i < n1; i++){ // stampa array 1
        somma += array1[i];
    }
    int somma2 = 0;
    for(int i = 0; i < n2; i++){ // stampa array 1
        somma2 += array2[i];
    }
    cout<<"Somma tra ARRAY 1 e ARRAY 2: "<<somma+somma2<<endl;

}