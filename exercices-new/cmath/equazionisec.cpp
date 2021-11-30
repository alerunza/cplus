#include <iostream>
#include <cmath>
/* Calcolare le soluzioni di una equazione di secondo grado */
using namespace std;

int main(){
    float a, b, c;
    double x1, x2;
    
        cout<<"Inserisci i valori: a, b, c"<<endl;
            cin>>a>>b>>c;

        cout<<"Formula risolutiva in corso..."<<endl;
    x1=(-b-sqrt((b*b)-4*a*c))/(2*a);
    x2=(-b+sqrt((b*b)-4*a*c))/(2*a); 
        cout<<"x1 = "<<x1<<"\nx2 = "<<x2<<endl;
    return 0;
}