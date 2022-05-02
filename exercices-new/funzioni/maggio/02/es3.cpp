#include <iostream>
/* Scrivere un programma in C++ per il calcolo dei numeri primi. */
using namespace std;

bool checkprimo(int numero);

int main(){
    
    int num;

    cout<<"Inserisci un NUMERO"<<endl;
        cin>>num;

    if(checkprimo(num)){
        cout<<num<<" e' PRIMO"<<endl;
    } else{
        cout<<num<<" non e' PRIMO"<<endl;
    }
}

bool checkprimo(int numero){
    for(int div = 2; div < numero; div++){
        if(numero % div == 0){
            return false;
        }
    }
    return true;
}