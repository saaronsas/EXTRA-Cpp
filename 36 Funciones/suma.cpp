#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int numero, suma = 0;
	
	do{
		cout<<"Introduzca un numero: ";	cin>>numero;
		
		if(numero>0){
			suma += numero;
		}

	}while(((numero<20)||(numero>30))&&(numero!=0));
	
	cout<<"La suma es: "<<suma<<endl;
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
