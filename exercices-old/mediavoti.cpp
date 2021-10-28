#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float voto, somma, numero, i;
	float media;
	cout<<"Quanti voti hai? "<<endl;
		cin>>numero;
	somma=0;
	if(numero==0){
	cout<<"Non hai nessun voto"<<endl;
	}
	else{
		for(i=0; i<numero; i++){	
			cout<<"immeti un voto"<<endl;
				cin>>voto;
			cout<<endl;
			somma=somma+voto;
	 	}
		media=somma/numero;
		cout<<"La media dei tuoi voti e' "<<setprecision(3)<<media<<endl;
	}
	return(0);
}