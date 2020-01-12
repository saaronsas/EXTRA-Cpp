#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int matriz[2][2] = {{1,2},{3,4}};
	int matriz2[2][2] = {{0,0},{0,0}};
	cout<<"La matriz 2 ahora es asi...\n";
	for(int i=0; i<2; i++){
		cout<<"   ";
		for(int j=0; j<2; j++){
			cout<<" "<<matriz2[i][j];
		}
		cout<<"\n";
	}
	cout<<"\n\nPero ahora es asi...\n";
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			matriz2[i][j] = matriz[i][j];
		}
	}
	for(int i=0; i<2; i++){
		cout<<"   ";
		for(int j=0; j<2; j++){
			cout<<" "<<matriz2[i][j];
		}
		cout<<"\n";
	}
	cout<<"\nVAYA QUE PASO...\n\n";
	system("pause");
	return 0;
}
