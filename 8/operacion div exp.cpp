#include<iostream>

using namespace std;

int main(){
	float a,b,c,d, resultado = 0;
	
	cout<<"Introduzca el valor de a: ";	cin>>a;
	cout<<"\nIntroduzca el valor de b: ";	cin>>b;
	cout<<"\nIntroduzca el valor de c: ";	cin>>c;
	cout<<"\nIntroduzca el valor de d: ";	cin>>d;
	
	resultado = (a+b) / (c+d);
	
	cout<<"\nEl resultado es: "<<resultado;
	
	
	return 0;
}
