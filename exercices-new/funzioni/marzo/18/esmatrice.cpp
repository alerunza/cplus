#include <iostream>

using namespace std ; 

int i, j;

class matrice{
    public:   
        void carica(int r, int c){          
            int matrix [r][c];
                for(i=0;i<r;i++){
                    for(j=0;j<c;j++){
                        cout<<"Inserisci dei numeri"<<endl;         
                            cin>>matrix[i][j];
                    }
                }
        }
        void stampa(int r, int c){     
            int matrix [r][c];
                    for(i=0;i<r;i++){
                        for(j=0;j<c;j++){
                            cout<<matrix[i][j]<<"\t";                 
                         }
                    cout<<endl;
                    }
        }
};   

int main (){
matrice MATRICE;
int righe, colonne; 
    cout<<"Inserisci il valore delle righe e delle colonne"<<endl;
        cin>>righe>>colonne;              
            MATRICE.carica(righe,colonne);
            MATRICE.stampa(righe,colonne);
}