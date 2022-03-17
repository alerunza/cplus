#include <iostream> 

using namespace std;

int main() {

    int r,c,vtr,vtc;

    cout<<"inserisci quante righe e colonne vuoi"<<endl;
    cin>>r>>c;

    int Matrice[r][c];
    int Matrice2[c][r];

    cout<<" inserisci la matrice"<<endl;

    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cin>>Matrice[i][j];
        }
    }
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<Matrice[i][j]<<"\t";
        }
        cout<<endl;
    }

    for(int i=0; i<c; i++){
        for(int j=0;j<r; j++){
            Matrice2[i][j]=Matrice[i][j];
        }
    }
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            cout<<Matrice2[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;

}