#include <iostream>
/* Scrivere un programma che visualizza la successione di numeri interi, 
a partire da 1, finchè non rispondi negativamente alla domanda "Vuoi continuare?" */
using namespace std;

int main(){
     
     char scelta;

     for(int i = 0; scelta != 'n'; i++){
          cout<<i<<endl;
          cout<<"Vuoi continuare? - N"<<endl;
               cin>>scelta;
     }
     cout<<"Hai terminato la successione di numeri interi"<<endl;
}