#include <iostream>
/*Si devono organizzare gli incassi di 20 reparti di un grande magazzino nei 6
giorni della settimana. Si vuole calcolare l'incasso
totale di tutti i reparti nel quarto giorno della settimana */
using namespace std;

int main(){
    int i, j; // i = n.righe; j = n.colonne
    int somma;
    int matrice[20][6];
    
    for(i = 0 ; i < 20 ; i++ ){
        for(j = 0 ; j < 6 ; j++){
            cout<<"Inserisci gli incassi della settimana seguente: "<<i<<" "<<j<<endl;
                cin>>matrice[i][j];
        }
    }
    cout<<"Incassi registrati: "<<endl;
    for(i = 0 ; i < 20 ; i++ ){
        for(j = 0 ; j < 6 ; j++){
            cout<<matrice[i][j]<<"\t";   //stampa l'intera matrice
        }
        cout<<endl;
    }
    somma = 0;
    for(i = 0 ; i < 20 ; i++ ){
        
        for(j = 0 ; j < 4 ; j++){    //calcolo totale degli incassi del 4 giorno
            somma += matrice[i][j];
        }
    }
    cout<<somma<<endl;
}