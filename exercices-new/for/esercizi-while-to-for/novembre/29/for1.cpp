#include <iostream>
/* Scrivi un programma che richiede all'utente un numero intero positivo N e 
visualizza N volte la stringa "Ciao!" sul video, dopodiché visualizza una sola volta la stringa "Arrivederci" */
using namespace std;

int main(){
    int n;

    cout<<"Inserisci un numero INTERO"<<endl;
        cin>>n;
    
    for(; n>0; ){
        cout<<"Ciao!"<<n<<endl;
        n=n-1;
    }

    cout<<"Arrivederci!"<<endl;

    return 0;
}