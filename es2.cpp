#include <iostream>

using namespace std;

int main(){
    float ora;
    float minuti;
    float secondi;
    float oratot;
    float minutitot;
    float seconditot;

    cout<<"Inserisci l'orario tramite i 3 input: "<<endl;
    cout<<"1 Ora"<<endl;
    cout<<"2 Minuto"<<endl;
    cout<<"3 Secondi, se non sai i secondi potresti lasciare invariato con un: 0"<<endl;
        cin>>ora;
        cin>>minuti;
        cin>>secondi;
    
    oratot = ora * 3600;
    minutitot = minuti * 60;
    seconditot = oratot + minutitot + secondi;

    cout<<"Ecco a te il tuo orario convertito in secondi totali: "<<seconditot<<endl;
}