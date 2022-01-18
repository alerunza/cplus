#include <iostream>
/* Scrivi un programma che mostra i primi N numeri naturali con N fornito dall'utente.
Accanto ad ogni numero deve comparire la scritta "pari" / "dispari". */
using namespace std;

int main(){
    int n;

    cout<<"Inserisci un numero INTERO"<<endl;
        cin>>n;


     for(int conta = 1;conta<=n; conta++){
        if(conta%2==0){
            cout<<conta<<" - Pari"<<endl;
        }
        else{
            cout<<conta<<" - Dispari"<<endl;
        }
    }

    return 0;
}