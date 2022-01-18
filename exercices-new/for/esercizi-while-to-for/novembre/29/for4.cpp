#include <iostream>
/* Scrivere un programma che mostra a 
video i numeri pari compresi tra 0 e 100 in ordine decrescente, cioè da 100 a 0. */
using namespace std;

int main(){

     for(int n = 100; n>=0; n++){
        cout<<n<<endl;
        n=n-2;
    }
    return 0;
}