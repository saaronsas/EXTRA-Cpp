#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int num, dato,cont=0;
	dato = 1+rand()%100;
	do{
		cout<<"Introduzca su numero:   "; cin>>num;
		if(num<dato){cout<<"\nEl numero es mayor que el tuyo\n";}
		else if(num>dato){cout<<"\nEl numero es menor que el tuyo\n";}
		cont++;
	} while(num != dato);
	cout<<"\n\n\nENORABUENA HAS ADIVINADO EL NUMERO\n\n--> Has tardado "<<cont<<" intentos\n\n";
	system("pausse");
	return 0;
}
