#include <iostream>
/* dati tre lati  verifichiamo, se è equilatero, isoscele o scaleno
equilatero se è uguale tutti, isoscele se sono due lati uguali e se scaleno tutti diversi*/
using namespace std;

int main(){
     float l1, l2, l3;

     cout<<"Inserisci i 3 lati per verificare il triangolo\n";
          cin>>l1>>l2>>l3;

     if((l1==l2) && (l2==l3)){
          cout<<"Triangolo equilatero\n";
     }
     if((l1==l2) && (l2!=l3)){
          cout<<"Triangolo isoscele\n";
     }
/*      if((l1!=l2) && (l2!=l3)){
          cout<<"Triagolo scaleno\n";
     } */
     else{
          cout<<"Triangolo scaleno\n";
     }
    return 0;
}