#include<iostream>
#include<string>
/* Dati N elementi scelti da tastiera, caricare tre vettori paralleli con nome, cognome ed età.
Stampare l'elenco dei maggiorenni (cognome, nome, età ed indice). */
using namespace std;

int main(){
    int a;
    cout<<"quanti elementi vuoi inserire"<<endl;
        cin>>a;
    int n[a];
    string nome[a];
    string cognome[a];
    string cognomer;
    int i=0,c=0;        
    for(int i=0;i<a;i++){
        cout<<"Inserire il nome"<<endl;
            cin>>nome[i];

        cout<<"Inserire il cognome"<<endl;
            cin>>cognome[i];

        cout<<"Inserire il codice"<<endl;
            cin>>n[i];
    }

    cout<<"Quale cognome vuoi cercare?"<<endl;
        cin>>cognomer;

    for(i = 0; i<a; i++){
        if(cognomer==cognome[i]){
            cout<<"Il cognome "<<cognomer<<" si  trova in "<<i+1<<" posizione"<<endl;
            cout<<"il nome e' "<<nome[i]<<endl;
            c++;
        }
    }
    if(c==0){
        cout<<"ERRORE!!!"<<endl;
        cout<<"il cognome "<<cognomer<<" non e' nell' elenco"<<endl;
    }
    return 0;
}