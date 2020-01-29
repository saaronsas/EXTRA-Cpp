#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numeros[]={1,2,3,4,5};	//Necesita estar ordenado
	int inf, sup, mitad, dato;
	bool band=false;
	
	dato=6;
	
	//ALGORITMO
	
	inf=0;
	sup=5;
	
	while(inf<=sup){
		mitad=(inf+sup)/2;
		
		if(numeros[mitad]==dato){
			band=true;
			break;
		} else if(numeros[mitad]>dato){
			sup=mitad;
			mitad=(inf+sup)/2;
		}else if(numeros[mitad]<dato){
			inf=mitad;
			mitad=(inf+sup)/2;
		}		
	}
	if(band==true){
		cout<<"El numero ha sido encontrado en la posicion "<<mitad<<endl;
	} else if(band==false){
		cout<<"El numero no ha sido encontrado"<<endl;
	}
	
	getch();
	return 0;
}
