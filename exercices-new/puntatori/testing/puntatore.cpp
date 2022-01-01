#include <iostream>

using namespace std;

int main(){
     string nome = "Tarallo";
     string* puntatore = &nome; // l'* indica che è un puntatore, invece la & va a richiamare la variabile

     cout<<nome<<endl;
     cout<<&nome<<endl; // indirzzo dell'array
     cout<<puntatore<<endl; // indirzzo dell'array
     cout<<*puntatore<<endl;

     *puntatore = "Pilato";
     cout<<*puntatore<<endl;
     cout<<nome<<endl;
}