#include <iostream>
#include <string>
/* 2 - Leggi una stringa e un carattere e conta quante volte 
quel carattere è contenuto nella stringa. */
using namespace std;

int main(){

     string x; // stringa da leggere
     char car; //carattere da leggere
     int contcar = 0;


     cout<<"Inserisci una parola (stringa)"<<endl;
          cin>>x;

     cout<<"Inserisci il carattere da controllare nella parola (stringa)"<<endl;
          cin>>car;
     
     for(int i = 0; x[i]!=0; i++){
          if(x[i]==car){
               contcar++;
          }
     }
     cout<<x<<" il carattere da controllare '"<<car<<"' e' stato controllato "<<contcar<<" volte"<<endl;
}