#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

//Crear espacio
//Asignar nodo a dato
//asignar puntero (frente y fin) hacia en nuevo nodo

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void crearCola(Nodo *&, Nodo *&, int);
bool colaVacia(Nodo *);

int main(){
	Nodo *frente=NULL, *fin=NULL;
	int dato;
	
	cout<<"Introduzca un dato:  "; cin>>dato;
	crearCola(frente, fin, dato);
	
	getch();
	return 0;
}

void crearCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevoNodo = new Nodo();
	
	nuevoNodo->dato = n;
	nuevoNodo->siguiente = NULL;
	
	if(colaVacia(frente)){
		frente = nuevoNodo;
	} else {
		fin->siguiente = nuevoNodo;
	} 
	fin = nuevoNodo;
	
	cout<<"\tElemento "<<n<<" insertado a cola";
}

//Determinar si cola esta vacia
bool colaVacia(Nodo *frente){
	/*if(frente == NULL){
		return true;
	} else {
		return false;
	}*/
	return (frente==NULL)? true:false;
}
