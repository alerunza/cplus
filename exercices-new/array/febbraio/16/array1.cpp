#include <iostream>
#include <string>
/* Dati N elementi scelti da tastiera, caricare tre vettori paralleli con nome, cognome ed età.
Stampare l'elenco dei maggiorenni (cognome, nome, età ed indice). */
using namespace std;

int main(){
    int numero;

    cout<<"Inserisci gli ELEMENTI per i vettori paralleli"<<endl;
        cin>>numero;

    int eta[numero];
    string nome[numero];
    string cognome[numero];
    int i = 0;

    for(i = 0; i<numero; i++){
        cout<<"Inserisci il NOME"<<endl;
            cin>>nome[i];

        cout<<"Inserisci il COGNOME"<<endl;
            cin>>cognome[i];

        cout<<"Inserisci l'ETA'"<<endl;
            cin>>eta[i];
    }

    for(i = 0; i<numero; i++){
        if(eta[i]>17){
            cout<<"COGNOME: "<<cognome[i]<<"\nNOME: "<<nome[i]<<"\nETA': "<<eta[i]<<"\nINDICE: "<<i<<endl;
        }
    }
    return 0;
}