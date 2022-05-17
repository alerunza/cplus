#include <iostream>
/* Calcolare la differenza in minuti fra due orari utilizzando le strutture */
using namespace std;

struct orario{
     int ora;
     int ora2;
};

int main(){
     orario minuti;
     
     cout<<"Inserisci due orari ES: (15 & 19)"<<endl;
          cin>>minuti.ora>>minuti.ora2;

     cout<<minuti.ora<<":00 & "<<minuti.ora2<<":00"<<endl;

     int differenza;

     if(minuti.ora>minuti.ora2){
          differenza = minuti.ora-minuti.ora2;
     }
     if(minuti.ora<minuti.ora2){
          differenza = minuti.ora2-minuti.ora;
     }
     
     differenza = differenza * 60;

     cout<<differenza<<" minuti"<<endl;
}