#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int numeros[] = {1,2,3,4,5}; int suma;
	for(int i=0; i<=5; i++){
		suma = suma+numeros[i];
	}
	cout<<"La suma de el vector es "<<suma<<"\n\n";
	system("pause");
	return 0;
}
