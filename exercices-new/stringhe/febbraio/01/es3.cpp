#include <iostream>
#include <string>
/* 3 - Leggi una stringa e determina quante vocali contiene. */
using namespace std;
// a e i o u
int main(){

     string x;
     int contvoc = 0; //conta vocali

     cout<<"Inserisci una parola (stringa)"<<endl;
          cin>>x;

     for(int i = 0; x[i]!=0; i++){
          if(x[i]=='a' or x[i]=='e' or x[i]=='i' or x[i]=='o' or x[i]=='u'){
               contvoc++;
          }
     }
     cout<<"Le vocali sono: "<<contvoc<<endl;
}