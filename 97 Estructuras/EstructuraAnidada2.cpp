#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct corredor{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
}c;

int main(){
	char categoria[20];
	
	cout<<"Nombre:  "; cin.getline(c.nombre,20,'\n');
	cout<<"Edad:  "; cin>>c.edad; fflush(stdin);
	cout<<"Sexo:  "; cin.getline(c.sexo,10,'\n');
	cout<<"Club:  "; cin.getline(c.club,20,'\n');
	if(c.edad<=18){
		strcpy(categoria,"Juvenil");
	} else if(c.edad<=40){
		strcpy(categoria,"Senior");
	} else if(c.edad>40){
		strcpy(categoria,"Veterano");
	}
	cout<<"\n\nDatos del corredor..."<<endl;
	cout<<"Nombre: "<<c.nombre<<"\nEdad: "<<c.edad<<"\nSexo: "<<c.sexo<<endl;
	cout<<"Club: "<<c.club<<"\nCategoria: "<<categoria<<endl;
	
	getch();
	return 0;
}
