#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	char cad1[10], cad2[10];
	int num1; float num2;
	
	cout<<"Introduzca su numero entero:   "; cin.getline(cad1,10,'\n');
	cout<<"Introduzca su numero real:   "; cin.getline(cad2,10,'\n');
	
	num1 = atoi(cad1);
	num2 = atof(cad2);
	
	float result = num1+num2;
	cout<<"\nEl resultado de la suma es "<<result<<endl;
	cout<<"\n\n";
	system("pause");
	return 0;
}
