#include <iostream>
#include <ctime>
#include <cstdlib>
/* Carica in un array i punti ottenuti lanciando 
due dadi a sei facce, l'utente stabilisce i lanci */
using  namespace std;

void estrazione(int array[], int numero){
     for(int i = 0; i < numero; i++){
          array[i] = rand()%6+1;
     }
     for(int i = 0; i < numero; i++){
          cout<<"Punti ottenuti: "<<array[i]<<endl;
     }
}

int main(){
     srand(time(NULL)); // seed per inizializzare il generatore di numeri.
     int numero, numero2;
     cout<<"Inserisci il NUMERO di LANCI del PRIMO dado"<<endl;
          cin>>numero;
     
     cout<<"Inserisci il NUMERO di LANCI del SECONDO dado"<<endl;
          cin>>numero2;

     int punti[numero];
     int punti2[numero2];

     estrazione(punti, numero);
     
}