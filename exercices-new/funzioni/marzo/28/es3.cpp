#include <iostream>
/* Definisci una funzione che calcola il massimo fra due numeri interi. */
using namespace std;

int massimo(int x, int y){
     int max;
     if(x>y){
          max = x;
     }
     if(x<y){
          max = y;
     }

     return max;
}

int main(){
     int n1, n2;

     cout<<"Inserisci due NUMERI"<<endl;
          cin>>n1>>n2;
     
     cout<<"Il MASSIMO tra i due NUMERI e' "<<massimo(n1, n2)<<endl;

}