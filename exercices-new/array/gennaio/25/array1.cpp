#include <iostream>
/* Scrivi un programma che richiede
all'utente N numeri interi ( N stabilito dall'utente, positivo e minore di
100). Terminato l'inserimento il programma calcola la media aritmetica fra i
numeri inseriti, quindi mostra prima tutti i numeri minori o uguali alla media,
e poi tutti i numeri maggiori della media. */
using namespace std;

int main(){

    int n;
    float somma;
    
    cout<<"Inserisci il quantitativo di numeri da inserire successivamente"<<endl;
        cin>>n;
    if(n>=100){
        cout<<"Non puoi aggiungere piu' di 100\nRiavvia il programma"<<endl;
    }
    int array[n];
    for(int i = 0; i<n; i++){
        cin>>array[i];
        somma+=array[i];
    }
    
/*     for(int i = n; i>=0; i--){
        cout<<array[i]<<endl; // inverso
    } */

    float media = somma / n;
    cout<<"Somma: "<<somma<<"\nMedia: "<<media<<endl;

    for(int i = 0; i<n; i++){
        if(media>=array[i]){
            cout<<"Minore/Uguale alla media: "<<array[i]<<endl;
        }else{
            cout<<"Maggiore alla media: "<<array[i]<<endl;
        }
    }

}