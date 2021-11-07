#include <iostream>
/* Scrivere un programma che visualizza la successione di numeri interi, 
a partire da 1, finchè non rispondi negativamente alla domanda "Vuoi continuare?" */
using namespace std;

int main(){   
    
    char scelta; 
    int n = 1;

    do{

        cout<<"vuoi continuare s o n ? "<<n++<<endl;
            cin>>scelta;
    }
    while(scelta != 'n');
    
    return 0;
}
