#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numeros[]={4,1,2,5,3}, aux;
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			if(numeros[j]>numeros[j+1]){
				aux = numeros[j];
				numeros[j]=numeros[j+1];
				numeros[j+1]=aux;
			}
		}
	}
	cout<<"\nOrden Ascendente...";
	for(int i=0; i<5; i++){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
