#include <iostream>
#include <ctime>
#include <cstdlib>
/* Lanciare un dado a 6 facce e dire cosa è uscito. */
using namespace std;

int main(){
    srand(time(NULL)); // seed per inizializzare il generatore di numeri.
    cout<<rand()%6+1;
}