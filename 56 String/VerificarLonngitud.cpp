#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char text[100];
	int var;
	
	cout<<"Introduzca su texto:   "; cin.getline(text,100,'\n');
	var = strlen(text);
	
	if(var>=10){
		cout<<"\nSu texto es "<<text<<" y tiene mas de 10 caracteres"<<endl;
	} else {
		cout<<"\nSu texto es "<<text<<" y tiene menos de 10 caracteres"<<endl;
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
