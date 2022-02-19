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
          for(j = 0 ; j < c ; j++){
               cout<<"Inserisci i numeri all'interno della matrice"<<endl;
                    cin>>matrice[i][j];
          }
     }
     
     for(i = 0 ; i < r ; i++ ){
          for(j = 0 ; j < c ; j++){
               cout<<matrice[i][j]<<"\t";   //stampa l'intera matrice
          }
          cout<<endl;
     }

     for(i = 0 ; i < r ; i++ ){ // somma righe
          sommarighe = 0;
          for(j = 0 ; j < c ; j++){
               sommarighe += matrice[i][j]; //1- il totale per ogni riga della matrice
          }
          //cout<<endl;
          cout<<"la SOMMA delle righe della MATRICE: "<<sommarighe<<endl;
     }

     for(i = 0 ; i < r ; i++ ){ // somma colonne
          sommacolonne = 0;
          for(j = 0 ; j < c ; j++){
               sommacolonne += matrice[j][i]; //2- il totale per ogni colonna della matrice
          }
          cout<<"la SOMMA delle colonne della MATRICE: "<<sommacolonne<<endl;
     }

     return 0;
}