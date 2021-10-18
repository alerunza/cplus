#include <iostream>
/* 3 Progettare e codificare in C++ un programma che permetta
di stabilire la stagione corrispondente al mese inserito
come intero dall’utente. 
• Esempio: se l’utente digita 1 (Gennaio) il programma deve
stampare Inverno. Qualora il mese sia Marzo, Giugno, Settembre e
Dicembre, tutti mesi a cavallo di due stagioni, si richieda
all’utente di specificare anche il giorno. Se il giorno e’
compreso tra 1 e 20 si considera la stagione precedente
altrimenti quella successiva.*/
// inverno (12,1,2)
// primavera (3,4,5)
// estate (6-7-8)
// autunno (9-10-11)

using namespace std;

int main(){
     int m; //mese
     int d; //giorno

     cout<<"Inserisci un mese dell'anno\n";
          cin>>m;   

     switch(m){
          case 1:
          case 2:
          cout<<"Inverno"<<endl;
          break;
          case 4:
          case 5:
          cout<<"Primavera"<<endl;
          break;
          case 7:
          case 8:
          cout<<"Estate"<<endl;
          break;
          case 10:
          case 11:
          cout<<"Autunno"<<endl;
          break;
     }
     if(m>=13){
          cout<<"Numero non valido"<<endl;
     }
     if(m==3){
          cout<<"Immetti il giorno di Marzo"<<endl;
               cin>>d;
          if(d<=20){
               cout<<"Inverno - "<<d<<" "<<"Marzo"<<endl;
          }
          else{
               cout<<"Primavera - "<<d<<" "<<"Marzo"<<endl;
          }
     }
     if(m==6){
          cout<<"Immetti il giorno di Giugno"<<endl;
               cin>>d;
          if(d<=20){
               cout<<"Primavera - "<<d<<" "<<"Giugno"<<endl;
          }
          else{
               cout<<"Estate - "<<d<<" "<<"Giugno"<<endl;
          }
     }
     if(m==9){
          cout<<"Immetti il giorno di Settembre"<<endl;
               cin>>d;
          if(d<=20){
               cout<<"Estate - "<<d<<" "<<"Settembre"<<endl;
          }
          else{
               cout<<"Autunno - "<<d<<" "<<"Settembre"<<endl;
          }
     }
     if(m==12){
          cout<<"Immetti il giorno di Dicembre"<<endl;
               cin>>d;
          if(d<=20){
               cout<<"Autunno - "<<d<<" "<<"Dicembre"<<endl;
          }
          else{
               cout<<"Inverno - "<<d<<" "<<"Dicembre"<<endl;
          }
     }

    return 0;
}