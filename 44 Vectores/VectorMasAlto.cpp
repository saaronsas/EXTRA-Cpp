#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int vector[100], num, x=0;
	cout<<"Introduzca la cantidad de numeros que desea:   "; cin>>num; cout<<"\n\n";
	for(int i; i<num; i++){
		cout<<"Introduzca el numero de la posicion "<<i+1<<":   "; cin>>vector[i]; cout<<"\n\n";
		if(vector[i]>x){
			x=vector[i];
		}
	}
	cout<<"El numero mas alto es el "<<x<<"\n\n";
	system("pause");
	return 0;
}
