#include <iostream>
#include <conio.h>

using namespace std;

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3], *punteroAlumno = alumno;

void pedirDatos();
void calcularPromedio(Alumno *);

int main(){
	pedirDatos();
	calcularPromedio(punteroAlumno);
	
	getch();
	return 0;
}

void pedirDatos(){
	for(int i=0; i<3; i++){
		fflush(stdin);		//Vacia memoria
		cout<<"Introduzca el nombre del alumno "<<i+1<<":  "; cin.getline((punteroAlumno+i)->nombre,30,'\n');
		cout<<"Introduzca la edad del alumno "<<i+1<<":  "; cin>>(punteroAlumno+i)->edad;
		cout<<"Introduzca su promedio:   "; cin>>(punteroAlumno+i)->promedio;
		cout<<"\n\n";
	}
	
}

void calcularPromedio(Alumno *punteroAlumno){
	float mayor=0;
	int pos=0;
	
	for(int i=0; i<3; i++){
		if((punteroAlumno+i)->promedio > mayor){
			mayor = (punteroAlumno+i)->promedio;
			pos=i;
		}
	}
	
	cout<<"\nEl alumno con mejor promedio es "<<(punteroAlumno+pos)->nombre<<endl;
	cout<<"La edad del alumno es "<<(punteroAlumno+pos)->edad<<endl;
	cout<<"Promedio: "<<(punteroAlumno+pos)->promedio<<endl;
}
