#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "hola que haces?";
	int longi=0;
	
	longi = strlen(palabra);
	
	cout<<"Numero de letras de la cadena de caracteres "<<longi<<endl;
	
	cout<<"\n\n";
	system("pause");
	return 0;
}

