#include <iostream>
/* Scrivi un programma che richiede all'utente un numero intero positivo N e 
visualizza N volte la stringa "Ciao!" sul video, dopodiché visualizza una sola volta la stringa "Arrivederci" */
using namespace std;

int main(){
    int n; //int come variabile dato che l'utente dovrà inserire solamente numeri interi

    cout<<"Inserisci un numero INTERO"<<endl;
        cin>>n;
    
    while(n>0){ //costrutto while dato che è precondizionale
        cout<<"Ciao!"<<n<<endl;
        n=n-1; //operazione che andrà a fermare il ciclo per il numero di volte che l'utente ha inserito poc'anzi
    }

    cout<<"Arrivederci!"<<endl; // dopo che terminerà il ciclo, stamperà la conclusione del programma

    return 0;
}