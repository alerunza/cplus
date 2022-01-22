#include <iostream>

using namespace std;

void scambiaval(int *x, int *y){ // passeranno i valori x e y, cosi scambierà e cambia i valori
    int temp; // valore temporaneo
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x = 3;
    int y = 7;
    
    cout<<x<<" "<<y<<endl;
    scambiaval(&x, &y); // grazie a ciò si andranno a scambiare i valori
    cout<<x<<" "<<y<<endl;

}