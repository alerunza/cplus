#include <iostream>

using namespace std;

int main(){
    int a[3];

    for(int i = 0; i<3; i++){ // ciclo memorizzare
        a[i] = i;
    }
    for(int i = 0; i<3; i++){ // ciclo per stampare
        cout<<a[i]<<endl;
    }
}