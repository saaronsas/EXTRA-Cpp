#include <iostream>
#include <conio.h>
#include<stdlib.h>	//new y delete

using namespace std;

void pedirNotas();
void mostrarNotas();

int ncalif, *calif;

int main(){
	pedirNotas();
	mostrarNotas();
	
	delete[] calif;
	
	getch();
	return 0;
}

void pedirNotas(){
	cout<<"Introduzca el nuemro de calificaciones:   "; cin>>ncalif;
	calif = new int(ncalif);
	
	for(int i=0; i<ncalif ;i++){
		cout<<"Introduzca la nota "<<i+1<<":   "; cin>>calif[i];
	}
	
}

void mostrarNotas(){
	cout<<"\n\nEstamos  mostrando las notas del Usuario:"<<endl;
	for(int i=0;i<ncalif;i++){
		cout<<i+1<<"-->"<<calif[i]<<endl;
	}
}
