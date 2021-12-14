#include <iostream>
#include <cmath>
/* Inserire due numeri interi da tastiera: a, b. 
Il programma a questo punto deve chiedere all’utente 
di inserire a valori interi e verificare quanti di questi sono maggiori di  b e quanti sono minori di b. */
using namespace std;

int main(){
    int a, b, n;
    int i = 0;
    int massimo, minimo;

    cout<<"Inserisci due numeri"<<endl;
        cin>>a>>b;

    while(i<=a){

        cout<<"Inserisic quali numeri devi verificare"<<i<<endl;
            cin>>n;
        if(n>=b){
            massimo = fmax(n,b);
        }
        else{
            minimo = fmin(n,b);
        }
            i++;
    }

    cout<<"Valore massimo di b: "<<massimo<<endl;
    cout<<"Valore minimo di b: "<<minimo<<endl;
    return 0;
}