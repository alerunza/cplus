#include <iostream>
/* Richiedere all'utente un vettore di N
numeri interi e, terminato l'inserimento, visualizzare solo i numeri inseriti
che sono divisibili sia per 3 che per 5.*/
using namespace std;

int main(){

    int n;
    int array[n];

    cout<<"Inserisci il quantitativo di array"<<endl;
        cin>>n;

    for(int i = 0; i<n; i++){
        cin>>array[i];
    }

    for(int i = n; i>0; i--){
        if(array[i]%3==0){
            cout<<"Divisibile per 3: "<<array[i]<<endl;
        }
        if(array[i]%5==0){
            cout<<"Divisibile per 5: "<<array[i]<<endl;
        }
    }

}