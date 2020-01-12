#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char text1[] = "Hola que tal ", palabra [30];
	
	cout<<"\nIntroduzca su nombre:   "; cin.getline(palabra,30,'\n');
	strcat(text1,palabra);
	
	cout<<text1<<endl;
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
