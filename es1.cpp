#include <iostream>
//finalmente
using namespace std;

int main(){
    float raggio;
    float circo;
    float area;

    cout<<"Inserisci il raggio del cerchio"<<endl;
        cin>>raggio;

    circo = raggio * 2 * 3.14;
    area = 3.14 * raggio * raggio;

    cout<<"Il risultato della circonferenza e': "<<circo<<endl;
    cout<<"Il risultato dell'area e': "<<area<<endl;

    return 0;
}