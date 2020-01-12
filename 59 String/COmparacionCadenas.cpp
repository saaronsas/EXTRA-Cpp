#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[] = "Hola", palabra2[] = "hola";
	
	if(strcmp(palabra1,palabra2)==0){
		cout<<"Ambas cadenas son iguales..."<<endl;
	} else {
		cout<<"Las cadenas son diferentes..."<<endl;
	}
	if(strcmp(palabra1,palabra2)<0){
		cout<<"Palabra 1 es mas larga..."<<endl;
	} else {
		cout<<"Palabra 2 es mas larga..."<<endl;
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
