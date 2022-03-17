/* CARICA DI UN VETTORE /
/ STAMPA DI UN VETTORE */
#include <iostream>
using namespace std;

int vettore[5];
void carica (){
    for (int i = 0 ; i < 5 ; i++ ){
        cout << " Inserisci un numero " << endl ; 
            cin >> vettore[i];
    }}
void stampa (){
    for(int i = 0 ; i < 5 ; i++ ){
        cout << vettore [i];
    }
}
int main (){
    cout << " CARICA " <<"\n";
    carica();
    cout << " STAMPA " <<"\n";
    stampa();
}