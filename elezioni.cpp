#include <iostream>

using namespace std;

int main(){
    float eta;
    int voto;
    cout<<"Benvenuto, qui scoprirai se potrai votare alle elezioni."<<endl;
    cout<<"Inserisci la tua eta': "<<endl;
        cin>>eta;
    if(eta>17){
        cout<<"Bene puoi votare alle elezioni, avendo: "<<eta<<" anni"<<endl;
        cout<<"Scegli chi vuoi votare"<<endl;
        cout<<"1 - Calogero - Partito Geronesco"<<endl;
        cout<<"2 - Stefano - Partito Tarallesco"<<endl;
            cin>>voto;
        if(voto==1){
            cout<<"Hai votato Calogero del Partito Geronesco, con successo!"<<endl;
        }
        if(voto==2){
            cout<<"Hai votato Stefano del Partito Tarallesco, con successo!"<<endl;
        }
    }
    else{
        cout<<"Ci spiace, ma non hai la maggior eta' per votare, sara' per la prossima volta!"<<endl;
    }

    return 0;
}