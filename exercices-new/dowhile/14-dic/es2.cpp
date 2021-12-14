#include <iostream>
/* Scrivere un programma che stampi a 
video tutti i numeri dispari compresi tra due estremi e  letti da tastiera. Il programma deve dire anche quanti sono. */
using namespace std;

int main(){
     int a, b, i=a;

     cin>>a>>b;

     while(i<=b){
          if(a%2!=0){
               i++;
          }
          i+=2;
     }


     cout<<i<<endl;
    return 0;
}