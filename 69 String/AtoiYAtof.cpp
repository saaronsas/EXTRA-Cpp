#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	char cad[] ="123.45";
	int var; float numero;
	
	var = atoi(cad);
	numero = atof(cad);
	
	cout<<1+var<<endl;
	cout<<1+numero<<endl;
	cout<<"\n\n";
	system("pause");
	return 0;
}
