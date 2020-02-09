#include <iostream>
#include <conio.h>

using namespace std;

struct Persona{
	char nombre[30];
	bool discapacidad=false;
}p[100];

int main(){
	int num, disc=0, bien=0; char aux; string dis[100], bn[100];
	cout<<"Introduzca el numero de personas:  "; cin>>num;
	for(int i=0; i<num; i++){
		cout<<"Persona "<<i+1<<endl;
		cout<<"Nombre:  "; cin>>p[i].nombre;
		cout<<"Discapacidad (S||N):  "; cin>>aux;
		if(aux == 'S'||'s'){
			p[i].discapacidad = true;
		}
	}
	for(int i=0; i<num; i++){
		if(p[i].discapacidad==true){
			dis[disc]=p[i].nombre;
			disc++;
		} else if(p[i].discapacidad==false){
			bn[bien]=p[i].nombre;
			bien++;
		}
	}
	cout<<"Discapacidad: "<<endl;
	for(int i=0; i<disc; i++){
		cout<<dis[i]<<", ";
	}
		cout<<"Sin discapacidad: "<<endl;
	for(int i=0; i<bien; i++){
		cout<<bn[i]<<", ";
	}
	
	getch();
	return 0;
}
