#include <iostream>

using namespace std;

int main (){
     int matrice [3][7];
     int i, j;  
     for(i = 0; i < 3; i++){        
          for(j = 0; j < 7; j++){
               cout<<"inserisci il numero "<<i+1<<" citta"<<endl;
                    cin>>matrice[i][j];
          }         
     }
     for(i = 0; i < 3; i++){        
          for(j = 0; j < 7; j++){
               cout<<matrice[i][j]<<"\t"; 
          }
          cout<<endl;
     }
     
     int max;
     max = matrice[0][5];
     for(i = 0 ; i < 3 ; i++ ){
          for(j = 0 ; j < 6 ; j++){
               if(matrice[i][5]>max){
                    max = matrice[i][5];
               }
          }
     }
     
     cout<<"Il massimo e' "<<max<<endl;
}