#include <iostream>

using namespace std;

int array[5];

void carica_vettore(){
    for(int i = 0; i < 5; i++){
        cin>>array[i];
    }
}
void stampa_vettore(){
    for(int i = 0; i < 5; i++){
        cout<<array[i]<<endl;
    }
}

int main(){
    //carica array
    carica_vettore();
    //stampa array
    stampa_vettore();
}