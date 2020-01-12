#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedirDat();
void sumarMatriz(int **, int **, int, int);
void mostrarMatriz(int **, int ,int);

int **punteroMatriz1, **punteroMatriz2, nfil, ncol;

int main(){
	pedirDat();
	sumarMatriz(punteroMatriz1, punteroMatriz2, nfil, ncol);
	mostrarMatriz(punteroMatriz1, nfil, ncol);
	
	for(int i=0; i<nfil; i++){		//Eliminar columnas
		delete[] punteroMatriz1[i];
	}
	delete[] punteroMatriz1;			//Eliminar filas
	for(int i=0; i<nfil; i++){		//Eliminar columnas
		delete[] punteroMatriz2[i];
	}
	delete[] punteroMatriz2;
	
	getch();
	return 0;
}

void pedirDat(){
	cout<<"Introduzca el numero de filas:   "; cin>>nfil;
	cout<<"Introduzca el numero de columnas:   "; cin>>ncol;
	cout<<"\nPrimera matriz"<<endl;
	
	punteroMatriz1 = new int*[nfil];
	for(int i=0; i<nfil; i++){
		punteroMatriz1[i] = new int[ncol];
	}
	punteroMatriz2 = new int*[nfil];
	for(int i=0; i<nfil; i++){
		punteroMatriz2[i] = new int[ncol];
	}
	
	cout<<"\nIntroduzca elementos de la primera matriz:"<<endl;
	for(int i=0; i<nfil; i++){
		for(int j=0;j<ncol; j++){
			cout<<"Introduzca un numero["<<i+1<<"]["<<j+1<<"]:   "; cin>>*(*(punteroMatriz1+i)+j);
		}
	}
	cout<<"\nIntroduzca elementos de la segunda matriz:"<<endl;
	for(int i=0; i<nfil; i++){
		for(int j=0;j<ncol; j++){
			cout<<"Introduzca un numero["<<i+1<<"]["<<j+1<<"]:   "; cin>>*(*(punteroMatriz2+i)+j);
		}
	}
}

void sumarMatriz(int **punteroMatriz1, int **punteroMatriz2, int nfil, int ncol){
	for(int i=0; i<nfil; i++){
		for(int j=0; j<ncol; j++){
			*(*(punteroMatriz1+i)+j) += *(*(punteroMatriz2+i)+j);
		}
	}
	
}

void mostrarMatriz(int **punteroMatriz1, int nfil, int ncol){
	cout<<"\n\nLa suma de las dos matrices es...\n"<<endl;
	for(int i=0; i<nfil; i++){
		cout<<"   ";
		for(int j=0;j<ncol; j++){
			cout<<" "<<*(*(punteroMatriz1+i)+j);
		}
		cout<<"\n";
	}
}
