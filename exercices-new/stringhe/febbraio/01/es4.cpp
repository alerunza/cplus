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
    float dec;
    for(int i = 0; n!=0; i++){
        if(bin[i]=='1'){
            dec += pow(2, n-1); //se è 1 si potrà elevare a 2, e se è -1 non si potrà elevare dato che parte 0
        }
        n--;
    }
    cout<<dec<<endl;
}