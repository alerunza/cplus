#include <iostream>
/* Scrivi un programma che richiede
all'utente N numeri interi ( N stabilito dall'utente, positivo e minore di
100). Terminato l'inserimento il programma calcola la media aritmetica fra i
numeri inseriti, quindi mostra prima tutti i numeri minori o uguali alla media,
e poi tutti i numeri maggiori della media. */
using namespace std;

int main(){

    int n;
    int somma;
    int array[n];
    
    cout<<"Inserisci il quantitativo di numeri da inserire successivamente"<<endl;
        cin>>n;
    
    for(int i = 0; i<n; i++){
        cin>>array[i];
        somma+=array[i];
    }
    float media = somma / n;

    return 0;
}