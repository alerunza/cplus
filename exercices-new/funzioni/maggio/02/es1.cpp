#include <iostream>

using namespace std;

void swap(int &x, int &y);

int main(){
     int a, b, c;
     cout<<"Inserisci tre numeri"<<endl;
          cin>>a>>b>>c;
     
     if(a>b){
          swap(a, b);    // es: 3>2 then 2 3
     }
     if(a>c){
          swap(a, c);
     }
     if(b>c){
          swap(b, c);
     }

     cout<<a<<" "<<b<<" "<<c<<endl;

}

void swap(int &x, int &y){
     int temp;

     // 3 2 1
     // x y z
     // 1 2 3
     // z y x

     temp = x; 
     x = y;
     y = temp;
}