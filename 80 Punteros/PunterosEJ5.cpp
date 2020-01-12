#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedirDatos();
void ordenarDatos(int *, int);
void mostrarDatos(int *, int);

int nElement, *element;

int main(){
	pedirDatos();
	ordenarDatos(element, nElement);
	mostrarDatos(element, nElement);
	
	delete[] element; //liberar memoria
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Introduzca el numero de elementos:   "; cin>>nElement;
	
	element = new int[nElement]; //crear arreglo
	
	for(int i=0; i<nElement; i++){
		cout<<"Introduzca el numero["<<i+1<<"]:  "; cin>>*(element+i);
	}
}

void ordenarDatos(int *element, int nElement){
	int aux;
	
	for(int i=0;i<nElement;i++){ 			//Metodo Burbuja
		for(int j=0;j<nElement-1;j++){
			if(*(element+j)>*(element+j+1)){
				aux=*(element+j);
				*(element+j)=*(element+j+1);
				*(element+j+1)=aux;
			}
		}
	}
	
}	

void mostrarDatos(int *element, int nElement){
	cout<<"\n\nMostrando arreglo ordenado:  ";
	for(int i=0; i<nElement;i++){
		cout<<*(element+i)<<"  ";
	}
	
}
