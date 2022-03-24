#include <iostream>
/* Creare un programma che copi i numeri di un vettore 
su un secondo vettore in maniera inversa. Devono essere presenti le seguenti funzioni: carica, inverti stampa. */
using namespace std;

int temp;
int i, y;

void carica_vettore(int array[], int dimensione){
    cout<<"Inserisci "<<dimensione<<" NUMERI"<<endl;
    for(i = 0; i < dimensione; i++){
        cin>>array[i];
    }
}

void stampa_vettore(int array[], int dimensione){
    for(i = 0; i < dimensione; i++){
        cout<<array[i]<<endl;
    }
}

/* void inverti_vettore(int array[], int dimensione){
    for(i = 0, y = dimensione-1; i < dimensione/2; i++, y--){
        temp = array[i];
        array[i] = array[y];
        array[y] = temp;
    }
} */

void inverti_vettore(int array2[], int array[], int dimensione){
    for(i = 0, y = dimensione-1; i < dimensione; i++, y--){
        array2[i]=array[y];
    }
}

int main(){
    int n;
    cout<<"Inserisci la DIMENSIONE del tuo ARRAY"<<endl;
        cin>>n;
    int array[n];
    int array2[n];
    if(n==1){
        carica_vettore(array, n);
        stampa_vettore(array, n);
        cout<<"Il VETTORE non puo' essere invertito"<<endl;
        return 0; // lo andrà a terminare se la dimensione del vettore sarà pari a 1, dato che non si può invertire un solo numero
    }

    carica_vettore(array, n);
    cout<<"VETTORE Stampato: "<<endl;
    stampa_vettore(array, n);
    inverti_vettore(array2, array, n);
    cout<<"VETTORE Invertito stampato: "<<endl;
    stampa_vettore(array2, n);
}