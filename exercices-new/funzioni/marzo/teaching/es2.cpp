#include <iostream>

using namespace std;

int valoreassoluto(int x){
     if(x<0){
          x = x * -1; // =- (moltiplica come * -1)
     }
     return x;
}

int main(){
     int n;

     cin>>n;

     cout<<valoreassoluto(n)<<endl;
}