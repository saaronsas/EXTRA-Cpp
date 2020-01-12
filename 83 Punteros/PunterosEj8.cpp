#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void pedirCad();
int buscarVoc(char *);

char cad[100];

int main(){
	pedirCad();
	cout<<"La cadena tiene "<<buscarVoc(cad)<<" vocales"<<endl;
	
	getch();
	return 0;
}

void pedirCad(){
	cout<<"Introduzca su cadena:   "; cin.getline(cad,100,'\n');
	strupr(cad);
}

int buscarVoc(char *nombre){
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
