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
     
     string tabella[alunni+1][materie+2];
     
     tabella[0][0] = "Nome";
     tabella[0][1] = "Cognome";

     cout<<"Inserisci le MATERIE"<<endl;
     for(int i = 2; i < materie+2; i++){
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
     
     float voti[materie];
     float media[materie];
     for(int j = 1, x = 0; x < materie; x++, j++){
          for(int i = 2; i < alunni+1; i++){
               voti[x] += stoi(tabella[j][i]);
          }
     }
     for(int i = 0, x = 1; i < materie; x++, i++){
          media[i] = voti[i] / materie;
          cout<<"la MEDIA di "<<tabella[x][0]<<" "<<tabella[x][1]<<" e' "<<media[i]<<endl;
     }
}