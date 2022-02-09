#include <iostream>
/* Letti da input 10 voti, memorizzarli in
un vettore e quindi calcolarne la media aritmetica. Visualizza infine il
risultato. */
using namespace std;

int main(){
     int voti[10];
     float somma, media;
     cout<<"Inserisci 10 voti"<<endl;
     for(int i=0; i<10; i++){
          cin>>voti[i];
          somma += voti[i];
     }
     media = somma / 10;
     cout<<"Somma: "<<somma<<"\nMedia: "<<media<<endl;
}