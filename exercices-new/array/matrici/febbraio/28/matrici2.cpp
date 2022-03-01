#include <iostream>
/*2 - Dato un array A[ N ][ M] di elementi reali, produrre:
Le somme di ogni riga
Le somme di ogni colonna
La riga di somma massima
La colonna di somma massima

N=4
M=4 
1 2 3 4
5 6 7 8 
9 1 2 3 
4 5 6 7 
Somme righe 10 26 15 22 
Somme colonne 19 14 18 22 
Riga max 1 
Colonna min 3*/
using namespace std;

int main(){
    int N = 4;
    int M = 4;
    int A[N][M];
    int i, j;
    int sommarighe, sommacolonne;

    cout<<"Inserisci gli elementi già determinati"<<endl;
    for(i = 0; i < N; i++){ // inserire elementi all'interno della matrice
        for(j = 0; j < M; j++){
            cin>>A[i][j];
        }
    }
    for(i = 0; i < N; i++){ // stampa matrice
        for(j = 0; j < M; j++){
            cout<<A[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    cout<<"Somma RIGHE: "<<endl;
    for(i = 0; i < N; i++){ // somma righe matrice
        sommarighe = 0;
        for(j = 0; j < M; j++){
            sommarighe += A[i][j];
        }
        cout<<sommarighe<<"\t";
    }
    
    cout<<"Somma COLONNE: "<<endl;
    for(i = 0; i < N; i++){ // somma colonne matrice
        sommacolonne = 0;
        for(j = 0; j < M; j++){
            sommacolonne += A[j][i];
        }
        cout<<sommacolonne<<"\t";
    }
}