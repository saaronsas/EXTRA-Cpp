#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numero[10], *dir_num;
	
	for(int i=0; i<10; i++){
		cout<<"Inroduzca un numero["<<i<<"]:  "; cin>>numero[i];
	}
	dir_num = numero;
	
	for(int j=0; j<10; j++){
		if(*dir_num%2==0){
			cout<<"El numero "<<*dir_num<<" es PAR"<<endl;
			cout<<"Posicion: "<<dir_num<<endl;
		}
		dir_num++;
	}
	getch();
	return 0;
}
