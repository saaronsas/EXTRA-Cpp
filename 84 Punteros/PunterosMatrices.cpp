#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedirDat();
void mostrarMatriz(int **, int, int);

int **punteroMatriz, nfil, ncol;

int main(){
	pedirDat();
	mostrarMatriz(punteroMatriz, nfil, ncol);
	
	for(int i=0; i<nfil; i++){		//Eliminar columnas
		delete[] punteroMatriz[i];
	}
	delete[] punteroMatriz;			//Eliminar filas
	
	getch();
	return 0;
}

void pedirDat(){
	cout<<"Introduzca el numero de filas:   "; cin>>nfil;
	cout<<"Introduzca el numero de columnas:   "; cin>>ncol;
	
	punteroMatriz = new int*[nfil];
	for(int i=0; i<nfil; i++){
		punteroMatriz[i] = new int[ncol];
	}
	cout<<"\nIntroduzca elementos de la matriz:"<<endl;
	for(int i=0; i<nfil; i++){
		for(int j=0;j<ncol; j++){
			cout<<"Introduzca un numero["<<i+1<<"]["<<j+1<<"]:   "; cin>>*(*(punteroMatriz+i)+j);
		}
	}
}

void mostrarMatriz(int **punteroMatriz, int nfil, int ncol){
	cout<<"\n\n"<<endl;
	for(int i=0; i<nfil; i++){
		cout<<"   ";
		for(int j=0;j<ncol; j++){
			cout<<" "<<*(*(punteroMatriz+i)+j);
		}
		cout<<"\n";
	}
}
