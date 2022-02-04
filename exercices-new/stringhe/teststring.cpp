#include <iostream>
#include <string>

using namespace std;

int main(){
/*     string a = "Ciao0";
    string b;
    
    cout<<a<<endl;
        cin>>b;
    
    a = "Ciao1";
    
    cout<<a+b<<endl; */

    string mich = "Michele";
    string sten = "Stefano";

    cout<<mich<<" "<<sten<<endl;

    mich.swap(sten);
    cout<<mich<<" "<<sten<<endl;
}