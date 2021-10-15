#include <iostream>
/* Leggere un carattere e dire se è una vocale */
using namespace std;

void funzionetest(){
     char vocale;

     cout<<"inserisci una vocale"<<endl;
          cin>>vocale;

         switch(vocale){
          case 'a':
          case 'A':
          cout<<"Vocale esistente"<<endl;
          break;
          case 'e':
          case 'E':
          cout<<"Vocale esistente"<<endl;
          break;
          case 'i':
          case 'I':
          cout<<"Vocale esistente"<<endl;
          break;
          case 'o':
          case 'O':
          cout<<"Vocale esistente"<<endl;
          break;
          case 'u':
          case 'U':
          cout<<"Vocale esistente"<<endl;
          break;
          default:
          cout<<"Consonante!"<<endl;
          break; 
          }
     }

int main(){
     int opzione;

     funzionetest();

     cout<<"Vuoi continuare per vedere se e' una vocale o meno?\n1 - si\n2 - no"<<endl;
          cin>>opzione;
     if(opzione==1){
          funzionetest();
     }
     else{
          cout<<"Buona giornata"<<endl;
     }
   return 0;
}