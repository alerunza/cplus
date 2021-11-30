#include <iostream>
/* Inserisci in input una serie di numeri. La serie termina quando la 
somma dei numeri inserita è uguale a 20. */
using namespace std;

int main(){   
    float n, somma;

    do{
        cout<<"Inserisci un numero per arrivare a 20"<<endl;
            cin>>n;
        somma = somma + n; // o somma+=n;
    }
    while(somma<=20);
    
    cout<<"Hai raggiunto "<<somma<<"/20"<<endl;
    
    return 0;
}