#include <iostream>
/* Dati tre numeri in input ordinali in modo crescente utilizzando le funzioni */
using namespace std;

void ordine(int x, int y, int z){
    if(x<y){
        if(x<z){
            if(y<z){
                cout<<x<<" "<<y<<" "<<z<<endl;
            }
            else
                cout<<x<<" "<<z<<" "<<y<<endl;
        }
    }else
        if(x<z){
            cout<<y<<" "<<x<<" "<<z<<endl;
        }else
            if(y<z){
                cout<<y<<" "<<z<<" "<<x<<endl;
            }
            else
                cout<<y<<" "<<z<<" "<<x<<endl;
}

int main(){
    int a, b, c;

    cout<<"Inserisci 3 numeri"<<endl;
        cin>>a>>b>>c;
 
    ordine(a, b, c);
}