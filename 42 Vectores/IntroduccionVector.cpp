#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int vector[100],num;
	cout<<"Introduzca la cantidad de numeros del vector:   "; cin>>num; cout<<"\n\n";
	for(int i=0; i<num; i++){
		cout<<"Introduzca un numero:   "; cin>>vector[i]; cout<<"\n";	
	}
	for(int i=0; i<num; i++){
		cout<<i<<"-->"<<vector[i]<<"  ";
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
