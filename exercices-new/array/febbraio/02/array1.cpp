#include <iostream>
/* Un vettore contiene le età di un gruppo di persone. 
Visualizza le età delle persone maggiorenni e la loro posizione nel vettore (indice).  */
using namespace std;

int main(){
     int n;
     
     cout<<"Inserisci il numero di persone del tuo gruppo"<<endl;
          cin>>n;

     int array[n];
     int indice = 0;
     for(int i = 0; i<n; i++){
          cin>>array[i];
          if(array[i]>=18){
               cout<<"Maggiorenne: "<<array[i]<<" Posizione: "<<indice++<<endl;
          }else{
               indice++;
               cout<<"Minorenne: "<<array[i]<<endl;
          }
     }

}