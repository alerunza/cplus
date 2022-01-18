#include <iostream>
/*Inserisci da input una serie di numeri. 
La serie termina quando la somma dei numeri inseriti è maggiore o uguale a 100 oppure 
quando è stato raggiunto il numero di tentativi stabiliti. */
using namespace std;

int main(){   
    
    float num, somma;
    int tentativo;

    cout<<"Inserisci il numero di tentativi per raggiungere 100"<<endl;
        cin>>tentativo;

     for(int i = 0; (somma<=100) && (i!=tentativo); i++){
          cout<<"Inserisci una serie di numeri - Tentativo n."<<i<<endl;
            cin>>num;
        somma+=num;
     }
    
    cout<<"Hai raggiunto "<<somma<<"/100"<<endl;  //<<" Tentativi: "<<tentativi<<endl;
    
    return 0;
}