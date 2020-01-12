#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int matriz2[3][3];
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			matriz2[j][i] = matriz[i][j];
		}
	}
	cout<<"\nLa primera matriz...\n";
	for(int i=0; i<3; i++){
		cout<<"\n   ";
		for(int j=0; j<3; j++){
			cout<<" "<<matriz[i][j];
		}
	}
	cout<<"\n\nLa segunda matriz...\n";
	for(int i=0; i<3; i++){
		cout<<"\n   ";
		for(int j=0; j<3; j++){
			cout<<" "<<matriz2[i][j];
		}
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
