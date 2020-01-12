#include <iostream>

using namespace std;

int main(){
	int saldo_in = 1000, opc;
	float extra, saldo = 0, retiro;
	
	cout<<"\tBienvernido a su Cajero Virtual"<<endl;
	cout<<"1.	Ingresar dinero de la cuenta"<<endl;
	cout<<"2.	Retirar dinero de la cuenta"<<endl;
	cout<<"3.	Salir"<<endl;
	cout<<"Opcion: "<<endl;	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Introduzca la cantidad de dinero a ingresar: ";	cin>>extra;
			saldo = saldo_in + extra;
			cout<<"Dinero en cuenta"<<saldo; break;
			
		case 2:
			cout<<"Introduzca la cantidad de dinero que va ha retirar: ";	cin>>retiro;
			
			if(retiro > saldo_in){cout<<"NO TIENE ESA CANTIDAD DE DINERO";
			}
			else{
				saldo = saldo_in - retiro;
				cout<<"Dinero en cuenta: "<<saldo; break;
			}
			
		case 3:
			break;
	}
	
	
	
	
	return 0;
}
