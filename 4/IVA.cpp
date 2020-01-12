#include<iostream>

using namespace std;

int main(){
	
	double num, iva = 0, precio = 0;
	
	cout<<"*************************";
	cout<<"\n** Introduce el precio **";
	cout<<"\n*************************";
	cout<<"\nPrecio: ________________";
	cin>>num;
	
	iva = num * 0.21; 
	precio = num + iva;
	
	cout<<"\nEl coste con IVA es de : "<<precio;
	
	
	return 0;
} 
