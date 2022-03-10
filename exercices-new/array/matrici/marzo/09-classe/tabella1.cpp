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
     
     float voti[3] = {0};
     float media[3] = {0};
     for(int i = 1; i < 5; i++){
          voti[0] += stoi(tabella[i][2]);
          voti[1] += stoi(tabella[i][3]);
          voti[2] += stoi(tabella[i][4]);
     }
     media[0] = voti[0] / 4;
     media[1] = voti[1] / 4;
     media[2] = voti[2] / 4;
     cout<<"la MEDIA della classe di ITALIANO e' "<<media[0]<<endl;
     cout<<"la MEDIA della classe di MATEMATICA e' "<<media[1]<<endl;
     cout<<"la MEDIA della classe di INGLESE e' "<<media[2]<<endl;
}