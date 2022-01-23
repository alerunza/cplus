#include <iostream>

using namespace std;

int main(){
    int array[5];
    int somma = 0;

    for(int i = 0; i<5; i++){
        array[i] = i;
    }

    for(int i = 0; i<5; i++){
        somma+=array[i];
        cout<<array[i]<<endl;
    }
    cout<<somma<<endl;
}