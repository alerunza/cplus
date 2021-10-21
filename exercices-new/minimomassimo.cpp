#include <iostream>
#include <cmath>
/* Calcolare il valore minimo e massimo tra due numeri */
using namespace std;

int main(){
    float n1, n2;

    cin>>n1>>n2;

    cout<<min(n1,n2)<<endl;
    cout<<max(n1,n2)<<endl;
    return 0;
}