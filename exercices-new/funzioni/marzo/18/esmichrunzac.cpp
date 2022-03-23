#include <iostream>

using namespace std;

int i, j;

void carica(int r, int c);
void stampa(int r, int c);

int main(){
    int righe, colonne;
    
    cout<<"Inserisci un NUMERO per DETERMINARE una MATRICE"<<endl;
        cin>>righe>>colonne;

    carica(righe, colonne);
    stampa(righe, colonne);
}

void carica(int r, int c){
    int matrice[r][c];
    for(i = 0 ; i < r ; i++ ){
        for(j = 0 ; j < c ; j++){
            cout<<"Inserisci i numeri all'interno della matrice"<<endl;
                cin>>matrice[i][j];
        }
    }   
}
void stampa(int r, int c){
    int matrice[r][c];
    for(i = 0 ; i < r ; i++ ){
        for(j = 0 ; j < c ; j++){
            cout<<matrice[i][j]<<"\t";
        }
        cout<<endl;
    }
}