#include <iostream>
/* Calcolare la differenza in minuti fra due orari utilizzando le strutture */
using namespace std;

struct orario{
     int ora;
     int ora2;
     int minuti;
     int minuti2;
};

int main(){
     orario tempo;
     
     cout<<"Inserisci due orari ES: (15:40 & 19:30)"<<endl;
          cin>>tempo.ora>>tempo.minuti;
     cout<<"Primo ORARIO: "<<tempo.ora<<":"<<tempo.minuti<<"\nInserisci il secondo orario"<<endl;
          cin>>tempo.ora2>>tempo.minuti2;
     cout<<"Secondo ORARIO: "<<tempo.ora2<<":"<<tempo.minuti2<<endl;

     int oratot;
     
     oratot = (tempo.ora * 60 + tempo.minuti) - (tempo.ora2 * 60 + tempo.minuti2);

     if(oratot<0){
          oratot = oratot * (-1);
     }

     cout<<oratot<<" minuti"<<endl;
}