#include <iostream>
/* Creare una funzione che ricevuti tre valori sottrae al maggiore metà del valore del minore.
Creare una programma che applica la funzione a tre valori inseriti dall’utente. */
using namespace std;

void funzione(float n1, float n2, float n3);

int main(){
     int a, b, c;

     cout<<"Inserisci 3 NUMERI"<<endl;
          cin>>a>>b>>c;

     funzione(a, b, c);
}
void funzione(float n1, float n2, float n3){
     
     cout<<n1<<" "<<n2<<" "<<n3<<endl;
}