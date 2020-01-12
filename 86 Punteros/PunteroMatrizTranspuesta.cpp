#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedirMatriz();
void transMatriz(int **, int, int);
void mostrarMatriz(int **, int **, int, int);

int **matriz1, **matriz2, nfil, ncol;

int main(){
	pedirMatriz();
	transMatriz(matriz1, nfil, ncol);
	mostrarMatriz(matriz1, matriz2, nfil, ncol);
	
	for(int i=0; i<ncol; i++){
		delete[] matriz1[i];
	} delete[] matriz1;
	for(int i=0; i<ncol; i++){
		delete[] matriz2[i];
	} delete[] matriz2;
	
	getch();
	return 0;
}

void pedirMatriz(){
	cout<<"Introduzca numero de filas:   "; cin>>nfil;
	cout<<"Introduzca numero de columans:   "; cin>>ncol;
	
	matriz1 = new int*[nfil];
	for(int i=0; i<ncol; i++){
		matriz1[i] = new int[ncol];
	}
	matriz2 = new int*[nfil];
	for(int i=0; i<ncol; i++){
		matriz2[i] = new int[ncol];
	}
	
	cout<<"\nPrimera Matriz:"<<endl;
	for(int i=0; i<nfil; i++){
		for(int j=0; j<ncol; j++){
			cout<<"Introduzca un numero["<<i+1<<"]["<<j+1<<"]:   "; cin>>*(*(matriz1+i)+j);
		}
	}
}
void transMatriz(int **matriz1, int nfil, int ncol){
	for(int i=0; i<nfil; i++){
		for(int j=0; j<ncol; j++){
			*(*(matriz2+i)+j) = *(*(matriz1+j)+i);
		}
	}	
}
void mostrarMatriz(int **matriz2,int **matriz1, int nfil, int ncol){
	cout<<"\n\nLa matriz normal:"<<endl;
	for(int i=0; i<nfil; i++){
		cout<<"   ";
		for(int j=0; j<ncol; j++){
			cout<<" "<<*(*(matriz1+i)+j);
		}
		cout<<"\n";
	}
	cout<<"\n\nLa matriz TRANSPUESTA:"<<endl;
	for(int i=0; i<nfil; i++){
		cout<<"   ";
		for(int j=0; j<ncol; j++){
			cout<<" "<<*(*(matriz2+i)+j);
		}
		cout<<"\n";
	}
}
