#include <iostream>
#include <cmath>
/* Un automobilista parte da casa per recarsi ad un centro commerciale dove lascia
l’auto nel parcheggio a pagamento per un certo periodo di tempo e poi torna a
casa. Scrivi un programma in C++ che, facendo uso delle funzioni, visualizzi:

a. il tempo per percorrere il tragitto dell’andata;
b. il tempo per percorrere il tragitto del ritorno;
c. il costo del parcheggio sapendo che: la prima ora di sosta costa
1,50 €, le ore successive 1,20 € e l’intera giornata (più di otto ore)
costa 9 €. */
using namespace std;

void oreinminuti(float h1, float m1, float h2, float m2){
     float ora, minuti1, minuti2, minuti;

     ora = h1 - h2;
     minuti = m1 - m2;
     minuti1 = ora * 60;
     minuti2 = minuti1 + minuti;

     cout<<"Il tempo trascorso in MINUTI e': "<<abs(minuti2)<<" minuti"<<endl; // per evitare che stampi il (-) prima del numero
}

void minutiinore(float h1, float m1, float h2, float m2){
     float ora; 
     float minuti;

     ora = h1 - h2;
     minuti = m1 - m2;
     cout<<"Il tempo trascorso in ORE e MINUTI e': "<<abs(ora)<<" ore e "<<abs(minuti)<<" minuti"<<endl;
}

void costoparcheggio(int ore){
     float soldi = 0;
     if(ore>=1 && ore<=7){
          soldi += 1.50;
          soldi += 1.20 * ore-1;
     }
     if(ore>=8){
          soldi += 9;
     }
     if(ore>=9){
          soldi += 1.20 * ore-1;
     }
     

     cout<<"Hai SPESO "<<soldi<<" $"<<endl;
}

int main(){
     float casah, casam;
     float parcheggioh, parcheggiom;
     float parcheggiocasah, parcheggiocasam;
     float casaparcheggioh, casaparcheggiom;

     cout<<"Inserisci l'ORARIO di quando sei partito da CASA (Ora & Minuti)"<<endl;
          cin>>casah>>casam;
     
     cout<<"Inserisci l'ORARIO di quando sei arrivato al PARCHEGGIO da CASA (Ora & Minuti)"<<endl;
          cin>>parcheggioh>>parcheggiom;

     cout<<"Inserisci l'ORARIO di quando sei partito dal PARCHEGGIO verso CASA (Ora & Minuti)"<<endl;
          cin>>parcheggiocasah>>parcheggiocasam;
     
     cout<<"Inserisci l'ORARIO di quando sei arrivato a CASA dal PARCHEGGIO (Ora & Minuti)"<<endl;
          cin>>casaparcheggioh>>casaparcheggiom;

     cout<<"\nTempo TRASCORSO tra quando sei PARTITO da CASA al PARCHEGGIO ("<<casah<<":"<<casam<<") a ("<<parcheggioh<<":"<<parcheggiom<<")"<<endl;
     oreinminuti(casah, casam, parcheggioh, parcheggiom);
     minutiinore(casah, casam, parcheggioh, parcheggiom);
     cout<<"\nTempo TRASCORSO tra quando sei PARTITO dal PARCHEGGIO a CASA ("<<parcheggiocasah<<":"<<parcheggiocasam<<") a ("<<casaparcheggioh<<":"<<casaparcheggiom<<")"<<endl;
     oreinminuti(parcheggiocasah, parcheggiocasam, casaparcheggioh, casaparcheggiom);
     minutiinore(parcheggiocasah, parcheggiocasam, casaparcheggioh, casaparcheggiom);
     
     float oretot = parcheggioh - parcheggiocasah;
     int barbagianni;
     barbagianni = abs(oretot);
     cout<<"\nSei STATO nel PARCHEGGIO per "<<abs(oretot)<<" ora/e"<<endl;
     costoparcheggio(barbagianni);

}