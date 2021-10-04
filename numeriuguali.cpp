#include <iostream>

using namespace std;

int main(){
    int intero1;
    int intero2;

    cout<<"Inserisci due numeri, per scoprire se sono uguali"<<endl;
        cin>>intero1;
        cin>>intero2;
    if(intero1==intero2){
        cout<<"Complimenti sono risultati uguali!"<<endl;
        cout<<"Primo numero: "<<intero1<<" Secondo numero: "<<intero2<<endl;
    }
    else{
        cout<<"Nulla da fare, capisco che non ci voleva un genio, ma c'hai provato!"<<endl;
    }

    return 0;
}