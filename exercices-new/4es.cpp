#include <iostream>
/* Il programma legge tre numeri e dice se possono essere le lunghezze dei lati di un triangolo 
(perché un triangolo possa essere tale la somma do ogni coppia lati deve essere maggiore dell’altro) */
using namespace std;

int main(){
     float l1, l2, l3;

     cout<<"Inserisci 3 lati"<<endl;
          cin>>l1>>l2>>l3;
     
     if(l1>l2)&(l2>l3)&&(l2>l1){
          cout<<"Triangolo"<<endl;
     }
     else{
          cout<<"Non è un triangolo"<<endl;
     }


    return 0;
}