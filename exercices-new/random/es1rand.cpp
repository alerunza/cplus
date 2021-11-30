#include <iostream>
#include <ctime>
#include <cstdlib>
/* Lanciare una moneta e dire se è uscita testa o croce. */
using namespace std;

int main(){
    srand(time(NULL)); // seed per inizializzare il generatore di numeri.
    int mon;
    mon = rand()%2;
    if(mon==1){
        cout<<"Croce\n";
    }
    else{
        cout<<"Testa\n";
    }
}