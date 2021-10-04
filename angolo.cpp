#include <iostream>
/*Scrivi un programma che richiede all'utente la misura dell'angolo di un triangolo (numero compreso fra 0 e 180 e comunica se è retto)
(=90) acuto (<90) e ottuso (>90)*/
//ciaooo c'è non è poossibileeed
using namespace std;

int main(){
    int angolo;

    cout<<"Inserisci un valore del tuo angolo tra 0 e 180"<<endl;
        cin>>angolo;

    if(angolo<180){
        if(angolo==90){
            cout<<"Angolo Retto: "<<angolo<<endl;
        }
        else{
            if(angolo<90){
                cout<<"Angolo Acuto: "<<angolo<<endl;
            }
            else{
                cout<<"Angolo Ottuso: "<<angolo<<endl;
            }
        }
    }
    else{
        cout<<"Angolo non compreso: "<<angolo<<endl;
    }

    return 0;
}