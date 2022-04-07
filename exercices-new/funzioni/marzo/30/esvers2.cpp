#include <iostream>
#include <ctime>
#include <cstdlib>
/* #include <unistd.h> */
/* Versione due:
Creare un programma che preveda x estrazioni di y dadi a 
6 facce che vengano memorizzate in un vettore. */
using namespace std;
// tot dadi andranno ad effettuare la somma tra le estrazione per il numero di dadi
void estrazione(int array[], int lanci, int dadi){
     srand(time(NULL)); // seed per inizializzare il generatore di numeri.
     int somma = 0, k = 0;
     int sommadadi = 0;
     int array2[lanci*dadi];
     for(int x = 1; x <= dadi; x++){
          for(int i = 0; i < lanci; i++){
               array[i] = rand()%6+1; // 6 facce
               array2[k] = array[i];
               sommadadi += array2[k];
               k++;
          }
          for(int j = 0; j < lanci; j++){
               cout<<"Punti ottenuti: "<<array[j]<<endl;
          }
          /* cout<<"SOMMA del "<<x<<" dado: "<<sommadadi; */
          cout<<"SOMMA del "<<x<<" dado: "<<sommadadi<<endl;
          sommadadi = 0;
          cout<<endl;
     }
     for(int z = 0; z < lanci*dadi; z++){
               somma += array2[z];
     }
     cout<<"Punti TOTALI: "<<somma<<endl;
}

int main(){
     
     int numdadi, numlanci;
     cout<<"Inserisci il NUMERO di DADI che vuoi utilizzare"<<endl;
          cin>>numdadi;

     cout<<"Inserisci il NUMERO di lanci di "<<numdadi<<" DADO/I"<<endl;
          cin>>numlanci;
     
     int daditot;
     daditot = numlanci * numdadi;
     int array[daditot];

     estrazione(array, numlanci, numdadi);
}