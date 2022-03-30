#include <iostream>
#include <ctime>
#include <cstdlib>
/* Versione due:
Creare un programma che preveda x estrazioni di y dadi a 
6 facce che vengano memorizzate in un vettore. */
using namespace std;
// tot dadi andranno ad effettuare la somma tra le estrazione per il numero di dadi
void estrazione(int array[], int lanci, int dadi){
     for(int i = 0; i <= dadi; i++){
          for(int i = 0; i < lanci; i++){
               array[i] = rand()%6+1;
          }
          for(int i = 0; i < lanci; i++){
               cout<<"Punti ottenuti: "<<array[i]<<endl;
          }
          cout<<endl;
     }

}

int main(){
     srand(time(NULL)); // seed per inizializzare il generatore di numeri.

     int numdadi, numlanci;
     cout<<"Inserisci il NUMERO di DADI che vuoi utilizzare"<<endl;
          cin>>numdadi;

     cout<<"Inserisci il NUMERO di lanci di "<<numdadi<<" DADO/I"<<endl;
          cin>>numlanci;

     int array[numdadi];

     estrazione(array, numlanci, numdadi);
}