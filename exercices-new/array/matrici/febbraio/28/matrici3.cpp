#include <iostream>
/* Scrivere un programma che stampi una tavola pitagorica dei numeri da 1 a 9 */
using namespace std;

int main(){
    int pitagorica[9][9];
    int i, j;
    
    for(i=0; i<9; i++) { 
        for(j=0; j<9; j++) {
	        pitagorica[i][j]=(i+1)*(j+1);
        }
    }

    for(i=0; i<9; i++) {
        for(j=0; j<9; j++) {
            cout<<pitagorica[i][j]<<"\t";
        }
        cout<<endl;	
    }
}