#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Cliente{
	char nombre[20];
	char clave[10];
	int edad;
};

struct Nodo{
	Cliente c;
	Nodo *siguiente;
};

void menu();
void cargarCliente(Cliente &);
void crearCola(Nodo *&, Nodo *&, Cliente );
bool colaVacia(Nodo *);
void borrarCola(Nodo *&, Nodo *&, Cliente &);

int main(){
	
	menu();
	
	getch();
	return 0;
}

void menu(){
	Nodo *frente=NULL, *fin=NULL;
	char dato[20];
	int opc, cont=1;
	Cliente c;
	
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Introducir nuevo cliente"<<endl;
		cout<<"2. Mostrar datos de clientes"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"  -->"; cin>>opc;
		
		switch(opc){
			case 1:
				cargarCliente(c);
				break;
			case 2:
				cout<<"\nMostrando los datos de los clientes: ";
				while(frente!=NULL){
					borrarCola(frente, fin, c);
					cout<<"Cliente nº"<<cont<<":\n";
					cout<<"\tNombre: "<<c.nombre<<endl;
					cout<<"\tClave: "<<c.clave<<endl;
					cout<<"\tEdad: "<<c.edad<<endl<<endl;
					cont++;
				}
				system("pause");
				break;
			case 3:
				cout<<"\nHasta Pronto..."<<endl; 
				break;		
		}
		system("cls");
	} while(opc!=3);
}

void cargarCliente(Cliente &c){
	fflush(stdin);
	cout<<"\nIntroduzca los datos del cliente"<<endl;
	cout<<"Nombre  \n\t->"; cin.getline(c.nombre,20,'\n');
	cout<<"Clave \n\t->"; cin.getline(c.clave,10,'\n');
	cout<<"Edad \n\t->"; cin>>c.edad;
	cout<<"\n";
}

void crearCola(Nodo *&frente, Nodo *&fin, Cliente c){
	Nodo *nuevoNodo = new Nodo();
	
	nuevoNodo->c = c;
	nuevoNodo->siguiente = NULL;
	
	if(colaVacia(frente)){
		frente = nuevoNodo;
	} else {
		fin->siguiente = nuevoNodo;
	}
	fin = nuevoNodo;
	menu();
}

void borrarCola(Nodo *&frente, Nodo *&fin, Cliente &c){
	c = frente->c;
	Nodo *aux = frente;
	
	if(frente==fin){
		frente = NULL;
		fin = NULL;
	} else {
		frente = frente->siguiente;
	}
	delete aux;
}

bool colaVacia(Nodo *frente){
	return (frente==NULL)? true:false;
}
