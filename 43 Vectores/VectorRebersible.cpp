#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int vector[100],num;
	cout<<"Introduzca la cantidad de numeros que desea:   "; cin>>num; cout<<"\n\n";
	for(int i; i<num; i++){
		cout<<"Introduzca el numero de la posicion "<<i<<":   "; cin>>vector[i]; cout<<"\n\n";
	}
	for(num; num>0; num--){
		cout<<" --> "<<vector[num-1];
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
