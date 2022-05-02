#include <iostream>
/* Scrivere un programma in C++ che, 
acquisito un numero da tastiera comunichi all’esterno se è pari o dispari. */
using namespace std;

void paridispari(int numero);

int main(){

    int num;

    cout<<"Inserisci un NUMERO"<<endl;
        cin>>num;
        
    paridispari(num);
}

void paridispari(int numero){
    if(numero%2==0){
        cout<<numero<<" - PARI"<<endl;
    } else{
        cout<<numero<<" - DISPARI"<<endl;
    }
}