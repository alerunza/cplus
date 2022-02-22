#include <iostream>
/*Scrivere un programma che permetta di visualizzare:
1- il massimo degli elementi di ciascuna riga della matrice
2- il minimo di tutti gli elementi della matrice
3- la media di ciascuna colonna della matrice */
using namespace std;

int main(){
    int max = 0, min = 0;
    int r, c; // r = righe; c = colonne
    int i, j; // i = n.righe; j = n.colonne
    cout<<"Inserisci due numeri prima le colonne e poi righe"<<endl;
        cin>>r>>c;

    int matrice[r][c];
    for(i = 0 ; i < r ; i++ ){
        for(j = 0 ; j < c ; j++){
            cout<<"Inserisci i numeri all'interno della matrice"<<endl;
                cin>>matrice[i][j];
        }
    }
    for(i = 0 ; i < r ; i++ ){
        for(j = 0 ; j < c ; j++){
            cout<<matrice[i][j]<<"\t";  //stampa l'intera matrice
        }
        cout<<endl;
    }
    for(i = 0 ; i < r ; i++ ){
        max = matrice[0][0];
        for(j = 0 ; j < c ; j++){     //1- il massimo degli elementi di ciascuna riga della matrice
            if(matrice[i][j]>max){
                max = matrice[i][j];
            }  
        }
        cout<<max<<endl;
    }
}