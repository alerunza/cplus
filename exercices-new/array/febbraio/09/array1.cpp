#include <iostream>
/* In un vettore è contenuta la classifica
di una gara podistica con i nomi dei concorrenti in ordine di arrivo. Dato il
nome di un concorrente, stampare la sua posizione in classifica. Se il nome non
compare tra quelli caricati nel vettore, visualizzare un segnale di errore. */
using namespace std;

int main(){
     string nomi[3] = {"Simone", "Gandolfo", "Stefano"};
     string nome;

     cout<<"Inserisci il nome del concorrente"<<endl;
     for(int i=0; i<3; i++){
          cin>>nome;
          if(nome!=nomi[i]){
               cout<<"Errore, nessun giocatore trovato con quel nome\ni concorrenti sono: Simone, Gandolfo e Stefano."<<endl;
          }
          if(nome==nomi[i]){
               cout<<nomi[i]<<" Posizione: "<<i+1<<endl;
          }
     }
}