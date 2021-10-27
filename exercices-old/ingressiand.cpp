#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int ingresso1, ingresso2;
    int uscita;

     cout<<"I valori degli ingressi dovranno essere 0 o 1"<<endl;
     cout<<"Inserisci il primo ingresso"<<endl;
     cin>>ingresso1;
     cout<<"Inserisci il secondo ingresso"<<endl;
     cin>>ingresso2;

     if((ingresso1==0 || ingresso1==1) && (ingresso2==0 || ingresso2==1)){
          if(ingresso1==0 && ingresso2==0) uscita=0;
          if(ingresso1==0 && ingresso2==1) uscita=0;
          if(ingresso1==1 && ingresso2==0) uscita=0;
          if(ingresso1==1 && ingresso2==1) uscita=1;
          cout<<"L'uscita degli ingressi è: "<<uscita<<endl;
     }
     else{
          cout<<"Il programma non è possibile svolgerlo, ricontrolla le istruzioni"<<endl;
     }
    return 0;
}