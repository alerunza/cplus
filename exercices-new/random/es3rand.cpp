#include <iostream>
#include <ctime>
#include <cstdlib>
/* Lanciare un dado a 20 facce 
(i numeri che possono uscire vanno da 1 a 20 e sono equiprobabili) e dire cosa è uscito. */
using namespace std;

int main(){
    srand(time(NULL)); // seed per inizializzare il generatore di numeri.
    cout<<rand()%20+1;
}