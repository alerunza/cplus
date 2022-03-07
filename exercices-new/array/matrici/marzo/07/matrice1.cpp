/* Si devono organizzare gli incassi di 20
reparti di un grande magazzino nei 6 giorni della settimana.
Si vuole calcolare l'incasso totale di tutti i
reparti nel quarto giorno della settimana (giorno di indice 3).
*/
#include <iostream>

using namespace std;

int main(){
    const int NR=20; //numero reparti
    const int NG=6; //numero giorni
    double somma=0;
    float media;
    //dichiarazione della matrice
    double incassi[NR][NG];
    //caricamento di una matrice cioè inserimento dei dati all'interno della matrice
    for(int i=0; i<NR; i++)
         for(int j=0; j<NG; j++){
        cout<<"Matrice["<<i<<"]["<<j<<"]=";
            cin>>incassi[i][j];
        cout<<endl;
    }
//visualizzazione dei dati presenti all'interno della matrice
    for(int i=0; i<NR; i++){
        for(int j=0; j<NG; j++){
            cout<<incassi[i][j]<<" ";
        }
        cout<<'\n';
    }
//l'incasso totale di tutti i reparti nel quarto giorno della settimana
    for(int i=0; i<NR; i++){
        somma=somma+incassi[i][3];
    }
    
    cout<<"incasso totale di tutti i reparti nel quarto giorno della settimana e' "<<somma<<endl;
    
    return 0;
 }