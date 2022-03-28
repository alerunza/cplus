#include <iostream>
/* Definisci una funzione che restituisce il valore assoluto di un numero reale passato come argomento. */
using namespace std;

/* Il valore assoluto di un numero è 
uguale al numero stesso se il numero è positivo o nullo, // DEFINIZIONE DI  Valore Assoluto
è l'opposto del numero se il numero è negativo. */

int valassoluto(int n){
     if(n<0){
          n = n * -1; // si potrebbe usare abs senza nemmeno utilizzare un if
     }
     return n;
}

int main(){
     int numero;

     cout<<"Inserisci un NUMERO"<<endl;
          cin>>numero;
     
     cout<<"VALORE Assoluto: "<<valassoluto(numero)<<endl;
     
     return 0;
}