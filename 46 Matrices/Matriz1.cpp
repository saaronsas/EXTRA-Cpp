#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int filas, columnas, matriz[100][100];
	cout<<"Introduzca las columnas de la matriz:   "; cin>>columnas;
	cout<<"Introduzca las filas de la matriz:   "; cin>>filas; cout<<"\n";
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Introduzca el numero correspodiente a ["<<i<<"] ["<<j<<"] :   ";
			cin>>matriz[i][j];
		}
	}
	cout<<"\n";
	for(int i=0; i<filas; i++){
		cout<<"  ";
		for(int j=0; j<columnas; j++){
			cout<<" "<<matriz[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
