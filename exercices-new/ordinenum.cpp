#include <iostream>
/* inserire tre numeri reali ed ordinarli in modo crescente */
using namespace std;

int main(){
     int n1, n2, n3;

     cout<<"Inserisci tre numeri per ordinarli\n";
          cin>>n1>>n2>>n3;
     if((n1>n2) && (n2>n3)){
          cout<<n3<<" "<<n2<<" "<<n1<<" ";
     }
     if((n3>n2) && (n1<n2)){
          cout<<n1<<" "<<n2<<" "<<n3<<" ";
     }
     if((n2<n3) && (n1>n3)){
          cout<<n2<<" "<<n3<<" "<<n1<<" ";
     }
     if((n1>n2) && (n2<n3)){
          cout<<n2<<" "<<n1<<" "<<n3<<" ";
     }
     if ((n2>n3) && (n3>n1)){
          cout<<n2<<" "<<n3<<" "<<n1<<" ";
     }
     if((n1<n2) && (n3<n2)){
          cout<<n3<<" "<<n1<<" "<<n2<<" ";
     }
    return 0;
}