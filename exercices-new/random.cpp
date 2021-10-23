#include <iostream>
#include <cstdlib>
/* random */
using namespace std;

int main(){
     float range, offset;
     cin>>range;
     cin>>offset;

     cout<<rand()%range+offset<<endl;

     return 0;
}