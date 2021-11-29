#include <iostream>
/* Scrivere un programma che mostra a 
video i numeri pari compresi tra 0 e 100 in ordine decrescente, cioè da 100 a 0. */
using namespace std;

int main(){
    int n = 100;

    do{
        cout<<n<<endl;
        n=n-2;
    }
    while(n>=0);

    return 0;
}