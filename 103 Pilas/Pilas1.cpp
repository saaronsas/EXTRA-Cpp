#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void agregarPila(Nodo *&, int);

int main(){
	Nodo *pila = NULL;
	int n1, n2;
	
	cout<<"\nIntroduzca un numero:  "; cin>>n1;
	agregarPila(pila, n1);
	cout<<"\nIntroduzca otro numero:  "; cin>>n2;
	agregarPila(pila, n2);
	
	getch();
	return 0;
}

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevoNodo = new Nodo();	//Crear espacio memoria
	nuevoNodo->dato = n;			//Cargar valor
	nuevoNodo->siguiente = pila;	//Asignacion de puntero
	pila = nuevoNodo;				//Asignacion puntero a pila
	
	cout<<"\nElemento "<<n<<" agregado perfectamente a la pila"<<endl;
}
