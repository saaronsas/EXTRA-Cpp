#include <iostream>
#include <conio.h>

using namespace std;

void intercambio(float *,float *);	//Prototipo

int main(){
	float num1 =20.8, num2=4.25;
	cout<<"Primer Numero:  "<<num1<<endl;
	cout<<"Segundo Numero:  "<<num2<<endl;
	
	intercambio(&num1,&num2);
	
	cout<<"\n\nDespues del intercambio:\n\n";
	cout<<"Primer Numero:  "<<num1<<endl;
	cout<<"Segundo Numero:  "<<num2<<endl;
	
	getch();
	return 0;
}

void intercambio(float *dirNum1, float *dirNum2){
	float aux;
	
	//Intercambiar valores variables
	aux=*dirNum1;
	*dirNum1=*dirNum2;
	*dirNum2=aux;
}
