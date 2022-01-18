#include <iostream>
 /* Verificare se un numero passato dall’utente è primo */
using namespace std;

int main(){
    int n;
    int divisore = 2;
    float op;

    cout<<"Inserisci un numero"<<endl;
        cin>>n;

     for(int i = 0; divisore<n;){
          op = n % divisore;
          divisore = divisore+1;
     }
    if(divisore == n){
        cout<<"Il numero risulta essere primo: "<<n<<endl;
    }
    else{
       cout<<"Il numero risulta non essere primo: "<<n<<endl; 
    }
    return 0;
}