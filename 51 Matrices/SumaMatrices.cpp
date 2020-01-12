#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int matriz1[100][100], matriz2[100][100], matriz[100][100], filas, columnas;
	cout<<"Introduzca el numero de filas de las matrices:   "; cin>>filas; cout<<"\n";
	cout<<"Introduzca el numero de columnas de las matrices:   "; cin>>columnas; cout<<"\n\n";
	cout<"\nPrimera matriz...\n";
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Introduce el numero ["<<i<<"] ["<<j<<"] :   "; cin>>matriz1[i][j]; cout<<"\n";
		}
	}	
	cout<"\nSegunda matriz...\n";
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Introduce el numero ["<<i<<"] ["<<j<<"] :   "; cin>>matriz2[i][j]; cout<<"\n";
		}
	}	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			matriz[i][j] = matriz1[i][j]+matriz2[i][j];
		}
	}
	cout<<"Matriz Final...";
	for(int i=0; i<filas; i++){
		cout<<"\n   ";
		for(int j=0; j<columnas; j++){
			cout<<" "<<matriz[i][j];
		}
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
