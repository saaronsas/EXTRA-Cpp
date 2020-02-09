#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void crearCola(Nodo *&, Nodo *&, int);
bool colaVacia(Nodo *);
void eliminarCola(Nodo *&, Nodo *&, int &);

int main(){
	Nodo *frente=NULL, *fin=NULL;
	int dato;
	
	cout<<"Introduzca un dato:  "; cin>>dato; 
	crearCola(frente, fin, dato);
	
	cout<<"\n\nEliminando elementos de la cola: ";
	while(frente!=NULL){
		eliminarCola(frente, fin, dato);
		
		if(frente!=NULL){
			cout<<dato<<", ";
		} else {
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}

void crearCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevoNodo = new Nodo();
	
	nuevoNodo->dato=n;
	nuevoNodo->siguiente=NULL;
	
	if(colaVacia(frente)){
		frente = nuevoNodo;
	} else {
		fin->siguiente = nuevoNodo;
	}
	fin = nuevoNodo;
	
	cout<<"\tElemento "<<n<<" insertado a cola";
}

bool colaVacia(Nodo *frente){
	return (frente==NULL)? true:false;
}

void eliminarCola(Nodo *&frente, Nodo *&fin, int &n){
	n = frente->dato;
	Nodo *aux = frente;
	
	if(frente==fin){
		frente=NULL;
		fin=NULL;
	} else {
		frente = frente->siguiente;
	}
	delete aux;
}
