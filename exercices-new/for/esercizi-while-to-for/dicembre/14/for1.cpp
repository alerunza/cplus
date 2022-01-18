#include <iostream>

using namespace std;

int main() {
    float n, n2, somma;

     cout<<"inserisci 2 numeri"<<endl;
          cin>>n>>n2;
     cout<<"\n"<<endl;

     for(;n<=n2; n++){
        somma=somma+n;
        cout<<n<<endl;
    }

    cout<<"\n"<<somma<<" - Numero Sommato"<<endl;

    return 0;
}