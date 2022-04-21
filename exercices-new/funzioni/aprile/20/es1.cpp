#include <iostream>
#include <ctime>
#include <cstdlib>
/* Una scuola elementare vi ha commissionato un gioco che serva per verificare se gli alunni 
di una scuola elementare sappiano le tabelline. 
Il programma deve estrarre 2 numeri da 2 a 10 e chiedere 
all'alunno il risultato della moltiplicazione fra loro, 
appena l'utente scrive la risposta si deve aggiornare 
il punteggio di +1 se il giocatore indovina e -1 se sbaglia. 
Si devono prevedere x domande scelte dall'utente. 
Una funzione che si occupi delle estrazioni e una booleana che verifichi 
se il risultato è corretto es." bool verifica_risposta (int risultato, int risposta) ". */
using namespace std;

int ris;
int points = 0;

void randtabelline(){
    int num1, num2;
    
    for(int i = 0; i<2; i++){
        num1 = rand()%9+2; // parte da 2 fino a 10
        num2 = rand()%9+2;
    }
    cout<<num1<<" x "<<num2<<endl;
    ris = num1 * num2;
}

bool checkrisposta(int risutente){
    if(ris == risutente){
        points++;
        return true;
    } else{
        if(points <= 0) {
            points = 0;
            return false;
        } else{
            points--;
            return false;
        }
    }
}

int main(){
    srand(time(NULL)); // seed per inizializzare il generatore di numeri.
    
    int numdomande, numutente;

    cout<<"Inserisci un NUMERO per determinare la durata del GIOCO delle TABELLINE"<<endl;
        cin>>numdomande;
    cout<<endl;

    for(int i = 1; i<=numdomande; i++){
        randtabelline();
        cout<<"Inserisci la risposta"<<endl;
            cin>>numutente;
        cout<<endl;
        if(checkrisposta(numutente)){
            cout<<"Risposta ESATTA! 1 Punto AGGIUNTO! : "<<points<<endl;
            cout<<endl;
        } else {
            cout<<"Risposta SBAGLIATA! 1 Punto di PENALITA' : "<<points<<endl;
            cout<<endl;
        }
        
    }

    cout<<"Hai totalizzato un PUNTEGGIO totale di : "<<points<<"/"<<numdomande<<endl;

    
}