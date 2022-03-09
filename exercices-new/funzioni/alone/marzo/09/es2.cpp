#include <iostream>
/* Creare una funzione che riceve una quantità di tempo in formato ore, 
minuti e secondi e la restituisce espressa solamente in secondi.
Creare poi un programma che si faccia passare due quantità di tempo e 
verifichi quale è maggiore utilizzando la funzione precedente e solamente due if nel programmaa. */
using namespace std;

int tempoinsec(int ore, int minuti, int secondi){
    cout<<"Inserisci ore, minuti e secondi"<<endl;
        cin>>ore>>minuti>>secondi;
    cout<<secondi+minuti*60+ore*3600<<endl;
}

int main(){
    
    int ore, minuti, secondi;
    int ore2, minuti2, secondi2;
    
    int tempo1 = tempoinsec(ore, minuti, secondi);
    int tempo2 = tempoinsec(ore2, minuti2, secondi2);
    if(tempo1>tempo2){
        cout<<"Il PRIMO quantitativo di tempo e' MAGGIORE del SECONDO"<<endl;
    }
    if(tempo1<tempo2){
        cout<<"Il SECONDO quantitativo di tempo e' MAGGIORE del PRIMO"<<endl;
    }
}