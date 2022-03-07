#include <iostream>

using namespace std;

int main(){
     int n;
     int minore = 0;
     int maggiore = 0;
     cout<<"Inserisci il numero di persone"<<endl;
          cin>>n;
     
     int eta[n];

     for(int i = 0; i<n; i++){
          cin>>eta[i];
     }
     for(int i = 0; i<n; i++){
          if(eta[i]<=12){
               cout<<"Prezzo ridotto per eta': "<<eta[i]<<endl;
               minore++;
          }else{
               cout<<"Prezzo normale per eta': "<<eta[i]<<endl;
               maggiore++;
          }
     }

     cout<<"I biglietti ridotti sono: "<<minore<<"\nI biglietti normali sono: "<<maggiore<<endl;
}