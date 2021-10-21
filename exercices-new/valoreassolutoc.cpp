#include <iostream>
#include <cmath>
/* Calcolare il valore assoluto di un numero. 
Poi calcolare l’arrotondamento per eccesso e per difetto. */
using namespace std;

int main(){
    float x;

    cout<<"Inserisci numero"<<endl;
        cin>>x;
    
    cout<<"Valore assoluto: "<<abs(x)<<endl;
    cout<<"Arerotondamento per eccesso "<<ceil(x)<<endl;
    cout<<"Arerotondamento per difetto "<<floor(x)<<endl;

    return 0;
}