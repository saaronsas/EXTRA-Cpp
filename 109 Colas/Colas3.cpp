#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void menu();
void crearCola(Nodo *&, Nodo *&, char);
bool vaciarCola(Nodo *);
void eliminarCola(Nodo *&, Nodo *&, char &);

int main(){
	
	menu();
	
	getch();
	return 0;

}

void menu(){
	Nodo *frente=NULL, *fin=NULL;
	int opc;
	char dato;
	
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Insertar un dato a cola"<<endl;
		cout<<"2. Mostrar todos los datos de cola"<<endl;
		cout<<"3. Salir"<<endl<<  "-->";
		cin>>opc;
		
		switch(opc){
			case 1: 
				cout<<"Introduzca su dato:  "; 
				cin>>dato;
				crearCola(frente, fin, dato);
				break;
			case 2: 
				cout<<"\nMostrando los datos de cola: ";
				while(frente!=NULL){
					eliminarCola(frente, fin, dato);
					if(frente!=NULL){
						cout<<dato<<", ";
					} else {
						cout<<dato<<"."<<endl;
					}
				}
				system("pause");
				break;
			case 3:
				cout<<"\nHasta Pronto..."<<endl; 
				break;
		}
		system("cls"); //Limpiar emulador
	}while(opc!=3);
	
}

bool vaciarCola(Nodo *frente){
	return (frente==NULL)? true:false;
}

void crearCola(Nodo *&frente, Nodo *&fin, char n){
	Nodo *nuevoNodo = new Nodo();
	
	nuevoNodo->dato=n;
	nuevoNodo->siguiente=NULL;
	
	if(vaciarCola(frente)){
		frente=nuevoNodo;
	} else {
		fin->siguiente = nuevoNodo;
	}
	fin=nuevoNodo;
}

void eliminarCola(Nodo *&frente, Nodo *&fin, char &n){
	n=frente->dato;
	Nodo *aux=frente;
	if(frente==fin){
		frente=NULL;
		fin=NULL;
	} else {
		frente=frente->siguiente;
	}
	delete aux;
}
