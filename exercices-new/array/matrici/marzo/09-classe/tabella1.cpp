#include <iostream>

using namespace std;

int main(){     
     string tabella[5][5] = {"Nome", "Cognome", "Matematica", "Italiano", "Inglese", "Informatica"}; 

     cout<<"Inserisci NOME e COGNOME degli alunni"<<endl;
     for(int i = 1; i < 5; i++){
          for(int j = 0; j < 2; j++){
               cin>>tabella[i][j];
          }
     }
     for(int i = 1; i < 5; i++){
          for(int j = 2; j < 5; j++){
               cout<<"Inserisci il voto di "<<tabella[i][j-2]<<" "<<tabella[i][j-1]<<endl;
                    cin>>tabella[i][j];
          }
     }
     for(int i = 0; i < 5; i++){
          for(int j = 0; j < 5; j++){
               cout<<tabella[i][j]<<"\t";
          }
          cout<<endl;
     }

}