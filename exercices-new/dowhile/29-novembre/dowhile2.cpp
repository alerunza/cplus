#include <iostream>
/* Scrivi un programma che mostra i primi N numeri naturali con N fornito dall'utente.
Accanto ad ogni numero deve comparire la scritta "pari" / "dispari". */
using namespace std;

int main(){
    int n, n2;

    cout<<"Inserisci un numero INTERO"<<endl;
        cin>>n;

    while(n>1){
        n2=n%2;
        if(n2==0){
            cout<<n<<" Pari"<<endl;

        }
        if(n2!=0){
            cout<<n<<" Dispari"<<endl;
        }
    }

    return 0;
}