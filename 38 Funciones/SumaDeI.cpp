#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int numero, result;
	cout<<"Introduzca su numero:   "; cin>>numero; cout<<"\n";
	for(int i=1; i<=numero; i++){
		result = result +2*i;
	}
	cout<<"El resultado es "<<result<<"\n\n";
	system("pause");
	return 0;
}
