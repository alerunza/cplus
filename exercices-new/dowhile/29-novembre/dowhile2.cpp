#include <iostream>
/* Scrivi un programma che mostra i primi N numeri naturali con N fornito dall'utente.
Accanto ad ogni numero deve comparire la scritta "pari" / "dispari". */
using namespace std;

int main(){
    int n, conta=1;

    cout<<"Inserisci un numero INTERO"<<endl;
        cin>>n;

    while(conta<=n){
        if(conta%2==0){
            cout<<conta<<" - Pari"<<endl;
        }
        else{
            cout<<conta<<" - Dispari"<<endl;
        }
        conta++;
    }

/*     while(conta<=n){

        cout<<conta<<" - Dispari"<<endl;
        conta++;
        cout<<conta<<" - Pari"<<endl;
        conta++;
    } */

    return 0;
}