#include <iostream>
/* Data da tastiera la quantità di numeri da trattare calcolare: il numero maggiore, il numero minore e la media. */
using namespace std;

int main(){
     int sceltan;
     float n, somma, media;
     float min, max, minp, maxp; // p = precedenti
     int contan = 0;
     
     cout<<"Inserisci quanti numeri vuoi trattare"<<endl;   
          cin>>sceltan;
     min=sceltan;
     do{
          cout<<"Inserisci i numeri"<<endl;
               cin>>n;
          minp=n;
          maxp=n;
          if(min>=minp){
               min=minp;
          }
          if(max<=maxp){
               max=maxp;
          }
          contan++;
          somma+=n;
          media = somma / contan;
     }
     while(sceltan!=contan);

     cout<<"Il numero minore e' :"<<min<<endl;
     cout<<"Il numero maggiore e' "<<max<<endl;
     cout<<"La media e': "<<media<<endl;

    return 0;
}