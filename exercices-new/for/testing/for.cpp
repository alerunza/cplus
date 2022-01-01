#include <iostream>

using namespace std;

/* int main(){
     for(int i = 0; i<=10; i+=3){
          cout<<i<<endl;
     }
} */

int main(){
     for(int i = 0; i<=10; i++){
          if(i==4){
               continue; // salterà il n. 4
               //break; // finirà il ciclo fino al n. 4
          }
          cout<<i<<endl;
     }

}