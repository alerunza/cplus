#include <iostream>
#include <cmath>
/* Implementare le soluzioni
di un'equazione di secondo grado utilizzando variabili locali e globali */
using namespace std;

float a, b, c; // dichiarazione di variabili globali

void eqsecgrado(float a, float b, float c){
    float x1, x2; // dichiarazione di variabili locali

    x1 = (-b - sqrt ((b*b) - 4*a*c))/(2*a); // procedimento per la risoluzione dell'equazione di sec grado.
    x2 = (-b + sqrt ((b*b) - 4*a*c))/(2*a);

    cout<<x1<<" "<<x2<<endl; // stampa
}

int main(){
    cout<<"Inserisci un Equazione di SECONDO Grado"<<endl;
        cin>>a>>b>>c;
 
    eqsecgrado(a, b, c);
    
    return 0;
}