#include <iostream>
//puntatore test
using namespace std;

int main(){
    int n = 3;

    cout<<&n<<endl; //stampa l'indirizzo della variabile "n"
    cout<<n<<endl; // valore variabile

    int *punt; // indirizzo direttamente della variabile "punt"

    cout<<&punt<<endl;

    punt = &n;
    cout<<punt<<endl;
    cout<<*punt<<endl; // prende il valore della variabile "n"

    *punt = 19;
    cout<<&n<<endl;
    cout<<n<<endl;

}