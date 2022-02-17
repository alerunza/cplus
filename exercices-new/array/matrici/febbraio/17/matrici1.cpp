#include <iostream>
/* Scrivere un programma che permetta di stampare:
1- il totale per ogni riga della matrice
2- il totale per ogni colonna della matrice
3- la somma di ogni elemento della matrice */
using namespace std;

int main(){
     //tipoVariabile nomeMatrice [numeroRighe][numeroColonne];
     int sommatutto, sommarighe, sommacolonne;
     int r, c; // r = righe; c = colonne
     int i, j; // i = n.righe; j = n.colonne
     cout<<"Inserisci due numeri prima le colonne e poi righe"<<endl;
          cin>>r>>c;

     int matrice[r][c];
     for(i = 0 ; i < r ; i++ ){
          sommarighe = 0;
          sommacolonne = 0;
          for(j = 0 ; j < c ; j++){
               cout<<"Inserisci i numeri all'interno della matrice"<<endl;
                    cin>>matrice[i][j];
               sommacolonne += matrice[i][j];    //2- il totale per ogni colonna della matrice
               //sommarighe += matrice[j][i];
               //sommacolonne += matrice[j][i];
          }
     }

     for(i = 0 ; i < r ; i++ ){
          for(j = 0 ; j < c ; j++){
               cout<<matrice[i][j]<<"\t";
          }
          cout<<endl;
     }
     
     //cout<<"la SOMMA tra le colonne: "<<sommacolonne<<endl;
     //cout<<"la SOMMA tra le righe: "<<sommarighe<<endl;
     cout<<"la SOMMA tra le colonne della MATRICE: "<<sommacolonne<<endl;
     
     return 0;
}