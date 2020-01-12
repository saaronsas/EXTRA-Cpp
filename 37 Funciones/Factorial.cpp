#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int numero, result=1;
	cout<<"Introduzca un numero:   "; cin>>numero; cout<<"\n";
	for(int i=1; i<=numero; i++){
		result = result * i;
	}
	cout<<"El factorial de "<<numero<<" es "<<result<<"\n\n";
	system("pause");
	return 0;
}
