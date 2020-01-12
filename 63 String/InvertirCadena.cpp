#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char cad[] = "Esta cadena esta ahora al reves...";
	
	strrev(cad);
	
	cout<<cad<<endl;
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
