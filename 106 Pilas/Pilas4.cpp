#include <iostream>
#include <conio.h>

using namespace std;

struct Nodo{
	Nodo *siguiente;
	int dato;	
};

int introducirDatos();
void extraccion();
void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);
void menu();

Nodo *pila=NULL;
int dato;

int main(){	
	menu();
	
	getch();
	return 0;
}

void menu(){
	int aux;
	cout<<"\n\tMENU"<<endl;
	cout<<"\n1.Agregar dato"<<endl<<"2.Sacar dato"<<endl<<"3.Salir"<<endl;
	cout<<" -->"; cin>>aux;
	
	switch(aux){
		case 1:
			introducirDatos();
		case 2:
			extraccion();
		case 3:
			break;
	}
}

int introducirDatos(){
	cout<<"\nIntroduza su dato:  "; cin>>dato;
	agregarPila(pila,dato);
}

void extraccion(){
	while(pila!=NULL){
		sacarPila(pila, dato);
		if(pila!=NULL){
			cout<<dato<<", ";
		} else {
			cout<<dato<<".";
			menu();
		}
	}
}

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato=n;
	nuevoNodo->siguiente=pila;
	pila=nuevoNodo;
	
	cout<<"\tElemento "<<n<<" agregado perfectamente"<<endl;
	menu();
}

void sacarPila(Nodo *&pila, int &n){
	Nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
	extraccion();
	
}
