#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void funzione_CIAO(int array[], int numero_celle, int prime_celle);

int main(){
    srand(time(NULL));
    int prime_celle;
    int numero_celle;

    cout<<"Inserisci il numero di celle"<<endl;
        cin>>numero_celle;

    int array[numero_celle];
    
    cout<<"Inserisci la quantita' delle prime celle"<<endl;
        cin>>prime_celle;

    cout<<"Inserisci i numeri"<<endl;

    for(int i=0; i < numero_celle; i++){
        cin>>array[i];
    }
    funzione_CIAO(array, numero_celle, prime_celle);
}

void funzione_CIAO(int array[], int numero_celle, int prime_celle){
    for(int i=0; i<prime_celle; i++){
     array[i]=rand()%11;
    }

    for(int i=0; i<numero_celle; i++){
        cout<<array[i]<<"\t";
    }
}