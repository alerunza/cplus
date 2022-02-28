#include <iostream>
/* 2 - Calcola la media dei voti presi da un numero N di
studenti in un compito in classe, con N inserito da tastiera e con tutti i voti
inseriti in un array. */
using namespace std;

int main(){
    int N;
    cout<<"Quanti alunni hanno partecipato al compito in classe?"<<endl;
        cin>>N;
    int voti[N];
    
    cout<<"Inserisci tutti voti per "<<N<<" volte"<<endl;
    for(int i = 0; i < N; i++){ // inserimento all'interno del primo array
        cin>>voti[i];
    }

    cout<<"Ecco tutti i voti degli studienti"<<endl;
    for(int i = 0; i < N; i++){ // stampa array 1
        cout<<voti[i]<<endl;
    }

    float media, somma = 0;
    for(int i = 0; i < N; i++){
        somma += voti[i];
    }
    media = somma / N;
    cout<<"la MEDIA di voti del compito in classe e': "<<media<<endl;
}