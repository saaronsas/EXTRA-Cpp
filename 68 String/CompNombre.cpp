#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[30];
	
	cout<<"Introduzca su nombre:   "; cin.getline(nombre,30,'\n');
	
	if(nombre[0]=='a'){
		strupr(nombre);
	}
	cout<<nombre<<endl;
	cout<<"\n\n";
	system("pause");
	return 0;
}
