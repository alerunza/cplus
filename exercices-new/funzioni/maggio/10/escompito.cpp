#include <iostream>

using namespace std;

void carica_array(int array[], int dimensione);
void stampa_array(int array[], int dimensione);
void somma_array(int array[], int array2[], int somma[], int dimensione);
void sommatot_array(int array[], int array2[], int dimensione);

int main(){
    int n;

    cout<<"inserisci DIMENSIONE"<<endl;
        cin>>n;

    int array[n];
    int array2[n];
    int array3[n];

    cout<<"Inserisci i NUMERI all'interno dell'ARRAY"<<endl;

    carica_array(array, n);
    /* stampa_array(array, n); */
    cout<<endl;
    carica_array(array2, n);
    /* stampa_array(array2, n); */
    somma_array(array, array2, array3, n);
    cout<<endl;
    stampa_array(array3, n);
    sommatot_array(array, array2, n);
}

void carica_array(int array[], int dimensione){
    for(int i = 0; i<dimensione; i++){
        cin>>array[i];
    }
}

void stampa_array(int array[], int dimensione){
    for(int i = 0; i<dimensione; i++){
        cout<<array[i]<<endl;
    }
    cout<<endl;
}

void somma_array(int array[], int array2[], int somma[], int dimensione){    
    for(int i = 0; i<dimensione; i++){
        somma[i] = array[i] + array2[i];
    }
}

void sommatot_array(int array[], int array2[], int dimensione){    
    int somma = 0;
    
    for(int i = 0; i<dimensione; i++){
        somma += array[i] + array2[i];
    }

    cout<<somma<<endl;
}