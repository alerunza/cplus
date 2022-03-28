#include <iostream>
#include <cmath>
/* Implementare le soluzioni
di un'equazione di secondo grado utilizzando variabili locali e globali */
using namespace std;

float a, b, c; // dichiarazione di variabili globali

void eqsecgrado(float a, float b, float c){
    float x1, x2; // dichiarazione di variabili locali
    float delta;

    delta = (b*b) - (4*a*c);
    if(delta < 0){
        cout<<"Impossibile"<<endl;
    }
    if(delta>0){
        x1 = (-b - sqrt (delta))/(2*a);
        x2 = (-b + sqrt (delta))/(2*a); 
        cout<<x1<<" "<<x2<<endl;
    }
    if(delta==0){
        x1 = (-b - sqrt (delta))/(2*a);
        x2 = (-b + sqrt (delta))/(2*a); 
        cout<<"Le soluzioni sono identiche: "<<x1<<" "<<x2<<endl;
    }

}

int main(){
    cout<<"Inserisci un Equazione di SECONDO Grado"<<endl;
        cin>>a>>b>>c;
 
    eqsecgrado(a, b, c);
    
    return 0;
}