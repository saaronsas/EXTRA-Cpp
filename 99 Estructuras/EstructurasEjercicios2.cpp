#include <iostream>
#include <conio.h>

using namespace std;

struct Empleado{
	char nombre[20];
	float salario;	
}emp[100];

int main(){
	int n, posM, posm;
	float mayor=0, menor=99999999;
	cout<<"Introduzca el nuemro de empleados:  "; cin>>n;
	for(int i=0; i<n; i++){
		fflush(stdin);
		cout<<"Empleado "<<i+1<<"...\nNombre: "; cin.getline(emp[i].nombre,20,'\n');
		cout<<"Salario: "; cin>>emp[i].salario;
		cout<<"\n";
		
		if(emp[i].salario>mayor){
			mayor=emp[i].salario;
			posM=i;
		} else if(emp[i].salario<menor){
			menor=emp[i].salario;
			posm=i;
		}		
	}	
	cout<<"\nEmpleado con Mayor salario: "<<emp[posM].nombre<<" --> "<<emp[posM].salario<<endl;
	cout<<"\nEmpleado con menor salario: "<<emp[posm].nombre<<" --> "<<emp[posm].salario<<endl;
	
	getch();
	return 0;
}
