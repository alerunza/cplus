#include <iostream>
/* Data da tastiera la quantità di numeri da trattare calcolare: il numero maggiore, il numero minore e la media. */
using namespace std;

int main(){
     int sceltan;
     float n, somma, media;
     float min = 1, max, copy; // copy = assume il valore dei numeri inseriti per l'if
     int contan = 0;
     
     cout<<"Inserisci quanti numeri vuoi trattare"<<endl;   
          cin>>sceltan;
     do{
          cout<<"Inserisci i numeri"<<endl;
               cin>>n;
          copy=n;
          if(min>=copy){
               min=copy;
          }
          if(max<=copy){
               max=copy;
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