#include <iostream>
/* Inserisci in input una serie di numeri. La serie termina quando la 
somma dei numeri inserita è uguale a 20. */
using namespace std;

int main(){   
    float n, somma;

     for(;somma<=20;){
        cout<<"Inserisci un numero fino ad arrivare a 20"<<endl;
            cin>>n;
        somma+=n;
    }
    cout<<"Hai raggiunto "<<somma<<"/20"<<endl;

    return 0;
}