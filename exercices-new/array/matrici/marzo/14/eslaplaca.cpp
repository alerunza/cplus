#include <iostream>

using namespace std;

int main(){
     int righe, colonne;
     int r, c;
     int r2, c2;

     cout<<"Inserisci le righe e le colonne"<<endl;
          cin>>righe>>colonne;

     int matrice[righe][colonne];
     int matrice2[righe][colonne];

     for(r = 0; r<righe; r++){
          for(c = 0; c<colonne; c++){
               cin>>matrice[r][c];
          }
     }
     for(r = 0; r<righe; r++){
          for(c = 0; c<colonne; c++){
               cout<<matrice[r][c]<<"\t";
          }
          cout<<endl;
     }
     cout<<endl;
     for(r = 0, c2 = 0; r<righe; c2++, r++){
          for(c = 0, r2 = 0; c<colonne; r2++, c++){
               matrice2[r2][c2] = matrice[r][c];
          }
     }
     for(r = 0; r<righe; r++){
          for(c = 0; c<colonne; c++){
               cout<<matrice2[r][c]<<"\t";
          }
          cout<<endl;
     }
}