#include <iostream>
#include <ctime>
#include <cstdlib>
/*  Lanciare due dadi con 6 facce e dire se è uscita una coppia. */
using namespace std;

int main(){
    srand(time(NULL)); // seed per inizializzare il generatore di numeri.
    int dado1, dado2;
    dado1 = rand()%6+1;
    dado2 = rand()%6+1;
    cout<<dado1<<" "<<dado2<<endl;
    
    if(dado1==dado2){
        cout<<"Coppia di "<<dado1<<" "<<dado2<<endl;
    }
}