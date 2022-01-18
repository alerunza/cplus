#include <iostream>
/* Inserire ed inizializzare una variabile VAR a 20. 
Dopo, con un ciclo while e do-while che itera finché VAR è maggiore o uguale a zero, stampiamo VAR e dopo lo decrementiamo di 2. */
using namespace std;

int main(){

     for(int var = 20; var>=0; var-=2){
          cout<<var<<endl;
     }

    return 0;
}