#include <iostream>
/* Carica in un vettore una serie di numeri e poi visualizza il massimo */
using namespace std;

int main(){
    int array[5];
    int max = 0;
    cout<<"Inserisci una serie di numeri - 5"<<endl;
    for(int i = 0; i<5; i++){
        cin>>array[i];
    }
    max = array[0];
    for(int i = 0; i<5; i++){
        if(array[i]>max){
            max = array[i];
        }
    }
    cout<<max<<endl;
}