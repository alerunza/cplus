#include <iostream>

using namespace std;

int main(){
     int n, i, j, sommap=0, sommas=0, sommat=0;

     cout << "quanto grande vuoi la matrice?"<<endl;
     cin>>n;

     int Matrice[n][n];

     for(i=0; i<n; i++){
          for(j=0; j<n; j++){
               cin>>Matrice[i][j]; 
          }
     }
     
          
     
     for(i=1;i<n; i++){
          sommap+=Matrice[i][i];

     }
     for(i=1, j=n; i<n; i++,j--){
          sommas+=Matrice[i][j];
     }

     sommat=sommap+sommas;

     cout<<sommat<<endl;

     
}