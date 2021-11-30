#include <iostream>
#include <cmath>
/* Calcolare il valore minimo e massimo tra due numeri */
using namespace std;

int main(){
    float n1, n2;

    cin>>n1>>n2;

    cout<<fmin(n1,n2)<<endl;
    cout<<fmax(n1,n2)<<endl;
    return 0;
}