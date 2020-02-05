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
	char res;
	
	do{
		cout<<"Introduza su dato:  "; cin>>dato;
		agregarPila(pila,dato);
		
		cout<<"\nDesea agregar otro  elemento a la pila(s/n): "; cin>>res;
		
	}while((res=='S')||(res=='s'));
	
	cout<<"\nSacando todos los elemntos de la pila:  ";
	while(pila!=NULL){
		sacarPila(pila, dato);
		if(pila!=NULL){
			cout<<dato<<", ";
		} else {
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevoNodo = new Nodo();
	nuevoNodo->dato=n;
	nuevoNodo->siguiente=pila;
	pila=nuevoNodo;
	
	cout<<"\tEl elemnto "<<n<<" ha sido agregado a pila"<<endl;
}

void sacarPila(Nodo *&pila, int &n){
	Nodo *aux=pila;
	n=aux->dato;
	pila=aux->siguiente;
	delete aux;
}
