#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	cout<<"Mostrando Matriz completa\n";
	
	for(int i=0;i<3;i++){
		cout<<"   ";
		for(int j=0;j<3;j++){
			cout<<" "<<numeros[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"\n\nMostrando diagonal principal de la matriz\n";
	
	for(int i=0;i<3;i++){
		cout<<"   ";
		for(int j=0;j<3;j++){
			if(i==j){
				cout<<" "<<numeros[i][j];
			} else {cout<<" "<<"0";}
		}
		cout<<"\n";
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
