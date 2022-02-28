#include <iostream>
/* 3 - Programma che, inseriti da tastiera 10 numeri interi
maggiori di zero a piacere, comunica quanti di essi sono pari e quanti sono
dispari. */
using namespace std;

int main(){
    int array[10];
    int pari = 0;
    int dispari = 0;

    cout<<"Inserisci 10 numeri"<<endl;
    for(int i = 0; i < 10; i++){
        cin>>array[i];
    }
    for(int i = 0; i < 10; i++){
        if(array[i]%2==0){
            cout<<"Pari: "<<endl;
            cout<<array[i]<<endl;
            pari++;
        }else{
            cout<<"Dispari: "<<endl;
            cout<<array[i]<<endl;
            dispari++;
        }
    }
    cout<<"Totale numeri dispari: "<<dispari<<endl;
    cout<<"Totale numeri pari: "<<pari<<endl;
}