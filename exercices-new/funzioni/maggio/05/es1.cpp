#include <iostream>
/* Creare una funzione che riceve una quantità di tempo in formato ore, minuti e secondi 
e la restituisce espressa solamente in secondi. */
using namespace std;

int calcsecondi(int h, int m, int s){
     int tot = (h*3600) + (m*60) + s;
     
     return tot;
}

int main(){
     int ore, min, sec;

     cout<<"Inserisci Ore, Minuti e Secondi"<<endl;
          cin>>ore>>min>>sec;
     
     cout<<"SECONDI Totali: "<<calcsecondi(ore, min, sec)<<endl;
}