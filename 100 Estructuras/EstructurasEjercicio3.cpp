#include <iostream>
#include <conio.h>

using namespace std;

struct atleta{
	char nombre[20];
	int edad;
	int Nmedallas;
}atleta[100];

int main(){
	int n, mayor=0, posM;
	cout<<"Introduzca el numero de atletas:  "; cin>>n;
	
	for(int i=0; i<n; i++){
		fflush(stdin);
		cout<<"Atleta "<<i+1<<"\nNombre:  "; cin.getline(atleta[i].nombre,20,'\n');
		cout<<"Edad:  "; cin>>atleta[i].edad;
		cout<<"Numero de Medallas:  "; cin>>atleta[i].Nmedallas;
		cout<<"\n";
		
		if(atleta[i].Nmedallas>mayor){
			mayor=atleta[i].Nmedallas;
			posM=i;
		}
	}
	cout<<"El atleta con mas medallas es "<<atleta[posM].nombre;
	cout<<" con "<<atleta[posM].Nmedallas<<" medallas";
	
	getch();
	return 0;
}
