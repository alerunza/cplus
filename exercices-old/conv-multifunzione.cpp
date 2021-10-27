#include <iostream>
#include <iomanip> //serve per setprecision (limitare i num. decimali)
#include <unistd.h> //serve per usleep
using namespace std;

unsigned int microsecond = 1000000;

int main(){
        int sceltacon; //  dichiara per la scelta della conversione...
/*         int sceltarisposta; // dichiara per la scelta risposta finale */
        double numero; // dichiara il numero inserito
/*         double risposta; // dichiara risposta della scelta finale */
        double rise, risu; // dichiara il numero convertito
        double risle, rislu; // dichiara il numero convertito
        double risleu, rislue; // dichiara il numero convertito
        cout<<endl;
        cout<<" Convertitore multifunzione by alerunza"<<endl;
        cout<<" Scegli la valuta da convertire: "<<endl;
        cout<<" 1 - Euro a Dollaro"<<endl;
        cout<<" 2 - Dollaro a Euro"<<endl;
        cout<<" 3 - Lire a Euro"<<endl;
        cout<<" 4 - Euro a Lire"<<endl;
        cout<<" 5 - Lire a Dollari"<<endl;
        cout<<" 6 - Dollari a Lire"<<endl;
                cin>>sceltacon; // scelta della conversione
        cout<<"Comando ricevuto: "<<sceltacon<<endl;
        // Sleep(1150); // delay in milliseconds
        usleep(1.15 * microsecond);
        cout<<endl;
        cout<<"Caricamento..."<<endl;
        // Sleep(1150); // delay in milliseconds
        usleep(1.15 * microsecond);
        cout<<endl;

        if(sceltacon==1) // euro to dollari
        {
                cout<<"Inserisci il numero dei soldi in euro da convertire in dollari"<<endl;
                        cin>>numero; // scelta dei soldi da convertire
                        cout<<endl;
                rise=numero*1.1902; // ris= risultato; e= euro
                cout<<"Conversione in corso da Euro a Dollari Americani... "<<endl;
                        // Sleep(1150); // delay in milliseconds
                        usleep(1.15 * microsecond);
                        cout<<endl;
                cout<<"Conversione effettuata: "<<setprecision(3)<<rise<<" $"<<endl; // nota dolente... se si mette € non verrà riconosciuto, esigo spiegazioni.
        }
        else if(sceltacon==2) // dollari to euro
        {
                cout<<"Inserisci il numero dei soldi in dollari da convertire in euro"<<endl;
                        cin>>numero; // scelta dei soldi da convertire
                        cout<<endl;
                risu=numero/1.1902; // ris= risultato; u= usd
                cout<<"Conversione in corso da Dollari Americani a Euro..."<<endl;
                        // Sleep(1150); // delay in milliseconds
                        usleep(1.15 * microsecond);
                        cout<<endl;
                cout<<"Conversione effettuata: "<<setprecision(3)<<risu<<" EUR"<<endl; // setprecision() funge per arrotondare i numeri decimali di float/double
        }
        else if(sceltacon==3) // lire to euro
        {
                cout<<"Inserisci il numero dei soldi in lire da convertire in euro"<<endl;
                        cin>>numero; // scelta dei soldi da convertire
                        cout<<endl;
                risle=numero/1936.27;
                cout<<"Conversione in corso da Lire Italiane a Euro..."<<endl;
                        // Sleep(1150); // delay in milliseconds
                        usleep(1.15 * microsecond);
                        cout<<endl;
                cout<<"Conversione effettuata: "<<setprecision(2)<<risle<<" EUR"<<endl;
        }
        else if(sceltacon==4) // euro to lire
        {
                cout<<"Inserisci il numero dei soldi in euro da convertire in lire"<<endl;
                        cin>>numero; // scelta dei soldi da convertire
                        cout<<endl;
                risleu=numero*1936.27;
                cout<<"Conversione in corso da Euro a Lire Italiane..."<<endl;
                        // Sleep(1150); // delay in milliseconds
                        usleep(1.15 * microsecond);
                        cout<<endl;
                cout<<"Conversione effettuata: "<<risleu<<" ITL"<<endl;
        }
        else if(sceltacon==5) // lire to usd
        {
                cout<<"Inserisci il numero dei soldi in lire da convertire in dollari"<<endl;
                        cin>>numero; // scelta dei soldi da convertire
                        cout<<endl;
                rislu=numero/1936.27*1.1902;
                cout<<"Conversione in corso da Lire Italiane a Dollari Americani..."<<endl;
                        // Sleep(1150); // delay in milliseconds
                        usleep(1.15 * microsecond);
                        cout<<endl;
                cout<<"Conversione effettuata: "<<setprecision(3)<<rislu<<" $"<<endl; // setprecision(3) funge per arrotondare i numeri decimali di float/double
        }
        else if(sceltacon==6) // usd to lire
        {
                cout<<"Inserisci il numero dei soldi in dollari da convertire in lire"<<endl;
                        cin>>numero; // scelta dei soldi da convertire
                        cout<<endl;
                rislue=numero/1.1902*1936.27;
                cout<<"Conversione in corso da Dollari Americani a Lire Italiane..."<<endl;
                        // Sleep(1150); // delay in milliseconds
                        usleep(1.15 * microsecond);
                        cout<<endl;
                cout<<"Conversione effettuata: "<<rislue<<" ITL"<<endl;
        }
/*         cout<<endl;
        cout<<"Hai bisogno ancora di convertire altri soldi per altre valute?"<<endl;
        cout<<"1 - Si"<<endl;
        cout<<"2 - No"<<endl;
                cin>>risposta;
        if(sceltarisposta==1)
        {
                cout<<"Bene... scegli nuovamente quello che ti serve!"<<endl;
                cout<<" Scegli la valuta da convertire: "<<endl;
                cout<<" 1 - Euro a Dollaro"<<endl;
                cout<<" 2 - Dollaro a Euro"<<endl;
                cout<<" 3 - Lire a Euro"<<endl;
                cout<<" 4 - Euro a Lire"<<endl;                         // wip  - work in progress
                cout<<" 5 - Lire a Dollari"<<endl;
                cout<<" 6 - Dollari a Lire"<<endl;
                        cin>>sceltacon; // scelta della conversione
                cout<<"Comando ricevuto: "<<sceltacon<<endl;
                // Sleep(1150); // delay in milliseconds
                usleep(1.15 * microsecond);
                cout<<endl;
                cout<<"Caricamento..."<<endl;
                // Sleep(1150); // delay in milliseconds
                usleep(1.15 * microsecond);
                cout<<endl;
        }
        else if(sceltarisposta==2)
        {
                cout<<"Ok alla prossima!"<<endl;
        } */
        // Sleep(2100); // delay in milliseconds
        usleep(2.1 * microsecond);
        cout<<"Grazie mille per aver usufruito del convertitore multifunzione"<<endl;
        cout<<"created by alerunza"<<endl;
        cout<<endl;
        cout<<"La preghiamo di rilasciare una recensione :D"<<endl;
        cout<<endl;

    return 0;    
    system("pause");
}