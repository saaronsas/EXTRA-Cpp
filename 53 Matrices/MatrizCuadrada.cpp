#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int matriz1[3][3] = {{1,2,3},{1,2,3},{1,2,3}}, matriz[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			matriz[i][j] = matriz1[i][j]*matriz1[j][i];
		}
	}
	cout<<"\nLa matriz cuadrada es...\n";
	for(int i=0; i<3; i++){
		cout<<"\n   ";
		for(int j=0; j<3; j++){
			cout<<" "<<matriz[i][j];
		}
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
