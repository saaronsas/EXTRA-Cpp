#include <iostream>
#include <conio.h>

using namespace std;

struct Persona{
	char nombre[20];
	int edad;
} persona1={"Oscar",18},persona2;

int main(){
	cout<<"Introduzca Datos persona 2:  \nNombre 2: "; cin.getline(persona2.nombre,20,'\n');
	cout<<"Edad 2: "; cin>>persona2.edad;
	
	cout<<"\nNombre 1:  "<<persona1.nombre<<endl;	
	cout<<"Edad 1:  "<<persona1.edad<<endl;
	
	cout<<"\nNombre 2:  "<<persona2.nombre<<endl;
	cout<<"Edad 2:  "<<persona2.edad<<endl;
	
	getch();
	return 0;
}
