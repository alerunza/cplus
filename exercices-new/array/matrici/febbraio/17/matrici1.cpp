#include <iostream>

using namespace std;

int main(){
     //tipoVariabile nomeMatrice [numeroRighe][numeroColonne];
     int r ,c;
     int i , j;
     cout<<"Inserisci due numeri prima le colonne e poi righe "<<endl;
          cin>>r>>c;

     int matrice[r][c];
     for (i = 0 ; i < r ; i++ ){
          for(j = 0 ; j < c ; j++){
               cout<<"Inserisci un numero per le colonne "<<endl;
                    cin>>matrice[i][j];
          }
     }
     for (i = 0 ; i < r ; i++ ){
          for(j = 0 ; j < c ; j++){
               cout<<matrice[i][j]<<"\t";
          }
          cout<<endl;
     }
}
