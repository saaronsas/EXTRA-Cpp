#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char text1[30], text2[30], text[30];
	
	cout<<"Introduzca su texto:   "; cin.getline(text1,30,'\n');
	
	strcpy(text2,text1);
	strcpy(text,text2);
	
	cout<<"\nSu cadena es:  "<<text<<endl;
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
