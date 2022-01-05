#include <iostream>

using namespace std;

int main(){
     int numeri[6] = {10, 20, 30};
     string nomi[2] = {"Simone", "Stefano"}; // 0, 1 (posti nomi/ il primo è sempre 0)

/*      cout<<nomi[0]<<endl;
     nomi[0] = "San Michele";
     cout<<nomi[0]<<endl;
     nomi[0] = "Simone"; */

     for(int i = 0; i<3; i++){
          cout<<numeri[i]<<endl;
     }

     for(int i = 0; i<2; i++){
          cout<<nomi[i]<<endl;
     }

     numeri[3] = 120;
     numeri[4] = 12; // aggiunti 3 valori all'array (numeri [6])

     for(int i = 0; i<6; i++){
          cout<<numeri[i]<<endl;
     }

}