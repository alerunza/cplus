#include <iostream>
/* Scrivi un programma che richiede all'utente due vettori di interi di ugual
dimensione (N) e mostra il loro prodotto scalare. */
using namespace std;

int main(){
    int primo[5] = {3, 4, 7, 0, 1};
    int secondo[5] = {1, 2, 0, 0, 5};
    float somma;

    for(int i = 0; i<5; i++){
        somma += primo[i]*secondo[i];
    }
    cout<<somma<<endl;
}