#include <iostream>
#include <ctime>
#include <cstdlib>
/*Scrivere un programma che Lancia un numero di dadi a sei facce scelto dall’utente, 
mostra i risultati e dice quante volte è uscito il 6.*/
using namespace std;

int main(){

    int ndadi;
    int sei = 0;

    srand(time(NULL)); // seed per inizializzare il generatore di numeri.

    cout<<"Scegli il numero di dadi da lanciare (6 facce)"<<endl;
        cin>>ndadi;

    for(int i = 0; i!=ndadi; i++){
        
        int dado = rand()%6+1;

        if(dado==6){
            sei++;
        }
        
        cout<<dado<<endl;
    }
    cout<<"Il sei e' uscito: "<<sei<<" volte"<<endl;
}