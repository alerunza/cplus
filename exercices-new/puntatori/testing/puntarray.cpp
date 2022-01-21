#include <iostream>

using namespace std;

int main(){

    int n[4] = {2,6,4,5};

    cout<<&n[0]<<endl;
    cout<<n[1]<<endl;

    int *punt;

    punt = n;
    cout<<*punt<<endl; //0)
    punt++; // passa al prossimo "cassetto" (1)
    cout<<*punt<<endl;
    punt++; // passa al prossimo "cassetto" (2)
    cout<<*punt<<endl;

}