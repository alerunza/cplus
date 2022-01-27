#include <iostream>
/* Scrivi un programma che richiede
all'utente un vettore costituito da un numero pari di elementi (massimo 100
elementi). Il programma deve scambiare i valori in posizione pari con quelli in
posizione dispari, e infine stampare il contenuto del vettore dopo tale
operazione.  */
using namespace std;

int main(){

     int n;
     const int max = 100;

     while(n%2!=0 or n>=max or n<=0){
     cout<<"Inserisci un numero di elementi"<<endl;
          cin>>n;
     }

     int array[n];

     for(int i = 0; i<n; i++){
          cin>>array[i]; // inserire all'interno agli array
     }
     for(int i = 0; i<n; i+=2){
          int temp;
          temp = array[i];
          array[i] = array[i+1]; // ciclo per scambiare le posizioni dei valori
          array[i+1] = temp;
     }
     for(int i = 0; i<n; i++){
          cout<<array[i]<<endl; // stampare gli array con le posizioni scambiate
     }

}