#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char text1[30], text2[30];
	
	cout<<"Introduzca su pirmer texto:   "; cin.getline(text1,30,'\n');
	cout<<"Introduzca su segundo texto:   "; cin.getline(text2,30,'\n\n');
	
	if(strcmp(text1,text2)==0){
		cout<<"La cadenas son iguales..."<<endl;
	} else if(strcmp(text1,text2)<0){
		cout<<"La cadena primera es mayo que la segunda..."<<endl;
	} else{
		cout<<"La cadena segunda es mayor que la primera..."<<endl;
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
