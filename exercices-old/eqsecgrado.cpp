#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float a, b, c;
    double x1, x2; // Dichiara come il float ma più lungo (64bit)
    
        cout<<"Inserisci i valori: a, b, c"<<endl; //Stampa per l'utente
            cin>>a>>b>>c; // Digita per l'utente, per memorizzare l'inserzione

        cout<<"Formula risolutiva in corso..."<<endl; //Stampa per l'utente   
    x1=(-b - sqrt ((b*b) - 4*a*c))/(2*a); //Formula risolutiva eq. completa: (sqrt: serve a calcolare la radice quadrata di un numero. - Libreria di cmath)
    x2=(-b + sqrt ((b*b) - 4*a*c))/(2*a); //Formula risolutiva eq. completa: (sqrt: serve a calcolare la radice quadrata di un numero. - Libreria di cmath)
        
        cout<<"x1 = "<<x1<<endl; //Soluzioni reali
        cout<<"x2 = "<<x2<<endl; //Soluzioni reali
    return 0;
    system("pause");
}