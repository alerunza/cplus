#include <iostream>
#include <string>
#include <fstream>
/* Dati N elementi scelti da tastiera, caricare tre vettori paralleli con nome, cognome ed età.
Stampare l'elenco dei maggiorenni (cognome, nome, età ed indice). */
using namespace std;

int main(){ 
    int numero;

/*     cout<<"Inserisci gli ELEMENTI per i vettori paralleli"<<endl;
        cin>>numero; */

    int eta;
    string nome;
    string cognome;
    int i = 0;

    fstream file;
/*     string filename;
    filename = nome + ".txt"; */
    file.open("nome.txt");
    if( file.is_open() ){
        
        cout<<"Inserisci il NOME"<<endl;
            cin.ignore();
	        getline(cin, nome);
        file.close();
    }   

/*     for(i = 0; i < numero; i++){
        if( eta[i] > 17 ){ 
            cout << "COGNOME: "<< cognome[i] << "\nNOME: " << nome[i] << "\nETA': "<<eta[i] << "\nINDICE: " << i << endl;
        }
    } */
    return 0;
}

