#include <iostream>
/* Creare un programma che permetta l'inserimento di due matrici quadrate con numero di elementi uguali 
(per esempio indicare 3 per una matrice di 9 elementi, 4 per una matrice di 16) e 
consenta di inserire gli elementi da tastiera elementi scelti , 
faccia la somma di ogni numero col corrispondente con gli stessi indici dell'altra matrice 
(es. elemento [3][1] della prima matrice con elemento 
[3][1] della seconda matrice  e infine stampi: prima matrice, seconda matrice, 
matrice con i risultati della somma. Stampi inoltre il numero minimo e massimo presente nella prima, 
seconda e terza matrice e la media delle 3 matrici. */
using namespace std;

int main(){
     int num;
     /* int r, c; // r = righe; c = colonne */
     int i, j; // i = n.righe; j = n.colonne
     int min[3];
     int max[3];
     float media[3];
     float somma[3];

     cout<<"Inserisci un numero per determinare la matrice quadrata"<<endl;
          cin>>num;
     
     int matrice1[num][num];
     int matrice2[num][num];

     for(i = 0 ; i < num ; i++ ){
          for(j = 0 ; j < num ; j++){
               cout<<"Inserisci i numeri all'interno della prima matrice"<<endl;
                    cin>>matrice1[i][j];
          }
     }
     for(i = 0 ; i < num ; i++ ){
          for(j = 0 ; j < num ; j++){
               cout<<"Inserisci i numeri all'interno della seconda matrice"<<endl;
                    cin>>matrice2[i][j];
          }
     }
     
     cout<<endl;
     cout<<"1° MATRICE: "<<endl;
     for(i = 0 ; i < num ; i++ ){
          for(j = 0 ; j < num ; j++){
               cout<<matrice1[i][j]<<"\t";   //stampa l'intera matrice
          }
          cout<<endl;
     }
     cout<<endl;
     cout<<"2° MATRICE: "<<endl;
     for(i = 0 ; i < num ; i++ ){
          for(j = 0 ; j < num ; j++){
               cout<<matrice2[i][j]<<"\t";   //stampa l'intera matrice
          }
          cout<<endl;
     }
     cout<<endl;
     int matrice3[num][num];
     cout<<"3° MATRICE: "<<endl;
     for(i = 0 ; i < num ; i++ ){
          matrice3[i][j] = 0;
          for(j = 0 ; j < num ; j++){
               matrice3[i][j] = matrice1[i][j] + matrice2[i][j];
               cout<<matrice3[i][j]<<"\t";
          }
          cout<<endl;
     }
     max[0] = matrice1[0][0];
     for(i = 0 ; i < num ; i++ ){ // massimo della prima matrice
        for(j = 0 ; j < num ; j++){
            if(matrice1[i][j]>max[0]){
               max[0] = matrice1[i][j];
               }  
          }
     }
     min[0] = matrice1[0][0];
     for(i = 0 ; i < num ; i++ ){ // minimo della prima matrice
        for(j = 0 ; j < num ; j++){
            if(matrice1[i][j]<min[0]){
               min[0] = matrice1[i][j];
            }  
          }
     }
     max[1] = matrice2[0][0];
     for(i = 0 ; i < num ; i++ ){ // massimo della seconda matrice
        for(j = 0 ; j < num ; j++){
            if(matrice2[i][j]>max[1]){
               max[1] = matrice2[i][j];
            }  
          }
     }
     min[1] = matrice2[0][0];
     for(i = 0 ; i < num ; i++ ){ // minimo della seconda matrice
        for(j = 0 ; j < num ; j++){
            if(matrice2[i][j]<min[1]){
               min[1] = matrice2[i][j];
            }  
          }
     }
     max[2] = matrice3[0][0];
     for(i = 0 ; i < num ; i++ ){ // massimo della terza matrice
        for(j = 0 ; j < num ; j++){
            if(matrice3[i][j]>max[2]){
               max[2] = matrice3[i][j];
            }  
          }
     }
     min[2] = matrice3[0][0];
     for(i = 0 ; i < num ; i++ ){ // minimo della terza matrice
        for(j = 0 ; j < num ; j++){
            if(matrice3[i][j]<min[2]){
               min[2] = matrice3[i][j];
            }  
          }
     }
     int nmedia;
     somma[0] = 0;
     media[0] = 0;
     for(i = 0 ; i < num ; i++ ){ // somma + media della prima matrice
          for(j = 0 ; j < num ; j++){
            somma[0] += matrice1[j][i];
          }
          nmedia = num * num;
          media[0] = somma[0] / nmedia;
     }
     somma[1] = 0;
     media[1] = 0;
     for(i = 0 ; i < num ; i++ ){ // somma + media della seconda matrice
          for(j = 0 ; j < num ; j++){
            somma[1] += matrice2[j][i];
          }
          nmedia = num * num;
          media[1] = somma[1] / nmedia;
     }
     somma[2] = 0;
     media[2] = 0;
     for(i = 0 ; i < num ; i++ ){ // somma + media della seconda matrice
          for(j = 0 ; j < num ; j++){
            somma[2] += matrice3[j][i];
          }
          nmedia = num * num;
          media[2] = somma[2] / nmedia;
     }
     cout<<endl;
     cout<<"Il MASSIMO della prima MATRICE: "<<max[0]<<endl;
     cout<<"Il MINIMO della prima MATRICE: "<<min[0]<<endl;
     cout<<"La MEDIA della prima MATRICE: "<<media[0]<<endl;
     cout<<"La SOMMA della prima MATRICE: "<<somma[0]<<endl;
     cout<<"Il MASSIMO della seconda MATRICE: "<<max[1]<<endl;
     cout<<"Il MINIMO della seconda MATRICE: "<<min[1]<<endl;
     cout<<"La MEDIA della seconda MATRICE: "<<media[1]<<endl;
     cout<<"La SOMMA della seconda MATRICE: "<<somma[1]<<endl;
     cout<<"Il MASSIMO della terza MATRICE: "<<max[2]<<endl;
     cout<<"Il MINIMO della terza MATRICE: "<<min[2]<<endl;
     cout<<"La MEDIA della terza MATRICE: "<<media[2]<<endl;
     cout<<"La SOMMA della terza MATRICE: "<<somma[2]<<endl;
}