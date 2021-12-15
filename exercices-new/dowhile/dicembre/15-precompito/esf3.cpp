#include <iostream>
/* Dopo aver fatto inserire un numero naturale il programma 
restituisce in output da quante cifre è composto il numero. */
using namespace std;

int main(){
    int n, copy;
    int contacifre = 1;

    cout<<"Inserisci un numero"<<endl;
        cin>>n;
    copy = n;
    while(copy/10>0){
        contacifre++;
        copy/=10;
    }
    cout<<contacifre<<endl;

    return 0;
}