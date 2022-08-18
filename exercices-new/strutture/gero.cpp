#include <iostream>

using namespace std;

struct car
{
     string marca, targa, colore, modello;
     double prezzo;
};

struct proprietario
{
     string nome, cognome, indirizzo, data;
};

struct motorizzazione
{
     proprietario prop;
     car aut;
};

int main()
{

     cout << "salve benvenuti sul sito della motorizzazione inserite i dati" << endl;

     motorizzazione macchine[3];

     for (int i = 0; i < 3; i++)
     {
          cout << "inserire i nomi dei proprietari" << endl;
          cin >> macchine[i].prop.nome;
          cin >> macchine[i].prop.cognome;
     }
     cout << "per evitare problemi ti rifarò rivedere i nomi da te inseriti" << endl;
     for (int i = 0; i < 3; i++)
     {
          cout << macchine[i].prop.nome << macchine[i].prop.cognome << endl;
     }
     for (int i = 0; i < 3; i++)
     {
          cout << "inserire le caratteristiche dell'auto" << endl;
          cin >> macchine[i].aut.marca;
          cin >> macchine[i].aut.targa;
          cin >> macchine[i].aut.colore;
          cin >> macchine[i].aut.modello;
     }
}