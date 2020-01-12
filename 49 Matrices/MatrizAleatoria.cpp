#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int matriz[100][100], filas,columnas;
	cout<<"Introduzca las columnas de la matriz:   "; cin>>columnas; cout<<"\n";
	cout<<"Introduzca las filas de la matriz:   "; cin>>filas; cout<<"\n";
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			matriz[i][j] = 1+rand()%9;
		}
	}
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
