#include <iostream>
/* Leggere un carattere e dire se è una vocale */
using namespace std;

int main(){
     char vocale;

     cout<<"inserisci una vocale"<<endl;
          cin>>vocale;

     switch(vocale){
          case 'A':
          cout<<"Vocale esistente"<<endl;
          break;
          case 'E':
          cout<<"Vocale esistente"<<endl;
          break;
          case 'I':
          cout<<"Vocale esistente"<<endl;
          break;
          case 'O':
          cout<<"Vocale esistente"<<endl;
          break;
          case 'U':
          cout<<"Vocale esistente"<<endl;
          break;
          default:
          cout<<"Consonante!"<<endl;
          break;
     }
    return 0;
}