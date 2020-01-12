#include<iostream>

using namespace std;

int main(){
	float a,b, resultado = 0;
	
	cout<<"Digita el valor de A: "<<endl;
	cin>>a;
	cout<<"Digita el valor de B: "<<endl;
	cin>>b;
	
	resultado = (a/b) + 1;
	
	//redondear
	cout.precision(2);
	cout<<"\nEl resultado es: "<<resultado<<endl;
	
	
	
	return 0;
}
