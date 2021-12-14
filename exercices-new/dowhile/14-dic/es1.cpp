#include <iostream>
/* Calcolare la somma di tutti i numeri interi compresi fra due valori positivi dati in input */
using namespace std;

int main() {
    float a, b, c;

     cout<<"inserisci 2 numeri"<<endl;
          cin>>a>>b;
     cout<<"\n"<<endl;

    while(a<=b){
        c=c+a;
        a++;
        cout<<a<<endl;
    }

    cout<<"\n"<<c<<" - Numero Sommato"<<endl;

    return 0;
}