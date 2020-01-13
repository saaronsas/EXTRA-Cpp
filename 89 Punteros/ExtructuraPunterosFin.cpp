#include <iostream>
#include <conio.h>

using namespace std;

struct Tiempo{
	int horas, min, seg;
}tiempo[3], *punteroTiempo = tiempo;

void pedirDatos();
void operarDatos(Tiempo *);

int hours, minutos, segundos;

int main(){
	pedirDatos();
	operarDatos(punteroTiempo);
	
	getch();
	return 0;
}

void pedirDatos(){
	for(int i=0; i<3; i++){
		fflush(stdin);
		cout<<"Etapa nº "<<i+1<<endl;
		cout<<"Introduzca las horas:   "; cin>>(punteroTiempo+i)->horas;
		cout<<"Introduzca las minutos:   "; cin>>(punteroTiempo+i)->min;
		cout<<"Introduzca las segundos:   "; cin>>(punteroTiempo+i)->seg;
		cout<<"\n\n";
	}
	
}

void operarDatos(Tiempo *punteroTiempo){
	
	for(int i=0; i<3; i++){
		hours += (punteroTiempo+i)->horas;
		minutos += (punteroTiempo+i)->min;
		segundos += (punteroTiempo+i)->seg;
	}
	cout<<"\nEl corredor ha tardado "<<hours<<" horas, "<<minutos<<" minutos y "<<segundos<<" segundos"<<endl;
}
