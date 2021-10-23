#include <iostream>

using namespace std;

int main(){
     int slot1, slot2, segno;
/*      int y1, y2, y3, y4, y5, y6, y7, y8, y9; */

     cout<<"Scegli il segno: O o X"<<endl;
          cin>>segno;
     if(segno==1){
          cout<<"Hai scelto il segno: O; l'altro giocatore sarà la X"<<endl;
// 1turno giocatore con O
          cout<<"In quale slot decidi di metterlo? 1-9"<<endl;
                cin>>slot1;
          if(slot1==1){
               cout<<"Hai scelto il primo slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<"O| | \n";
               cout<<"-----\n";
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<" | | \n";
          }
          if(slot1==2){
               cout<<"Hai scelto il secondo slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<" |O| \n";
               cout<<"-----\n";
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<" | | \n";
          }
          if(slot1==3){
               cout<<"Hai scelto il terzo slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<" | |O\n";
               cout<<"-----\n";
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<" | | \n";
          }
          if(slot1==4){
               cout<<"Hai scelto il quarto slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<"O| | \n";
               cout<<"-----\n";
               cout<<" | | \n";
          }
          if(slot1==5){
               cout<<"Hai scelto il quinto slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<" |O| \n";
               cout<<"-----\n";
               cout<<" | | \n";
          }
          if(slot1==6){
               cout<<"Hai scelto il sesto slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<" | |O\n";
               cout<<"-----\n";
               cout<<" | | \n";
          }
          if(slot1==7){
               cout<<"Hai scelto il settimo slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<"O| | \n";
          }
          if(slot1==8){
               cout<<"Hai scelto l'ottavo slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<" |O| \n";
          }
          if(slot1==9){
               cout<<"Hai scelto il nono slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<" | |O\n";
          }
          if(slot1>9){
               cout<<"Hai scelto uno slot inesistente"<<endl;
               cout<<"Rinizia da capo :/"<<endl;
               return 0;
          }

// 1turno giocatore con X

          cout<<"Il giocatore che ha la X, in che slot vorrebbe metterlo? 1-9"<<endl;
               cin>>slot2;
     if(slot1==1){
          cout<<"Slot 1 occupato, scegline uno da 2 a 9"<<endl;

          if(slot2==1){
               cout<<"Hai scelto il primo slot"<<endl;
               cout<<"slot occupato, rinizia da capo"<<endl;
               return 0;
          }
          if(slot2==2){
               cout<<"Hai scelto il secondo slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<"O|X| \n";
               cout<<"-----\n";
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<" | | \n";
          }
          if(slot2==3){
               cout<<"Hai scelto il terzo slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<"O| |X\n";
               cout<<"-----\n";
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<" | | \n";
          }
          if(slot2==4){
               cout<<"Hai scelto il quarto slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<"O| | \n";
               cout<<"-----\n";
               cout<<"X| | \n";
               cout<<"-----\n";
               cout<<" | | \n";
          }
          if(slot2==5){
               cout<<"Hai scelto il quinto slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<"O| | \n";
               cout<<"-----\n";
               cout<<" |X| \n";
               cout<<"-----\n";
               cout<<" | | \n";
          }
          if(slot2==6){
               cout<<"Hai scelto il sesto slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<"O| | \n";
               cout<<"-----\n";
               cout<<" | |X\n";
               cout<<"-----\n";
               cout<<" | | \n";
          }
          if(slot2==7){
               cout<<"Hai scelto il settimo slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<"O| | \n";
               cout<<"-----\n";
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<"X| | \n";
          }
          if(slot2==8){
               cout<<"Hai scelto l'ottavo slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<"O| | \n";
               cout<<"-----\n";
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<" |X| \n";
          }
          if(slot2==9){
               cout<<"Hai scelto il nono slot"<<endl;
               cout<<"La situazione in questo momento e'"<<endl;
               cout<<"O| | \n";
               cout<<"-----\n";
               cout<<" | | \n";
               cout<<"-----\n";
               cout<<" | |X\n";
          }
     }
          if(slot2>9){
               cout<<"Hai scelto uno slot inesistente"<<endl;
               cout<<"Rinizia da capo :/"<<endl;
               return 0;
          }

     }
    return 0;
}