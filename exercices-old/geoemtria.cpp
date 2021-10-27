#include <iostream>
#include <cmath>

using namespace std;

int main(){
     int sceltaopret, sceltaret, sceltaopquad, sceltaoptri, sceltaform; //dichiara tutte le scelte delle forme
     double num1, num2, num3; //dichiara tutti i lati/aree etc...
     double arearett, perirett; //rettangolo
     double areaquad, periquad; //quadrato
     double areatri, peritri; //triangolo
     double cerchiorett, raggio, areacerchio; //cerchio dell'area, raggio e cerchio rettangolo
     double cerchioquad, latoquad; // cerchio quadrato e lato del quadrato

     double pigreco=3.14; //pigreco dichiarato via float

     cout<<endl;
     cout<<"Calcolatore di Geometria by alerunza"<<endl;
     cout<<endl;
     cout<<"Scegli la forma geometrica per fare le operazioni:"<<endl;
     cout<<"1 - Rettangolo"<<endl;
     cout<<"2 - Quadrato"<<endl;
     cout<<"3 - Triangolo"<<endl;
          cin>>sceltaform;

     if(sceltaform==1){
          cout<<endl;
          cout<<"Scegli l'operazione da fare al Rettangolo:"<<endl;
          cout<<endl;
          cout<<"1 - Calcola l'Area del Rettangolo"<<endl;
          cout<<"2 - Calcola il Perimetro del Rettangolo"<<endl;
               cin>>sceltaopret;
          if(sceltaopret==1){
               cout<<"Inserisci la Base del Rettangolo"<<endl;
                    cin>>num1;
               cout<<endl;
               cout<<"Inserisci l'Altezza del Rettangolo"<<endl;
                    cin>>num2;
               cout<<"Calcolo in corso l'Area del Rettangolo..."<<endl;
               arearett=num1*num2; //b*h
               cout<<"L'Area del Rettangolo calcolata: "<<arearett<<endl;
               cerchiorett=sqrt(num1*num1+num2*num2);
               cout<<"Diagonale tramite Teorema di Pitagora: "<<cerchiorett<<endl;
               raggio=cerchiorett/2;
               cout<<"Raggio del Triangolo: "<<raggio<<endl;
               areacerchio=raggio*raggio;
               cout<<"L'Area del cerchio del Triangolo: "<<areacerchio<<"PIGRECO"<<endl;
          }
          else if(sceltaopret==2){
               cout<<"Inserisci la Base del Rettangolo"<<endl;
                    cin>>num1;
               cout<<endl;
               cout<<"Inserisci l'Altezza del Rettangolo"<<endl;
                    cin>>num2;
               cout<<"Calcolo in corso il Perimetro del Rettangolo..."<<endl;
               perirett=num1+num2;
               cout<<"Il Perimetro del Rettangolo calcolato: "<<perirett<<endl;
               cerchiorett=sqrt(num1*num1+num2*num2);
               cout<<"Diagonale tramite Teorema di Pitagora: "<<cerchiorett<<endl;
               raggio=cerchiorett/2;
               cout<<"Raggio del Triangolo: "<<raggio<<endl;
               cout<<"L'Area del cerchio del Triangolo: "<<areacerchio<<"PIGRECO"<<endl;

          }
     }
     else if(sceltaform==2){
                    cout<<endl;
          cout<<"Scegli l'operazione da fare al Quadrato:"<<endl;
          cout<<endl;
          cout<<"1 - Calcola l'Area del Quadrato"<<endl;
          cout<<"2 - Calcola il Perimetro del Quadrato"<<endl;
               cin>>sceltaopquad;
          if(sceltaopquad==1){
               cout<<"Inserisci il lato del Quadrato"<<endl;
                    cin>>num1;
               cout<<endl;
               cout<<"Calcolo in corso l'Area del Quadrato..."<<endl;
               areaquad=num1*num1;
               cout<<"L'Area del Quadrato calcolata: "<<areaquad<<endl;
               cerchioquad=num1*sqrt(2);
               cout<<"La Diagonale del Quadrato calcolata: "<<cerchioquad<<endl;
               raggio=cerchioquad/2;
               cout<<"Il Raggio del Quadrato calcolato: "<<raggio<<endl;
               areacerchio=pigreco*raggio*raggio;
               cout<<"L'Area del cerchio del Quadrato: "<<areacerchio<<"PIGRECO"<<endl;
          }
          else if(sceltaopquad==2){
               cout<<"Inserisci l'Area del Quadrato"<<endl;
                    cin>>num1;
               cout<<endl;
               cout<<"Calcolo in corso il Perimetro del Quadrato..."<<endl;
               periquad=sqrt(num1)*4;
               cout<<"Il Perimetro del Quadrato calcolato: "<<periquad<<endl;
               latoquad=sqrt(num1);
               cout<<"Il lato del Quadrato è "<<latoquad<<endl;
               cerchioquad=latoquad*sqrt(2);
               cout<<"La Diagonale del Quadrato calcolata: "<<cerchioquad<<endl;
               raggio=cerchioquad/2;
               cout<<"Il Raggio del Quadrato calcolato: "<<raggio<<endl;
               areacerchio=pigreco*raggio*raggio;
               cout<<"L'Area del cerchio del Quadrato: "<<areacerchio<<"PIGRECO"<<endl;

          }
     }
     else if(sceltaform==3){
                    cout<<endl;
          cout<<"Scegli l'operazione da fare al Triangolo:"<<endl;
          cout<<endl;
          cout<<"1 - Calcola l'Area del Triangolo"<<endl;
          cout<<"2 - Calcola il Perimetro del Triangolo"<<endl;
               cin>>sceltaoptri;
          if(sceltaoptri==1){
               cout<<"Inserisci la Base del Triangolo"<<endl;
                    cin>>num1;
               cout<<endl;
               cout<<"Inserisci l'Altezza del Triangolo"<<endl;
                    cin>>num2;
               cout<<"Calcolo in corso l'Area del Triangolo..."<<endl;
               areatri=num1*num2/2;
               cout<<"L'Area del Triangolo calcolata: "<<areatri<<endl;
          }
          else if(sceltaoptri==2){
               cout<<"Inserisci il Lato N.1° del Triangolo"<<endl;
                    cin>>num1;
               cout<<endl;
               cout<<"Inserisci il Lato N.2° del Triangolo"<<endl;
                    cin>>num2;
               cout<<endl;
               cout<<"Inserisci il Lato N.3° del Triangolo"<<endl;
                    cin>>num3;
               cout<<endl;
               cout<<"Calcolo in corso il Perimetro del Triangolo..."<<endl;
               peritri=num1+num2+num3;
               cout<<"Il Perimetro del Triangolo calcolato: "<<peritri<<endl;
          }
     }

    return 0;
}