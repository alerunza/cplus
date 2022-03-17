#include <iostream>
#include <cmath>
/* Implementare le soluzioni
di un'equazione di secondo grado utilizzando variabili locali e globali */
using namespace std;

float a, b, c; // dichiarazione di variabili globali

float eqsecgrado(float a, float b, float c);
float eqsecgrado2(float a, float b, float c);

int main(){
    float x1, x2;
    cout<<"Inserisci un Equazione di SECONDO Grado"<<endl;
        cin>>a>>b>>c;

    x1 = eqsecgrado(a, b, c);
    x2 = eqsecgrado2(a, b, c);
    
    cout<<x1<<" "<<x2<<endl;

    return 0;
}

float eqsecgrado(float a, float b, float c){
    float x1; // dichiarazione di variabili locali

    x1 = (-b - sqrt ((b*b) - 4*a*c))/(2*a); // procedimento per la risoluzione dell'equazione di sec grado.

    return x1;
}

float eqsecgrado2(float a, float b, float c){
    float x2; // dichiarazione di variabili locali

    x2 = (-b + sqrt ((b*b) - 4*a*c))/(2*a);// procedimento per la risoluzione dell'equazione di sec grado.

    return x2;
}