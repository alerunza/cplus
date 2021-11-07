#include <iostream>
/* Calcola quanto spendi in un negozio acquistando un certo numero di prodotti. // somma
Conosci il numero di prodotti che hai acquistato e, per ogni prodotto, inserisci il costo. */ // prezzo
using namespace std;

int main(){   
    
    float prezzo, somma;
    int numprodotto = 0;

    do{

        cout<<"Inserisci il prezzo del prodotto (Appena hai finito, digita 0) --> Numero Prodotto: "<<numprodotto++<<endl;
            cin>>prezzo;
        somma+=prezzo;
    }
    while(prezzo!=0);
    
    cout<<"Hai speso: "<<somma<<"\nPer un totale di "<<numprodotto-1<<" Prodotti"<<endl;
    
    return 0;
}
