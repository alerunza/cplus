#include <iostream>
/* Dati in input il numero degli allievi e delle allieve di una classe, calcola la
percentuale di maschi e di femmine di ogni  classe e di tutta la scuola. */
using namespace std;

void percentuale(int maschi, int femmine);

int main(){
    int nmaschi, nfemmine;

    cout<<"Inserisci il NUMERO di Allievi MASCHI"<<endl;
        cin>>nmaschi;

    cout<<"Inserisci il NUMERO di Allieve FEMMINE"<<endl;
        cin>>nfemmine;
    
    percentuale(nmaschi, nfemmine);

}

void percentuale(int maschi, int femmine){
    int somma;
    somma = maschi + femmine;
    float totf, totm;
    totf = (femmine * 100) / somma;
    totm = (maschi * 100) / somma;

    cout<<"Su un totale di "<<somma<<" alunni, la PERCENTUALE di Allieve FEMMINE e' di "<<totf<<"%"<<endl;
    cout<<"Su un totale di "<<somma<<" alunni, la PERCENTUALE di Allievi MASCHI e' di "<<totm<<"%"<<endl;
}