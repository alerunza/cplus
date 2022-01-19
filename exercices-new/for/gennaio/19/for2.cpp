#include <iostream>
#include <ctime>
#include <cstdlib>
/*Scrivere un programma che lancia 100 monete e dice quante volte è 
uscita testa e quante volte è uscita croce..*/
using namespace std;

int main(){

    int croce = 0;
    int testa = 0;

    srand(time(NULL)); // seed per inizializzare il generatore di numeri.

    for(int i = 0; i<=100; i++){
        int monete = rand()%2;
        if(monete==1){
            cout<<"Croce\n";
            croce++;
        }
        else{
            cout<<"Testa\n";
            testa++;
        }
    }
    cout<<"Croce: "<<croce<<"\nTesta: "<<testa<<endl;

}