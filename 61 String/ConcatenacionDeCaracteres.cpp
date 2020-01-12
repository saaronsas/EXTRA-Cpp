#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char text1[] = "Esto es una cadena", text2[] = " y esta es otra", text[50];
	
	strcpy(text,text1);
	strcat(text,text2);
	
	cout<<text<<endl;
	cout<<"\n\n";
	system("pause");
	return 0;
}
