#include <iostream>
/* Far inserire una serie numerica di interi fermandosi quando viene inserito due volte consecutive lo stesso numero */
using namespace std;

int main(){
    int n1,n2;

    cout<<"inserisci un numero "endl;
        cin>>n1;

    do{
        n2=n1;
        cout<<"inserisci un numero"<<endl;
            cin>>n1;
    }
    while(n2!=n1);

    cout<<"hai inserito due volte consecutive il numero "<<n2endl;
}