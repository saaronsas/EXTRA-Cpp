#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numero[30], *dir_num, *dir_max, max=1000, var;
	
	cout<<"Introduzca el numero de numeros:   "; cin>>var;
	for(int i=1; i<=3var; i++){
		cout<<"Introduzca un numero ["<<i<<"]:  "; cin>>numero[i];
	}
	dir_num = numero;
	for(int i=0; i<var; i++){
		if(*dir_num<max){
			max = *dir_num;
			dir_max=&max;
		}
		dir_num++;
	}
	cout<<"El numero mas pequeño es el "<<*dir_max<<endl<<"Posicion: "<<dir_max<<endl;
	getch();
	return 0;
}
