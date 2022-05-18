#include <iostream>
#include <cmath>
/* Calcolare la differenza in minuti fra due orari utilizzando le strutture */
using namespace std;

void carica_array(int dimensione);
void stampa_array(int dimensione);
int min_array(int dimensione);

struct orario{
     int ora;
     int minuti;
};

orario tempo[5];

int main(){
     
     int dim = 5;
     
     cout<<"Inserisci "<< dim <<" orari ES: (15:40 & 19:30)"<<endl;

     carica_array(dim);
     stampa_array(dim);
     
     int indice = min_array(dim);

     cout<<"L'orario minore e' - "<<tempo[indice].ora<<" : "<<tempo[indice].minuti<<endl;
}

void carica_array(int dimensione){
     for(int i=0; i<dimensione; i++){
          cin>>tempo[i].ora>>tempo[i].minuti;
     }
}

void stampa_array(int dimensione){
     for(int i=0; i<dimensione; i++){
          cout<<"Orario n."<<i+1<<" - "<<tempo[i].ora<<" : "<<tempo[i].minuti<<endl;
     }
}

int min_array(int dimensione){
     int min = 1000000;
     int v;
     for(int i=0; i<dimensione; i++){
          if(tempo[i].ora<min){
               v = i;
               min = tempo[i].ora;
          }
     }
     
     return v;
}