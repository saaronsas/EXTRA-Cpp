#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	char palabra[] = "Alfonso";
	char palabra2[] = {'A','l','f','o','n','s','o'};
	char nombre[20], nombre2[20];
	
	cout<<"Introduzca su nombre:   ";	gets(nombre); //No le importa el numero de espacios de la cadena
	cin.getline(nombre2,20,'\n');
	
	cout<<palabra<<endl;
	cout<<palabra2<<endl;
	cout<<nombre<<endl;
	cout<<nombre[2]<<endl;
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
