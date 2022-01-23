#include <iostream>

using namespace std;

int main(){
    int array[3];

    for(int i = 0; i<3; i++){ // ciclo memorizzare
        array[i] = i;
    }
    for(int i = 0; i<3; i++){ // ciclo per stampare
        cout<<array[i]<<endl;
    }
}