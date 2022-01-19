#include <iostream>
#include <ctime>
#include <cstdlib>
/*Scrivere un programma che lancia 10 dadi a 6 facce 
e se la somma dei risultati è maggiore di 35 dice che il risultato è sopra la media.*/
using namespace std;

int main(){

    srand(time(NULL)); // seed per inizializzare il generatore di numeri.

    float somma;

    for(int i = 0; i!=10; i++){
        
        int dado = rand()%6+1;

        somma += dado;
        
        cout<<dado<<endl;
    }
    if(somma>=35){
        cout<<"Il risultato e' sopra la media: "<<somma<<endl;
    }else{
        cout<<"Il risultato non e' sopra la media: "<<somma<<endl;
    }
}