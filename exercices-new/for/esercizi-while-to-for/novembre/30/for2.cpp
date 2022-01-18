#include <iostream>
/* Calcola la media dei voti di uno studente. */
using namespace std;

int main(){
    float voto, voti, somma;

        cout<<"Inserisci il numero di VOTI che hai"<<endl;
            cin>>voti;

    for(int contavoto = 0; contavoto!=voti; contavoto++){
        cout<<"Inserisci il voto - "<<contavoto<<endl;
            cin>>voto;
        somma = somma + voto / voti;
    }

    cout<<"La media dei tuoi voti e' "<<somma<<endl;

    return 0;
}