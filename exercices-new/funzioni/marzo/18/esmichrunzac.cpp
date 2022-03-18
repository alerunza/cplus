#include <iostream>

using namespace std;

int i, j;

void carica(int r);
void stampa(int r);

int main(){
    int righe, colonne;
    
    cout<<"Inserisci un NUMERO per DETERMINARE una MATRICE Quadrata"<<endl;
        cin>>righe;

    carica(righe);
    stampa(righe);
}

void carica(int r){
    int matrice[r][r];
    for(i = 0 ; i < r ; i++ ){
        for(j = 0 ; j < r ; j++){
            cout<<"Inserisci i numeri all'interno della matrice"<<endl;
                cin>>matrice[i][j];
        }
    }   
}
void stampa(int r){
    int matrice[r][r];
    for(i = 0 ; i < r ; i++ ){
        for(j = 0 ; j < r ; j++){
            cout<<matrice[i][j]<<"\t";
        }
        cout<<endl;
    }
}