#include <iostream>
#include <string.h>
#include <windows.h> // serve per il simbolo euro

using namespace std;

int main(){
    const int p = 10;
    const int s = 15;
    const int d = 25;
    string p1, s1, d1;
    p1 = "Pensionato";
    s1 = "Studentesco";
    d1 = "Disoccupato";
    float biglietto;
    int sceltabiglietto;
    SetConsoleOutputCP(1252); // serve per il simbolo euro
    
    cout<<"Immetti la tariffa del biglietto"<<endl;
        cin>>biglietto;
    cout<<"Scegli la modalita' di sconto del biglietto"<<endl;
        cin>>sceltabiglietto;

    switch(sceltabiglietto){
        case 1:
            cout<<"Ok hai selezionato lo sconto '"<<p1<<"' lo sconto applicato sara' del 10%: "<<(biglietto-biglietto*p/100)<<"\x80"<<endl; // serve per il simbolo euro \x80
        break;
        case 2:
            cout<<"Ok hai selezionato lo sconto '"<<s1<<"' lo sconto applicato sara' del 10%: "<<(biglietto-biglietto*s/100)<<"\x80"<<endl;
        break;
        case 3:
            cout<<"Ok hai selezionato lo sconto '"<<d1<<"' lo sconto applicato sara' del 10%: "<<(biglietto-biglietto*d/100)<<"\x80"<<endl;
        break;
        default:
            cout<<"Nessun sconto valido, ma solamente per te oggi c'e' una promozione del 5%: "<<(biglietto-biglietto*5/100)<<"\x80"<<endl;
        break;
    }
    return 0;
}