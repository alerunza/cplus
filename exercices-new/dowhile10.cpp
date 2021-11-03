#include <iostream>
/* Scrivi un programma che visualizzi in successione i primi 10 numeri interi */
using namespace std;

// int main(){
//     int n = 0;

//     while(n<=10){
//         n = n + 1;
//         cout<<n<<endl;
//     }
//     return 0;
// }

int main(){
    int n = 0;

    do{
        n = n + 1;
        cout<<n<<endl;
    }
    while(n<=10);
    return 0;
}