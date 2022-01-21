#include <iostream>
/* test */
using namespace std;

void funzione(string nome){
    cout<<"la tua mail generata e' "<<nome<<"@rapisardidavinci.it"<<endl;
}

int somma(int x, int y){
    int i = x+y;
    cout<<i<<endl;
}

int main(){

    string nomeutente;

    cout<<"Inserisci il tuo nome utente"<<endl;
        cin>>nomeutente;

    int x = 10;
    int y = 5;

    funzione(nomeutente);
    somma(x, y);

    return 0;
}