#include <iostream>
 /* Verificare se un numero passato dall’utente è primo */
using namespace std;

int main(){
    int num;
    int divisore = 2;
    float op;

    cout<<"Inserisci un numero"<<endl;
        cin>>num;

    while(divisore<num){
       op = num % divisore;
        divisore = divisore+1;
    }
    if(divisore == num){
        cout<<"Il numero risulta essere primo: "<<num<<endl;
    }
    else{
       cout<<"Il numero risulta non essere primo: "<<num<<endl; 
    }
    return 0;
}