#include <iostream>
/* Realizzare un programma che legga in input un voto rappresentato da un carattere tra A ed
E e ne stampi il significato. */
using namespace std;

int main(){
    char voto;
    
    cout<<"Inserisci un voto da A fino E"<<endl;
        cin>>voto;
    
    switch(voto){
        case 'A': 
        cout<<"Ottimo voto"<<endl;
        break;
        case 'B': 
        cout<<"Distinto voto"<<endl;
        break;
        case 'C': 
        cout<<"Discreto voto"<<endl;
        break;
        case 'D': 
        cout<<"Sufficiente voto"<<endl;
        break;
        case 'E': 
        cout<<"insufficiente voto"<<endl;
        break;  
        default: 
        cout<<"Voto non valido"<<endl;
        break;
    }
    return 0;
}