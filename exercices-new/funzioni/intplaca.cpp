#include <iostream>
/* Creare una funzione che ricevuti tre valori sottrae al maggiore metà del valore del minore.
Creare una programma che applica la funzione a tre valori inseriti dall’utente. */
using namespace std;

float valore(float a, float b, float c);

int main(){
     int a,b,c;

     cout<<"inserisci tre  valori"<<endl;
          cin>>a>>b>>c;

     valore(a,b,c);
    
     return 0;
}
float valore(float a, float b, float c){
     float massimo=0,min=0,finale=0; // 7 2 9
     
     if(a>b)
     massimo=a;
     else
     massimo=b;
     if(massimo<c)
     massimo=c;

     if(a<b)
     min=a;
     else
     min=b;
     if(min>c)
     min=c;
     min=min/2;
     finale=massimo-min;
     
     cout<<"valore finale : "<<finale<<endl;

}