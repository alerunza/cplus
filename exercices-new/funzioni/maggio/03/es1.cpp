#include <iostream>
#include <cmath>
/* 1. In un
sistema di assi cartesiani OXY considera l’origine O ed i punti A(xA,
xB) e B(xA, xB). Dopo aver letto in input le
coordinate dei punti A e B, calcola e visualizza:       

le coordinate del punto medio M del segmento OA;
      
le coordinate del punto medio N del segmento OB;
       
il perimetro del triangolo AOB;

il perimetro del triangolo MON.

Suggerimenti:

Utilizzate la libreria Math,

Utilizzate il passaggio dei parametri sia per
valore sia per indirizzo. */
using namespace std;

float pMx, pMy;
float pNx, pNy; // Variabili globali per effettuare il perimetro e la distanza tra due punti

void puntomedio(float x1, float x2, float x3, float y1, float y2, float y3){

    pMx = (x1 + x3) / 2;
    pMy = (y1 + y3) / 2;

    pNx = (x2 + x3) / 2;
    pNy = (y2 + y3) / 2;

    cout<<"Punto Medio M del Segmento OA e' "<<pMx<<" "<<pMy<<endl;
    cout<<"Punto Medio N del Segmento OB e' "<<pNx<<" "<<pNy<<endl;
}

void distraduepunti(float x1, float x2, float x3, float y1, float y2, float y3){
    float AO, AOtot, ao1, ao2;
    float OB, OBtot, ob1, ob2;
    float AB, ABtot, ab1, ab2;
    float OM, OMtot, om1, om2;
    float ON, ONtot, on1, on2;
    float MN, MONtot, mn1, mn2;

    int pAO, sAO;
    int pOB, sOB;
    int pAB, sAB;
    int pOM, sOM;
    int pON, sON;
    int pMN, sMN;
    // Segmenti AO
    pAO = x3 - x1;
    sAO = y3 - y1;

    ao1 = pow(pAO, 2);
    ao2 = pow(sAO, 2);
    AO = ao1 + ao2;
    AOtot = sqrt (AO);
    // Segmenti OB
    pOB = x3 - x2;
    sOB = y3 - y2;

    ob1 = pow(pOB, 2);
    ob2 = pow(sOB, 2);
    OB = ob1 + ob2;
    OBtot = sqrt (OB);
    // Segmenti AB
    pAB = x2 - x1;
    sAB = y2 - y1;

    ab1 = pow(pAB, 2);
    ab2 = pow(sAB, 2);
    AB = ab1 + ab2;
    ABtot = sqrt (AB);

    // Segmenti OM
    pOM = x3 - pMx;
    sOM = y3 - pMy;

    om1 = pow(pOM, 2);
    om2 = pow(sOM, 2);
    OM = om1 + om2;
    OMtot = sqrt (OM);

    // Segmenti ON
    pON = x3 - pNx;
    sON = y3 - pNx;

    on1 = pow(pON, 2);
    on2 = pow(sON, 2);
    ON = on1 + on2;
    ONtot = sqrt (ON);

    // Segmenti MN
    pMN = pNx - pMx;
    sMN = pNy - pNx;

    mn1 = pow(pMN, 2);
    mn2 = pow(sMN, 2);
    MN = mn1 + mn2;
    MONtot = sqrt (MN);
    
    cout<<"\nDistanza tra due PUNTI AO: "<<AOtot<<endl;
    cout<<"Distanza tra due PUNTI OB: "<<OBtot<<endl;
    cout<<"Distanza tra due PUNTI AB: "<<ABtot<<endl;

    cout<<"\nDistanza tra due PUNTI OM: "<<OMtot<<endl;
    cout<<"Distanza tra due PUNTI ON: "<<ONtot<<endl;
    cout<<"Distanza tra due PUNTI MN: "<<MONtot<<endl;

    int periAOB, periMON;
    
    periAOB = AOtot + OBtot + ABtot;
    periMON = OMtot + ONtot + MONtot;

    cout<<"\nil PERIMETRO del Triangolo AOB e' "<<periAOB<<endl;
    cout<<"il PERIMETRO del Triangolo MON e' "<<periMON<<endl;
}

int main(){
    float aX, aY;
    float bX, bY;
    float oX = 0, oY = 0;
    cout<<"Inserisci i punti di A (x, y)"<<endl;
        cin>>aX>>aY;
    
    cout<<"Inserisci i punti di B (x, y)"<<endl;
        cin>>bX>>bY;

    puntomedio(aX, bX, oX, aY, bY, oY);
    distraduepunti(aX, bX, oX, aY, bY, oY);
}