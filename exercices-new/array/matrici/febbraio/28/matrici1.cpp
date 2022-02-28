#include <iostream>
/* 1 - Assegnato una matrice di massimo 10x10 valori interi, determinare
valore max e valore min e rispettive posizioni (indici). */
using namespace std;

int main(){
    int matrice[10][10];
    int i, j;

    cout<<"Inserisci gli elementi all'interno della matrice"<<endl;
    for(i = 0; i < 10; i++){// inserimento della matrice
        for(j = 0; j < 10; j++){
            cin>>matrice[i][j];
        }
    }
    for(i = 0; i < 10; i++){// stampa della matrice
        for(j = 0; j < 10; j++){
            cout<<matrice[i][j]<<"\t";
        }
        cout<<endl;
    }
    int max, min;
    max = matrice[0][0];
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            if(matrice[i][j]>max){
                max = matrice[i][j];    
            }
        }
        cout<<endl;
    }
}