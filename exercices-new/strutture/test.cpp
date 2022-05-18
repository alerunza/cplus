#include <iostream>
#include <cmath>
/* Calcolare la differenza in minuti fra due orari utilizzando le strutture */
using namespace std;

struct orario{
     int ora;
     int minuti;
};

int main(){
     orario tempo, tempo2;
     
     cout<<"Inserisci due orari ES: (15:40 & 19:30)"<<endl;
          cin>>tempo.ora>>tempo.minuti;
     cout<<"Primo ORARIO: "<<tempo.ora<<":"<<tempo.minuti<<"\nInserisci il secondo orario"<<endl;
          cin>>tempo2.ora>>tempo2.minuti;
     cout<<"Secondo ORARIO: "<<tempo2.ora<<":"<<tempo2.minuti<<endl;

     int oratot;
     
     oratot = (tempo.ora * 60 + tempo.minuti) - (tempo2.ora * 60 + tempo2.minuti);

     cout<<abs(oratot)<<" minuti"<<endl;
}