#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){     
     string tabella[5][5] = {"Nome", "Cognome", "MAT", "ITA", "ENG"}; 

     cout<<"Inserisci NOME e COGNOME degli alunni"<<endl;
     for(int i = 1; i < 5; i++){
          for(int j = 0; j < 2; j++){
               cin>>tabella[i][j];
          }
     }
     for(int i = 1; i < 5; i++){
          for(int j = 2; j < 5; j++){
               cout<<"Inserisci il VOTO di "<<tabella[i][0]<<" "<<tabella[i][1]<<endl;
                    cin>>tabella[i][j];
          }
     }
     for(int i = 0; i < 5; i++){
          for(int j = 0; j < 5; j++){
               cout<<tabella[i][j]<<"\t";
          }
          cout<<endl;
     }

/*      int somma[3];
     int ciao[3];
     for(int i = 0; i < 4; i++){
          somma[0] += stoi(tabella[i][2]);
          somma[1] += stoi(tabella[i][3]);
          somma[2] += stoi(tabella[i][4]);
          
     }
     cout<<somma[0]<<endl;
     cout<<somma[1]<<endl;
     cout<<somma[2]<<endl; */
     
     float voti = 0;
     float media = 0;
     for(int i = 1; i < 5; i++){
          voti += stoi(tabella[i][2]);
     }
     media = voti / 4;
     cout<<"la MEDIA della classe di ITALIANO e' "<<media<<endl;
}