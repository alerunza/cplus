#include <iostream>

using namespace std;

int main(){
    int scelta;

    cout<<"Inserisci 1 o 2"<<endl;
        cin>>scelta;

    switch(scelta){
        case 1:
            cout<<"Bravo "<<scelta<<endl;
        break;
        case 2:
            cout<<"Bravo "<<scelta<<endl;
        break;
        case 3:
            cout<<"Bravo 3? Ma non ti ho detto di mettere 3! BABBO!"<<endl;
        break;
        default:
            cout<<"Errore! non ti ho detto di mettere "<<scelta<<endl;
        break;
    }

    return 0;
}