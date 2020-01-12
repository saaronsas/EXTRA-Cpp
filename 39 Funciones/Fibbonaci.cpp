#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int numero, x=1, y=1, z=1;
	cout<<"Introduzca el numero de repeticiones de la suma Fibbonaci:   "; cin>>numero; cout<<"\n";
	for(int i; i<=numero; i++){
		z = x+y;
		cout<<z<<" ";
		x=y; y=z;
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
