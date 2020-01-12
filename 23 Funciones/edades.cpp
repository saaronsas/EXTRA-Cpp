#include <iostream>

using namespace std;

int main(){
	int edad, modo;
	
	cout<<"Introduzca su edad: ";	cin>>edad;
	
	cout<<"Para el modo con switch -- 1 "<<endl;
	cout<<"Para el modo con if -- 2 "<<endl;	
	cout<<"Introduzca el modo de hacerlo: ";	cin>>modo;
	
	//1 es con switch y 2 es con if
	
	if(modo == 1){
		switch(edad){
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25: cout<<"Esta entre 18 y 25 años"; break;
		default: cout<<"No esta entre 18 - 25 años"; break;
		
		}
	}
	else if(modo == 2){
		if((edad >= 18) && (edad <= 25)){
			cout<<"Esta entre 18 y 25 años";
		}
		else if(edad < 18){
			cout<<"Es menor de edad";
		}
		else{
			cout<<"Tiene mas de 25 años";
		}
	}
	else{
		cout<<"No existe ese modo";
	}
	
	
	return 0;
}
