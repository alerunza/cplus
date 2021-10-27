#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int operazione, rettangolo, quadrato, triangolo;
    float altezzarettangolo, baserettangolo, arearettangolo, perimetrorettangolo;
    float altezzaquadrato, basequadrato, areaquadrato, perimetroquadrato;
    float altezzatriangolo, basetriangolo, areatriangolo, perimetrotriangolo;


    cout<<"Scegli l'operazione da svolgere:"<<endl;
    cout<<"Rettangolo = 1"<<endl;
    cout<<"Quadrato = 2"<<endl;
    cout<<"Triangolo = 3"<<endl;
     cin>>operazione;

     if(operazione==1){
          cout<<"Bravo, hai scelto il rettangolo come forma"<<endl;
          cout<<"Ora dovrai scegliere l'operazione da svolgere della forma scelta"<<endl;
          cout<<"Area = 1"<<endl;
          cout<<"Perimetro = 2"<<endl;
               cin>>rettangolo;
          if(rettangolo==1){
          cout<<"Hai scelto l'area"<<endl;
          cout<<"Inserisci la base"<<endl;
               cin>>baserettangolo;
          cout<<"Insersci l'altezza"<<endl;
               cin>>altezzarettangolo;
          arearettangolo=baserettangolo*altezzarettangolo;
          cout<<"Ecco l'area del rettangolo: "<<arearettangolo<<endl;
          }
          else if(rettangolo==2){
          cout<<"Hai scelto il perimetro"<<endl;
          cout<<"Inserisci la base"<<endl;
               cin>>baserettangolo;
          cout<<"Insersci l'altezza"<<endl;
               cin>>altezzarettangolo;
          perimetrorettangolo=baserettangolo+altezzarettangolo;
          cout<<"Ecco il perimetro del rettangolo: "<<perimetrorettangolo<<endl;
          }
     }
          if(operazione==2){
          cout<<"Bravo, hai scelto il quadrato come forma"<<endl;
          cout<<"Ora dovrai scegliere l'operazione da svolgere della forma scelta"<<endl;
          cout<<"Area = 1"<<endl;
          cout<<"Perimetro = 2"<<endl;
               cin>>quadrato;
          if(quadrato==1){
          cout<<"Hai scelto l'area"<<endl;
          cout<<"Inserisci il lato del quadrato"<<endl;
               cin>>basequadrato;
          areaquadrato=basequadrato*basequadrato;
          cout<<"Ecco l'area del quadrato: "<<areaquadrato<<endl;
          }
          else if(quadrato==2){
          cout<<"Hai scelto il perimetro"<<endl;
          cout<<"Inserisci il lato"<<endl;
               cin>>basequadrato;
          perimetroquadrato=basequadrato*4;
          cout<<"Ecco il perimetro del quadrato: "<<perimetroquadrato<<endl;
          }
     }
          if(operazione==3){
          cout<<"Bravo, hai scelto il triangolo come forma"<<endl;
          cout<<"E' disponibile, solamente l'area per questa forma"<<endl;
          cout<<"Inserisci la base"<<endl;
               cin>>basetriangolo;
          cout<<"Insersci l'altezza"<<endl;
               cin>>altezzatriangolo;
          areatriangolo=basetriangolo*altezzatriangolo/2;
          cout<<"Ecco l'area del triangolo: "<<areatriangolo<<endl;
     }

    return 0;
}