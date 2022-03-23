#include <iostream>

using namespace std;

int i, j;

void carica(int matrice, int &r, int &c);
void stampa(int matrice, int &r, int &c);

int main(){
    int *puntatore;
    int dimensione;
    carica(puntatore, dimensione, dimensione);
    stampa(puntatore, dimensione, dimensione);
}

void carica(int matrice, int &r, int &c){
    cout<<"Inserisci un NUMERO per DETERMINARE una MATRICE"<<endl;
        cin>>r>>c;
    for(i = 0 ; i < r ; i++ ){
        for(j = 0 ; j < c ; j++){
            cout<<"Inserisci i numeri all'interno della matrice"<<endl;
                cin>>matrice[i][j];
        }
    }   
}
void stampa(int matrice, int &r, int &c){
    int matrice[r][c];
    for(i = 0 ; i < r ; i++ ){
        for(j = 0 ; j < c ; j++){
            cout<<matrice[i][j]<<"\t";
        }
        cout<<endl;
    }
}