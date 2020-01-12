#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int num, *dir_num;
	
	cout<<"Introduzca un numero:   "; cin>>num;
	
	dir_num = &num; //Guardando posicion memoria en Puntero
	
	if(*dir_num%2==0){
		cout<<"El numero "<<*dir_num<<" es par"<<endl;
		cout<<"Posicion: "<<dir_num<<endl;
	} else{
		cout<<"El numero "<<*dir_num<<" es impar"<<endl;
		cout<<"Posicion: "<<dir_num<<endl;
	}
	
	getch();
	return 0;
}
