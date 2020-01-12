#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedirNum();
void buscarNum(int *, int);
void mostrarDatos(int *, int);

int *num, nDat, busq, *fin, aux2=0;

int main(){
	pedirNum();
	buscarNum(num, nDat);
	mostrarDatos(fin, aux2);
	
	delete[] num;
	delete[] fin;
	
	getch();
	return 0;
}

void pedirNum(){
	cout<<"Introduzca el numero de Datos:   "; cin>>nDat;
	
	num = new int[nDat];
	
	for(int i=0; i<nDat; i++){
		cout<<"Introduzca el numero["<<i+1<<"]:  "; cin>>*(num+i);
	}
}

void buscarNum(int *num, int nDat){
	int aux;
	
	cout<<"\n\nIntroduzca el numero que deseas buscar:   "; cin>>busq;
	
	for(int i=0; i<nDat; i++){
		if(*(num+i)==busq){
			aux++;
		}
	}
	fin = new int[aux];
	for(int i=0; i<nDat; i++){
		if(*(num+i)==busq){
			*(fin+aux2) = *(num+i);
			aux2++;
		}
	}
}

void mostrarDatos(int *fin, int aux2){
	cout<<"Los datos encontrados han sido "<<aux2<<" y son estos:  ";
	for(int i=0; i<aux2;i++){
		cout<<*(fin+i)<<"  ";
	}
}
