#include <iostream>

using namespace std;

int main(){
    int scelta;

    cout<<"Inserisci 1 o 2"<<endl;
        cin>>scelta;
    if(scelta>2){
        cout<<"Errore non ti ho detto di mettere "<<scelta<<endl;
    }
    else if(scelta==1){
        cout<<"Bravo 1"<<endl;
    }
    else if(scelta==2){
        cout<<"Bravo 2"<<endl;
    }

    return 0;
}