#include <iostream>
#include <ctime>
#include <cstdlib>
/* Carica in un array i punti ottenuti
lanciando un dado a sei facce; sono previsti 10 lanci. */
using namespace std;

int main(){
    srand(time(NULL)); // seed per inizializzare il generatore di numeri.
    int punti[10];
    for(int i = 0; i < 10; i++){
          punti[i] = rand()%6+1;
    }
    for(int i = 0; i < 10; i++){
         cout<<"Punti ottenuti: "<<punti[i]<<endl;
    }
    
}