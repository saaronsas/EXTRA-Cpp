#include <iostream>

using namespace std;

int main(){
	double practicas, teorica, participacion, final = 0;
	
	cout<<"Introduzca la nota de practicas: ";	cin>>practicas;
	cout<<"Introduzca la nota teorica: ";	cin>>teorica;
	cout<<"Introduzca la nota de participacion: ";	cin>>participacion;
	
	final = (practicas * 0.3) + (teorica * 0.6) + (participacion * 0.1);
	
	cout<<"La media total es de "<<final<<endl;
	
	
	
	
	return 0;
}
