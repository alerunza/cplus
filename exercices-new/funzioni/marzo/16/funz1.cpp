#include <iostream>

using namespace std;

int somma(int x, int y){
     int s = 0;
     s = x + y;
     return s;
}

int main(){
     int a, b;

     cout<<"Inserisci due numeri"<<endl;
          cin>>a>>b;
     cout<<"La somma dei numeri e' "<<somma(a, b)<<endl;
}