#include<iostream>

using namespace std;

int main(){
	int edad;
	char sexo[10], nombre[10];
	double altura;
	
	cout<<"Introduzca su nombre: "<<endl;
	cin>>nombre;
	cout<<"Introduzca su edad: "<<endl;
	cin>>edad;
	cout<<"Introcuzca su sexo: "<<endl;
	cin>>sexo;
	cout<<"Introduzca su altura: "<<endl;
	cin>>altura;
	
	cout<<"Nombre: "<<nombre;
	cout<<"\nEdad: "<< edad;
	cout<<"\nSexo: "<<sexo;
	cout<<"\nAltura: "<<altura;
	
	
	return 0;
}
