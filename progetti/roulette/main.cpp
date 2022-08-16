#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
     srand(time(NULL)); // seed per inizializzare il generatore di numeri.
     int random = rand() % 37;

     int saldo = 100;
     char rispnum, rispmaxmin, rispdispari;
     int puntata, puntataspec, puntatapariodispari, puntatamaxmin;
     int vincita;

     cout << "Benvenuto nella European Roulette by chvbs & Mich24" << endl;
     cout << "[3][6][9][12][15][18][21][24][27][30][33][36]\n[2][5][8][11][14][17][20][23][26][29][32][35]\n[1][4][7][10][13][16][19][22][25][28][31][34]" << endl;
     cout << "Hai un saldo iniziale di: " << saldo << endl;
     cout << "Vuoi puntare su un numero specifico? (y/n)" << endl;
     cin >> rispnum;
     if (rispnum == 'y' or rispnum == 'Y')
     {
          do
          {
               cout << "Scegli un numero da 0 a 36" << endl;
               cin >> puntataspec;
          } while (puntataspec > 36 or puntataspec < 1);
          do
          {
               cout << "Quanto vuoi puntare su: " << puntataspec << "?" << endl;
               cin >> puntata;
               if (puntata > saldo)
               {
                    cout << "Hai puntato più del tuo saldo DISPONIBILE - Saldo: " << saldo << endl;
               }
               if (puntata <= 0)
               {
                    cout << "Puntata nulla" << endl;
               }
          } while (puntata > saldo or puntata <= 0);
          saldo = saldo - puntata;
          cout << "Hai puntato: " << puntata << ", il tuo saldo adesso e' " << saldo << endl;
     }
     cout << "Vuoi puntare su un numero pari o dispari? (y/n)" << endl;
     cin >> rispdispari;
     if (rispdispari == 'y' or rispdispari == 'Y')
     {
          cout << "Cosa scegli: PARI o DISPARI (p/d)" << endl;
          cin >> rispdispari;
          if (rispdispari == 'd' or rispdispari == 'D')
          {
               cout << "Hai scelto la puntata per i numeri DISPARI" << endl;
               do
               {
                    cout << "Quanto vuoi puntare sui numeri DISPARI?" << endl;
                    cin >> puntatapariodispari;
                    if (puntatapariodispari > saldo)
                    {
                         cout << "Hai puntato più del tuo saldo DISPONIBILE - Saldo: " << saldo << endl;
                    }
                    if (puntatapariodispari < 0)
                    {
                         cout << "Puntata nulla" << endl;
                    }
               } while (puntatapariodispari > saldo or puntatapariodispari < 0);

               saldo = saldo - puntatapariodispari;
               cout << "Hai puntato: " << puntatapariodispari << ", il tuo saldo adesso e' " << saldo << endl;
          }
          if (rispdispari == 'p' or rispdispari == 'P')
          {
               cout << "Hai scelto la puntata per i numeri PARI" << endl;
               do
               {
                    cout << "Quanto vuoi puntare sui numeri PARI?" << endl;
                    cin >> puntatapariodispari;
                    if (puntatapariodispari > saldo)
                    {
                         cout << "Hai puntato più del tuo saldo DISPONIBILE - Saldo: " << saldo << endl;
                    }
                    if (puntatapariodispari < 0)
                    {
                         cout << "Puntata nulla" << endl;
                    }
               } while (puntatapariodispari > saldo or puntatapariodispari < 0);
               saldo = saldo - puntatapariodispari;
               cout << "Hai puntato: " << puntatapariodispari << ", il tuo saldo adesso e' " << saldo << endl;
          }
     }
     cout << "Vuoi puntare sui numeri maggiori/minori di 18? (y/n)" << endl;
     cin >> rispmaxmin;
     if (rispmaxmin == 'y' or rispmaxmin == 'Y')
     {
          cout << "Cosa scegli: MAGGIORE di 18 o MINORE di 18 (e/g)" << endl;
          cin >> rispmaxmin;
          if (rispmaxmin == 'g' or rispmaxmin == 'G')
          {
               cout << "Hai scelto la puntata per i numeri MINORI di 18" << endl;
               do
               {
                    cout << "Quanto vuoi puntare sui numeri MINORI di 18?" << endl;
                    cin >> puntatamaxmin;
                    if (puntatamaxmin > saldo)
                    {
                         cout << "Hai puntato più del tuo saldo DISPONIBILE - Saldo: " << saldo << endl;
                    }
                    if (puntatamaxmin < 0)
                    {
                         cout << "Puntata nulla" << endl;
                    }
               } while (puntatamaxmin > saldo or puntatamaxmin < 0);
               saldo = saldo - puntatamaxmin;
               cout << "Hai puntato: " << puntatamaxmin << ", il tuo saldo adesso e' " << saldo << endl;
          }
          if (rispmaxmin == 'e' or rispmaxmin == 'E')
          {
               cout << "Hai scelto la puntata per i numeri MAGGIORI di 18" << endl;
               do
               {
                    cout << "Quanto vuoi puntare sui numeri MAGGIORI di 18?" << endl;
                    cin >> puntatamaxmin;
                    if (puntatamaxmin > saldo)
                    {
                         cout << "Hai puntato più del tuo saldo DISPONIBILE - Saldo: " << saldo << endl;
                    }
                    if (puntatamaxmin < 0)
                    {
                         cout << "Puntata nulla" << endl;
                    }
               } while (puntatamaxmin > saldo or puntatamaxmin < 0);
               saldo = saldo - puntatamaxmin;
               cout << "Hai puntato: " << puntatamaxmin << ", il tuo saldo adesso e' " << saldo << endl;
          }
     }

     cout << "E' uscito il numero: " << random << endl;
     if (random == puntata) // vincita su una puntata specifica
     {
          vincita = puntata * 35;
          saldo = saldo + vincita;
          cout << "Hai VINTO. Il tuo guadagno e' di: " << vincita << endl;
          cout << "Il tuo SALDO adesso e': " << saldo << endl;
     }

     else if ((random % 2 == 0) and (rispdispari == 'p' or rispdispari == 'P')) // vincita su una puntata pari
     {
          vincita = puntatapariodispari * 2;
          saldo = saldo + vincita;
          cout << "Hai VINTO. Il tuo guadagno e' di: " << vincita << endl;
          cout << "Il tuo SALDO adesso e': " << saldo << endl;
     }

     else if ((random % 2 != 0) and (rispdispari == 'd' or rispdispari == 'D')) // vincita su una puntata dispari
     {
          vincita = puntatapariodispari * 2;
          saldo = saldo + vincita;
          cout << "Hai VINTO. Il tuo guadagno e' di: " << vincita << endl;
          cout << "Il tuo SALDO adesso e': " << saldo << endl;
     }
     else
     {
          cout << "Hai PERSO questa puntata.\nIl tuo SALDO adesso e': " << saldo << endl;
     }
}