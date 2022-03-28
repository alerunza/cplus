#include <iostream>

using namespace std;

void ciao(int x, int y){

     int somma;
     somma = x + y;
     cout<<somma<<endl;
}

int main(){
     int a, b;
     cin>>a>>b;
     ciao(a, b);

}