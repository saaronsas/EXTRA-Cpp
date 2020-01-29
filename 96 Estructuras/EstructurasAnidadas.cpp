#include <iostream>
#include <conio.h>

using namespace std;

struct info_direccion{
	char direccion[20];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[20];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];

int main(){
	for(int i=0; i<2; i++){
		fflush(stdin);	//Vaciar el buffer
		cout<<"Introduzca su nombre:  "; cin.getline(empleados[i].nombre,20,'\n');
		cout<<"Introduzca su direccion:  "; cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
		cout<<"Introduzca la ciudad:  "; cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
		cout<<"Introduzca su provincia:  "; cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
		cout<<"Introduzca el salario:  "; cin>>empleados[i].salario;
		cout<<"\n\n";
	}
	
	for(int i=0; i<2; i++){
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
		cout<<"Direccion: "<<empleados[i].salario<<endl;
		cout<<"\n";
	}
	
	
	
	getch();
	return 0;
}
