#include <iostream>

using namespace std;

int main(){
    float num1, num2, risultato; //Float per i numeri decimali
    char sceltaop; //Char per unico carattere (Dichiara come int, float etc...)
        cout<<"----Calcolatrice by alerunza----"<<endl;
        cout<<"Scegli l'operazione, ecco a te l'elenco:"<<endl; //Stampa per l'utente
        cout<<"+ - addizione"<<endl; 
        cout<<"- - sottrazione"<<endl;
        cout<<"* - moltiplicazione"<<endl;
        cout<<"/ - divisone"<<endl;
            cin>>sceltaop; // Digita per l'utente, per memorizzare l'inserzione
    
        cout<<"Inserisci il primo numero"<<endl; //Stampa per l'utente
            cin>>num1; // Digita per l'utente, per memorizzare l'inserzione
        cout<<"Inserisci il secondo numero"<<endl; //Stampa per l'utente
            cin>>num2; // Digita per l'utente, per memorizzare l'inserzione
    
    if(sceltaop=='+') risultato=num1+num2; // Se è + grazie al char (Carattere unico) andrà a fare la seguente operazione
    if(sceltaop=='-') risultato=num1-num2; // Se è + grazie al char (Carattere unico) andrà a fare la seguente operazione
    if(sceltaop=='*') risultato=num1*num2; // Se è + grazie al char (Carattere unico) andrà a fare la seguente operazione
    if(sceltaop=='/') risultato=num1/num2; // Se è + grazie al char (Carattere unico) andrà a fare la seguente operazione
    
    if(num2!=0) // Se è diverso da 0 andrà a....
        cout<<"Risultato = "<<risultato; //Stampa per l'utente
        else if(num1==0) //Se il num1 è uguale a zero andra a....
        cout<<"Risultato = Indeterminato";
        else //Il primo num è diverso da zero
        cout<<"Risultato = Impossibile";
    
    return 0;
    system("pause");
}