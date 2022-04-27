#include <iostream>
/*  L'indice di massa corporea( BMI, Body mass index) è un dato
biometrico calcolato in base all'altezza A e al peso P di una persona. tramite
la seguente formula  

BMI [kg/m²] = P [kg] / A² [m²]. 

In altre parole, l'indice di massa corporea e' pari al peso diviso il quadrato
dell'altezza. 

Esempio: altezza corporea = 1,75; peso corporeo = 65 kg: IMC = 65 kg/(1,75
m*1,75 m) = 65 kg/3,0 m2 =
21,22 kg/m2. Scrivi un programma che consenta di calcolare l'indice
di massa corporea, utilizzando una funzione. */
using namespace std;

void BMI(int peso, float altezza){
    float bmi;

    bmi = peso / (altezza * altezza);

    cout<<"Ecco l'indice della tua MASSA CORPOREA: "<<bmi<<endl;
}

int main(){

    int kg;
    float altezza;

    cout<<"Inserisci il tuo PESO in KG e la tua ALTEZZA in Metri"<<endl;
        cin>>kg>>altezza;

    BMI(kg, altezza);

}