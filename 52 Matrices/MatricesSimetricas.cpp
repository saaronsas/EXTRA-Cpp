#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	char var;
	int matriz1[3][3] = {{1,4,5},{1,2,1},{1,1,1}};
	int matriz2[3][3] = {{1,1,1},{4,2,1},{5,1,1}};
	int matriz3[3][3] = {{2,1,1},{4,2,1},{5,1,1}};
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(matriz1[i][j] != matriz2[j][i]){
				var = 't';
			}
		}
	}
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(matriz3[i][j] != matriz2[j][i]){
				var = 'f';
			}
		}
	}
	if(var == 'f'){cout<<"La matriz 2 y 3 no son simetricas...\n";}
	cout<<"Las matrices son simetricas...\n\n";
	system("pause");
	return 0;
}
