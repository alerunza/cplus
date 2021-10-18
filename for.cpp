#include <iostream>
/* test per il ciclo for */
using namespace std;

int main(){
     int i;

     //for(1; 2; 3) // prima istruzione, la prima volta, la seconda istruzione sempre, e la terza esclusa dopo il ciclo
     for(i = 0; i < 5; i++){
          cout<<i<<"\n";
     }
     cout<<i<<"\n";
     
    return 0;
}

/* int main(){
     int i = 10;
     int i2;
     
     cin>>i2;

     for(i = 1; i<=i2; i+=2) //+=2 stamperà solo quelli dispari

     cout<<i<<endl;
     cout<<i<<endl;

     return 0;
} */

/* int main(){
     int i = 10;
     int i2;
     
     cin>>i2;

     for(; i<=i2;){
          cout<<i<<endl;
          i = i + 2;
     }
     cout<<i<<endl;

     return 0;
} */