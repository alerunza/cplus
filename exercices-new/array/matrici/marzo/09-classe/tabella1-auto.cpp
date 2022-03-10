#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){     
     int materie = 0, alunni = 0;
     cout<<"Inserisci il NUMERO di MATERIE da inserire"<<endl;
          cin>>materie;
     cout<<"Inserisci il NUMERO di ALUNNI da inserire"<<endl;
          cin>>alunni;
     
     string tabella[alunni+1][materie+2] = {"Nome", "Cognome"}; 

     cout<<"Inserisci le MATERIE"<<endl;
     for(int i = 2; i < materie; i++){
          cin>>tabella[0][i];
     }

     cout<<"Inserisci NOME e COGNOME degli alunni"<<endl;
     for(int i = 1; i < alunni+1; i++){
          for(int j = 0; j < 2; j++){
               cin>>tabella[i][j];
          }
     }
     for(int i = 1; i < alunni+1; i++){
          for(int j = 2; j < materie+2; j++){
               cout<<"Inserisci il VOTO di "<<tabella[i][0]<<" "<<tabella[i][1]<<" della MATERIA: "<<tabella[0][j]<<endl;
                    cin>>tabella[i][j];
          }
     }
     for(int i = 0; i < alunni+1; i++){
          for(int j = 0; j < materie+2; j++){
               cout<<tabella[i][j]<<"\t";
          }
          cout<<endl;
     }
     
     float voti[materie] = {0};
     float media[materie] = {0};
     for(int j = 2, x = 0; x < materie; x++, j++){
          for(int i = 1; i < alunni+1; i++){
               voti[x] += stoi(tabella[i][j]);
          }
     }
     for(int i = 0, x = 2; i < materie; x++, i++){
          media[i] = voti[i] / materie;
          cout<<"la MEDIA della classe di "<<tabella[0][x]<<" e' "<<media[i]<<endl;
     }
}