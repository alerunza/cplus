#include <iostream>
#include <string>
#include <cmath>
/* 4 - Dato un numero binario, trasformarlo in decimale. */
using namespace std;

int main(){

    string bin; // stringa binario

    cout<<"Inserisci un numero binario"<<endl;  
        cin>>bin;

    cout<<bin.length()<<endl;
    int n = bin.length();
    float dec, dec0;
    for(int i = 0; i<=n; i++){
        dec0 = 1* pow(2, 0);
        dec = dec0 + 1 * pow(2, i);
    }
    cout<<dec<<endl;
}