#include <iostream>
/* Scrivere un programma che stampi a 
video tutti i numeri dispari compresi tra due estremi e  letti da tastiera. Il programma deve dire anche quanti sono. */
using namespace std;

int main(){
    int a, b, c = 0;

    cout<<"inserisci 2 numeri"<<endl;
        cin>>a>>b;

    while(a<=b){
        if(a%2==1){
            cout<<"\n "<<a<<" - "<<c<<endl;
            a++;
            c++;
        }
        else{
            a++;
        }
    }
    cout<<"Conta Numeri: "<<c<<endl;
    return 0;
}