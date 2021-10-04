#include <iostream>

using namespace std;

int main(){
    int num1;
    int num2;

    cout<<"Dai due numeri, per scoprire quale sara' quello maggiore!"<<endl;
        cin>>num1;
        cin>>num2;
    if(num1>num2){
        cout<<"Numero maggiore trovato: "<<num1<<endl;
    }
    if(num1<num2){
        cout<<"Numero maggiore trovato: "<<num2<<endl;  
    }

    return 0;
}