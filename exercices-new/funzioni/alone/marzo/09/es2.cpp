#include <iostream>
/* Creare una funzione che riceve una quantità di tempo in formato ore, 
minuti e secondi e la restituisce espressa solamente in secondi.
Creare poi un programma che si faccia passare due quantità di tempo e 
verifichi quale è maggiore utilizzando la funzione precedente e solamente due if nel programmaa. */
using namespace std;

void tempoinsec(){
    int ore, minuti, secondi;
    cout<<"Inserisci ore, minuti e secondi"<<endl;
        cin>>ore>>minuti>>secondi;
    int totale = ore*3600 + minuti*60 + secondi;
    cout<<"Totale in secondi: "<<totale<<endl;
}

int main(){
    tempoinsec();
}