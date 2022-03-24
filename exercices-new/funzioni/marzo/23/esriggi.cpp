// caricamento e stampa di una matrice con le funzioni

#include <iostream>
using namespace std;

// ----- VARIABILI GLOBALI ----- //
const int massimo = 100;
// ----- /VARIABILI GLOBALI ----- //

// ----- PROTOTIPI ----- //
int dimensione_righe();
int dimensione_colonne();
void caricamento_matrice(int[][massimo], int, int);
void stampa_matrice(int[][massimo], int, int);
// ----- /PROTOTIPI ----- //

// ----- FUNZIONI ----- //
int dimensione_righe(){
    int nr;
    cout << "Inserisci il numero di righe: ";
    cin >> nr;
    while (nr > massimo)
    {
        cout << "Errore Inserisci il numero di righe: ";
        cin >> nr;
    }
    return nr;
}

int dimensione_colonne()
{
    int nc;
    cout << "Inserisci il numero di colonne: ";
    cin >> nc;
    while (nc > massimo)
    {
        cout << "Errore. Inserisci il numero di colonne: ";
        cin >> nc;
    }

    return nc;
}

void caricamento_matrice(int m[][massimo], int nr, int nc)
{
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            cout << "Inserisci l'elemento della riga numero " << i << " e colonna numero " << j << ": ";
            cin >> m[i][j];
        }
    }
}

void stampa_matrice(int m[][massimo], int nr, int nc)
{
    for (int i = 0; i < nr; i++)
    {
        for (int j = 0; j < nc; j++)
        {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}
// ----- /FUNZIONI ----- //

// ----- PROGRAMMA PRINCIPALE ----- //
int main()
{
    int matrice[massimo][massimo];
    int righe = dimensione_righe();
    cout << endl;
    int colonne = dimensione_colonne();
    cout << endl;
    caricamento_matrice(matrice, righe, colonne);
    cout << endl;
    stampa_matrice(matrice, righe, colonne);

    return 0;
}
// ----- /PROGRAMMA PRINCIPALE ----- //