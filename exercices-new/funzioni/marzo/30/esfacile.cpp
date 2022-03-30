#include <iostream>
#include <ctime>
#include <cstdlib>
/* Versione uno facilitata:
Creare un programma che preveda 5 estrazioni di due dadi a 6 facce 
che vengano memorizzate in un vettore. */
using namespace std;

void estrazione(int array[]){
     for(int i = 0; i < 5; i++){
          array[i] = rand()%6+1;
     }
     for(int i = 0; i < 5; i++){
          cout<<"Punti ottenuti: "<<array[i]<<endl;
     }
}

int main(){
     srand(time(NULL)); // seed per inizializzare il generatore di numeri.

     int array[5];

     estrazione(array);

     for(int i = 0; i < 5; i++){
          cout<<"Punti memorizzati: "<<array[i]<<endl;
     }
}