#include <iostream>
/* Inserisci in input una serie di numeri. 
La serie termina quando la somma dei numeri inserita è maggiore o  
uguale a 100 oppure quando è stato raggiunto il numero di tentativi stabiliti. */
using namespace std;

int main(){   
    
    float n, somma;
    int tentativi = 0;
    int tentutente; //tentativi dell'utente

    cout<<"Inserisci il numero di tentativi per raggiungere 100"<<endl;
        cin>>tentutente;

/*     do{
        cout<<"Inserisci una serie di numeri - Tentativo n."<<tentativi++<<endl;        COSTRUTTO DO-WHILE
            cin>>n;
        somma = somma + n;
    }
    while((somma<=100) && (tentativi!=tentutente)); */

    while((somma<=100) && (tentativi!=tentutente)){
        cout<<"Inserisci una serie di numeri - Tentativo n."<<tentativi++<<endl;        // COSTRUTTO WHILE
            cin>>n;
        somma = somma + n;
    }
    
    if(somma<100){
        cout<<"Non hai raggiunto il numero desiderato. - "<<somma<<"/100"<<"\nTentativi: "<<tentativi++<<endl;
    }
    if(somma>=100){
        cout<<"Hai raggiunto il numero desiderato.- "<<somma<<"/100"<<"\nTentativi: "<<tentativi++<<endl;
    }
    
    return 0;
}