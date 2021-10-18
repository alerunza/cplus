#include <iostream>
/* 3 Progettare e codificare in C++ un programma che permetta
di stabilire la stagione corrispondente al mese inserito
come intero dall’utente. 
• Esempio: se l’utente digita 1 (Gennaio) il programma deve
stampare Inverno. */
// inverno (12,1,2)
// primavera (3,4,5)
// estate (6-7-8)
// autunno (9-10-11)

using namespace std;

int main(){
     int n;

     cout<<"Inserisci un numero dell'anno\n";
          cin>>n;   

     switch(n){
          case 12:
          case 1:
          case 2:
          cout<<"Inverno"<<endl;
          break;
          case 3:
          case 4:
          case 5:
          cout<<"Primavera"<<endl;
          break;
          case 6:
          case 7:
          case 8:
          cout<<"Estate"<<endl;
          break;
          case 9:
          case 10:
          case 11:
          cout<<"Autunno"<<endl;
          break;
          default:
          cout<<"Stagione e mese non rilevato";
     }
    return 0;
}