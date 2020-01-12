#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void pedirDatos();
int contarVoc(char *);

char nombreUsuario[30];

int main(){
	pedirDatos();
	cout<<"\nEl numero de vocales del nombre es:  "<<contarVoc(nombreUsuario)<<endl;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Introduzca su nombre de ususario:   "; cin.getline(nombreUsuario,30,'\n');
	
	strupr(nombreUsuario);
	
}

int contarVoc(char *nombre){
	int cont=0;
	
	while(*nombre){
		switch(*nombre){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': cont++;
		}
		nombre++;
	}
	return cont;
}
