#include <iostream>
/* Creare un programma che copi i numeri di un vettore 
su un secondo vettore in maniera inversa. Devono essere presenti le seguenti funzioni: carica, inverti stampa. */
using namespace std;

int array[5];
int array_inverso[5];

void carica_vettore(){
    cout<<"Inserisci 5 NUMERI"<<endl;
    for(int i = 0; i < 5; i++){
        cin>>array[i];
    }
}

void stampa_vettore(){
    cout<<"VETTORE Stampato: "<<endl;
    for(int i = 0; i < 5; i++){
        cout<<array[i]<<endl;
    }
}

void inverti_vettore(){
    cout<<"VETTORE Invertito stampato: "<<endl;
    for(int i = 5; i > 1; i--){
        array_inverso[i] = array[i];
        cout<<array_inverso[i]<<endl;
    }
}

int main(){
    carica_vettore();
    stampa_vettore();
    inverti_vettore();
}