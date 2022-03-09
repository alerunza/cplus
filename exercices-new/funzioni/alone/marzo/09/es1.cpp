#include <iostream>
/* Creare una funzione che calcola e restituisce il valore assoluto di un numero intero. */
using namespace std;

int valass(int x){
    if(x<0){
        x=-x;
    }
    
    return x;
}

int main(){

    int num;

    cout<<"Inserisci un numero"<<endl;
        cin>>num;
    cout<<"VALORE Assoluto: "<<valass(num)<<endl;
}