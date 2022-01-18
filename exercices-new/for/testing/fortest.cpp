#include <iostream>

using namespace std;

int main(){
    int n;

    cout<<"Inserisci i numeri"<<endl;
    
    for (int i=0;i<=10;i++){

    cin>>n;

        if(n%2==0){
            cout<<n<<" Pari"<<endl;
        }
        else{
            cout<<n<<" Dispari"<<endl;
        } 

    }   
}