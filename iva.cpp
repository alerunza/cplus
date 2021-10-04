#include <iostream>

using namespace std;

int main(){
    const int iva = 19;
    float prezzolibro;
    float importoiva;
    float prezzonetto;

    cout<<"Inserisci il prezzo lordo (IVA Compresa) del libro"<<endl;
        cin>>prezzolibro;
    importoiva = prezzolibro * iva / 100;
    prezzonetto = prezzolibro - importoiva;
    cout<<"Importo IVA: "<<importoiva<<endl;
    cout<<"Prezzo netto: "<<prezzonetto<<endl;

    return 0;
}