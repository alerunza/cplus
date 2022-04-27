#include <iostream>
/* Un sito web di una societa' che organizza corsi di inglese
propone un test per determinare il livello di inglese dei visitatori. Il test
prevede un punteggio da 0 a 100. Se l'utente ottiene un punteggio inferiore a
40, il sito assegna all'utente il livello "BASE". Se il punteggio è
compreso tra 40 e 79, il livello e' "INTERMEDIO". Se il punteggio è
maggiore o uguale a 80, il livello e' "AVANZATO".  

Definisci la funzione livello che consente di calcolare il livello a
partire dal punteggio. In particolare, la funzione ricevera' un numero intero
che rappresenta il punteggio, e restituira' un numero compreso tra 1 e 3 che
rappresenta il livello raggiunto ( 1=BASE, 2=INTERMEDIO, 3=AVANZATO ).*/
using namespace std;

void livello(int &punteggio){
    if(punteggio<40){
        punteggio = 1;
    }
    if(punteggio>=40 and punteggio<=79){
        punteggio = 2;
    }
    if(punteggio>=80){
        punteggio = 3;
    }
}

int main(){
    int punteggio;

    cout<<"Inserisci il PUNTEGGIO della CERTIFICAZIONE d'INGLESE"<<endl;
        cin>>punteggio;
    
    livello(punteggio);
    
    if(punteggio==1){
        cout<<"Livello CERTIFICATO = BASE - "<<punteggio<<endl;
    }
    if(punteggio==2){
        cout<<"Livello CERTIFICATO = INTERMEDIO - "<<punteggio<<endl;
    }
    if(punteggio==3){
        cout<<"Livello CERTIFICATO = AVANZATO - "<<punteggio<<endl;
    }
}