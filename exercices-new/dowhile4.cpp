#include <iostream>
/*Inserisci da input una serie di numeri. 
La serie termina quando la somma dei numeri inseriti è maggiore o uguale a 100 oppure 
quando è stato raggiunto il numero di tentativi stabiliti. */
using namespace std;

int main(){   
    
    float num, somma;
    int serie = 0;

    do{

        cout<<"Inserisci una serie di numeri - Sei in serie da: "<<serie++<<endl;
            cin>>num;
        somma+=num;
    }
    while(somma<=100);
    
    cout<<"Hai raggiunto 100 - "<<somma<<" Con una serie da "<<serie<<endl;
    
    return 0;
}
