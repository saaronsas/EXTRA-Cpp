#include <iostream>
#include <conio.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void agregarPila(Nodo *&, int);
void sacarPila(Nodo *&, int &);

int main(){
	Nodo *pila=NULL;
	int dato;
	
	cout<<"Introduzca un dato:  "; cin>>dato;
	agregarPila(pila, dato);
	cout<<"\nIntroduzca su segundo dato:  "; cin>>dato;
	agregarPila(pila,dato);
	
	cout<<"\nSacando elementos de la FILA:  ";
	while(pila!=NULL){
		sacarPila(pila, dato);
		if(pila!=NULL){
			cout<<dato<<", ";
		} else{
			cout<<dato<<".";
		}
		
	}
	
	getch();
	return 0;
}

void agregarPila(Nodo *&pila, int n){
	Nodo *punteroNodo = new Nodo();
	punteroNodo->dato=n;
	punteroNodo->siguiente=pila;
	pila=punteroNodo;
	
	cout<<"\tEl dato "<<n<<" se ha agregado correctamente a pila"<<endl;
}

void sacarPila(Nodo *&pila, int &n){
	Nodo *aux=pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
	
}
