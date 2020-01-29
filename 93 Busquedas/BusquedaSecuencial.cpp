#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int a[]={3,4,2,1,5}, dato=1, i=0;
	bool band = false;
	
	
	while((band == false)&&(i<5)){
		if(a[i]==dato){
			band=true;
		}
		i++;
	} 
	if(band==false){
		cout<<"El numero "<<dato<<" no existe en este arreglo"<<endl;
	} else if(band==true){
		cout<<"El numero "<<dato<<" ha sido encontrado en la posicion "<<i-1<<endl;
	}
	
	
	getch();
	return 0;
}
