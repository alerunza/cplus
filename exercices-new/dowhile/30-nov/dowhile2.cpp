#include <iostream>
/* Calcola la media dei voti di uno studente. */
using namespace std;

int main(){
    float voto, voti, somma;
    int contavoto = 0;

        cout<<"Inserisci il numero di VOTI che hai"<<endl;
            cin>>voti;

/*     do{
        cout<<"Inserisci il voto - "<<contavoto++<<endl;
            cin>>voto;                                          COSTRUTTO DO-WHILE
        somma = somma + voto / 3;
    }
    while(contavoto!=voti); */

    while(contavoto!=voti){
        cout<<"Inserisci il voto - "<<contavoto++<<endl;
            cin>>voto;                                          //COSTRUTTO WHILE
        somma = somma + voto / 3;
    }

        cout<<"La media dei tuoi voti e' "<<somma<<endl;

    return 0;
}