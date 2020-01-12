#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int i, conteo=0;
	
	do{
		cout<<"Introduzca un numero: ";	cin>>i;
		
		if(i>0){
			conteo++;
		}
		
	}while(i!=0);
	
	cout<<"El conteo es de: "<<conteo;
	
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
