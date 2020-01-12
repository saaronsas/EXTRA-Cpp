#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int numero, num;
	
	cout<<"Introduzca un numero: ";	cin>>numero;
	
	cout<<"\tBienvenido a el tablon numerico"<<endl;
	cout<<"1.	Cubo de un numero"<<endl;
	cout<<"2.	Numero par o impar"<<endl;
	cout<<"3.	Salir"<<endl;
	
	switch(numero){
		case 1:
			num = pow(numero,3);
			cout<<"El cubo de "<<numero<<" es "<<num; break;
			
		case 2:
			if(numero%2==0){
				cout<<"El numero "<<numero<<" es un numero Par";
			}else if(numero%1==0){
				cout<<"El numero "<<numero<<" es un numero impar";
			}
			else{
				cout<<"El numero "<<numero<<" es igual a 0";
			} break;
		case 3:
			break;
	}
	
	
	
	return 0;
}
