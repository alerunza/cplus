#include <iostream>

using namespace std;

int somma(int n1, int n2){
    int s;

    s = n1 + n2;

    cout<<s<<endl;
}

int main(){
    int pippo, pippi;

    cin>>pippo>>pippi;

    somma(10, 3);
    somma(pippo, pippi);
}