#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[] = "Alfonso", nombre2[20];
	
	strcpy(nombre2,nombre);	//Copiar una cadena a otra (contenido)
	cout<<nombre2<<endl;
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
