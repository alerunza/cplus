#include <iostream>

using namespace std;

class Veicolo{
    public: 
    string modello;
    string alimentazione;

    void anno();
};

void Veicolo::anno(){
    cout<<"L'anno del veicolo e' corretto"<<endl;
}


int main(){

    Veicolo tesla;
    tesla.modello = "Model 3";
    tesla.alimentazione = "Elettrico";

    Veicolo ferrari;
    ferrari.modello = "Roma";
    ferrari.alimentazione = "Benzina";

    int scelta;
    int anno;

    cout<<"Scegli il veicolo\n1 - Tesla\n2 - Ferrari"<<endl;
        cin>>scelta;
    if(scelta==1){
        cout<<"Inserisci l'anno del veicolo corrente"<<endl;
            cin>>anno;
        if(anno==2017){
            tesla.anno();
        }else{
            cout<<"L'anno del veicolo non e' corretto, mi spiace ma avrai il veicolo da te desiderato"<<endl;
        }
        cout<<"Tesla: "<<tesla.modello;
        cout<<"\nTesla Alimentazione: "<<tesla.alimentazione;
        cout<<"\nAnno: "<<anno<<endl;
    }
    if(scelta==2){
        cout<<"Inserisci l'anno del veicolo corrente"<<endl;
            cin>>anno;
        if(anno==2019){
            ferrari.anno();
        }else{
            cout<<"L'anno del veicolo non e' corretto, mi spiace ma avrai il veicolo da te desiderato"<<endl;
        }        
        cout<<"Ferrari: "<<ferrari.modello;
        cout<<"\nTesla Alimentazione: "<<ferrari.alimentazione;
        cout<<"\nAnno: "<<anno<<endl;
    }

    


}