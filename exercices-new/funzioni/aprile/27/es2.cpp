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

float bmi;

void BMI(float peso, float altezza){

    bmi = peso / (altezza * altezza);

    cout<<"Ecco l'indice della tua MASSA CORPOREA: "<<bmi<<endl;
}

int main(){

    float kg;
    float altezza;

    cout<<"Inserisci il tuo PESO in KG e la tua ALTEZZA in Metri"<<endl;
        cin>>kg>>altezza;

    BMI(kg, altezza);

    if(bmi<=16.5){
        cout<<"BMI Categoria (Sottopeso severo)"<<endl;
    }
    if(bmi>=16.6 and bmi<=18.4){
        cout<<"BMI Categoria (Sottopeso)"<<endl;
    }
    if(bmi>=18.5 and bmi<=24.9){
        cout<<"BMI Categoria (Normale)"<<endl;
    }
    if(bmi>=25 and bmi<=30){
        cout<<"BMI Categoria (Sovrappeso)"<<endl;
    }
    if(bmi>=30.1 and bmi<=34.9){
        cout<<"BMI Categoria (Obesità primo grado)"<<endl;
    }
    if(bmi>=35 and bmi<=40){
        cout<<"BMI Categoria (Obesità secondo grado)"<<endl;
    }
    if(bmi>=40){
        cout<<"BMI Categoria (Obesità terzo grado)"<<endl;
    }

    cout<<"Fonte dei dati scientifici: my-personaltrainer.it/calcolo-bmi.html"<<endl;

}