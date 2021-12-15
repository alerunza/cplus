#include <iostream>
/* Inserire due numeri interi da tastiera: a, b. 
Il programma a questo punto deve chiedere all’utente 
di inserire a valori interi e verificare quanti di questi sono maggiori di  b e quanti sono minori di b. */
using namespace std;

int main(){
    int a, b, max = 0, min = 0, i = 0;

    cout<<"inserire un valore (A)"<<endl;
        cin>>a;

    cout<<"inserisci un numero (B)"<<endl;
        cin>>b;

    while(i<a){
        if(a>b){
            cout<<"il numero da lei inserito e' maggiore del numero precedente"<<endl;
            max++;
        }
        else{
            cout<<"il numero da lei inserito e' minore del numero precedente"<<endl;
            min++;
        }
        i++;
    }

    cout<<"Numeri maggiori di b: "<<max<<endl;
    cout<<"Numeri minori di b: "<<min<<endl;

    return 0;
}