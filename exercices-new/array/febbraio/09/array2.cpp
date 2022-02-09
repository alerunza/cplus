#include <iostream>
/* Dati in un primo vettore i voti riportati
da uno studente in diverse materie, costruisci un nuovo vettore contenente solo
i voti sufficienti e visualizzare alla fine il contenuto. */
using namespace std;

int main(){
     int voti;

     cout<<"Inserisci quanti voti hai"<<endl;
          cin>>voti;

     int array[voti];
     int sufficienti[voti];

     cout<<"Inserisci i voti "<<voti<<" volte"<<endl;
     for(int i = 0; i<voti; i++){
          cin>>array[i];
          if(array[i]>=6){
               sufficienti[i]=array[i];
          }
     }
     for(int i = 0; i<voti; i++){
          cout<<"Voti sufficienti: "<<sufficienti[i]<<endl;
     }
}