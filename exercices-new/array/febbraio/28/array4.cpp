#include <iostream>
/* 4 - Programma che, inseriti 20 caratteri alfabetici da
tastiera, li stampa in ordine alfabetico. */
using namespace std;

int main(){
    char lettere[20];

    cout<<"Inserisci dei caratteri"<<endl;
    for(int i = 0; i < 20; i++){
        cin>>lettere[i];
        while(lettere[i]<'a'|| lettere[i]>'z'){
            cout<<"Inserisci un carattere valido!"<<endl;
                cin>>lettere[i];
        }
    }
    cout<<"Caratteri inseriti: "<<endl;
    for(int i = 0; i < 20; i++){ // stampa array con i caratteri
        cout<<lettere[i]<<endl;
    }
    
}