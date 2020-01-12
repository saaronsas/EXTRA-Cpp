#include <iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Introduzca un numero: ";	cin>>numero;
	
	if(numero == 0){
		cout<<"El numero es 0";
	}
	else if(numero < 0){
		cout<<"El numero es negativo";
	}
	else{
		cout<<"El numero es positivo";
	}
	
	
	
	return 0;
}
