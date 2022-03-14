#include <iostream>

using namespace std;

int main(){
     int righe, colonne;
     int i, j;

     cout<<"Inserisci le righe e le colonne"<<endl;
          cin>>righe>>colonne;

     int matrice[righe][colonne];
     int matrice2[righe][colonne];

     for(i = 0; i<righe; i++){
          for(j = 0; j<colonne; j++){
               cin>>matrice[i][j];
          }
     }
     for(i = 0; i<righe; i++){
          for(j = 0; j<colonne; j++){
               cout<<matrice[i][j]<<"\t";
          }
          cout<<endl;
     }
     cout<<endl;
     for(i = 0; i < righe; i++){
          for(j = 0; j < colonne; j++){
               matrice2[j][i]=matrice[i][j];
          }
     }
     cout<<"Matrice trasportata"<<endl;
     for (i = 0; i < colonne; i++) {
          for(j = 0; j < righe; j++){
               cout<<matrice2[i][j]<<"\t";
          }
          cout<<endl;               
     }
}