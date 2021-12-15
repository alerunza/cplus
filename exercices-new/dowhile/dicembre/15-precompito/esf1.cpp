#include <iostream>
/* Dato un numero intero che rappresenta un numero di ammalati e un numero intero che rappresenta la percentuale di ammalati 
che ogni giorno guarisce, 
calcolare quanti giorni sono necessari affinché il numero di ammalati sia minore di 100. */
using namespace std;

int main(){
    int pazienti;
    int percentualepazienti;
    int contagiorni = 0;

    cout<<"Inserisci il numero di pazienti"<<endl;
        cin>>pazienti;
    cout<<"Inserisci la percentuale giornaliera"<<endl;
        cin>>percentualepazienti;

    do{
        contagiorni++;
        int op = pazienti - (pazienti * percentualepazienti / 100);
        cout<<"Giorno: "<<contagiorni<<" Pazienti: "<<pazienti<<endl;
    }
    while(pazienti>=100);

    cout<<"Sono passati: "<<contagiorni<<" giorni"<<endl;

    return 0;
}