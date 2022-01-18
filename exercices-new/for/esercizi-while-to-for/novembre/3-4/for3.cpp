#include <iostream>
/* Calcola quanto spendi in un negozio acquistando un certo numero di prodotti. // somma
Conosci il numero di prodotti che hai acquistato e, per ogni prodotto, inserisci il costo. */ // prezzo
using namespace std;

int main(){
     
    float prezzo, somma;

    for(int i = 0; prezzo != 0; i++){
        
        cout<<"Inserisci il prezzo del prodotto (Appena hai finito, digita 0) --> Numero Prodotto: "<<i<<endl;
            cin>>prezzo;
        somma+=prezzo;
     }
    
    cout<<"Hai speso: "<<somma<<endl;   //<<"\nPer un totale di "<<numprodotto-1<<" Prodotti"<<endl;
    
    return 0;
}