#include <iostream>
/* Definisci una funzione che riceve in ingresso un numero naturale 
e restituisce il valore true se il numero e' primo, e false se non lo e'. */
using namespace std;

//un numero primo deve essere divisibile per se stesso e per 1

bool checkprimo(int n){
     int divisore = 2;
     
     while(divisore < n){
          if(n % divisore == 0){
               return false;
          }
          divisore++;
     }
     return true;
}

int main(){
     int numero;
     
     cout<<"Inserisci un NUMERO per verificare se e' un numero PRIMO."<<endl;
          cin>>numero;

     if(!checkprimo(numero)){ 
          cout<<"Il NUMERO: "<<numero<<" non e' primo"<<endl;
     }else{
          cout<<"Il NUMERO: "<<numero<<" e' primo"<<endl;
     }

}