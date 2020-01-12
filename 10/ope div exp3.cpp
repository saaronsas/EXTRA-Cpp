#include <iostream>

using namespace std;

int main(){
	float a,b,c,d, resultado;
	
	cout<<"a: ";	cin>>a;
	cout<<"b: ";	cin>>b;
	cout<<"c: ";	cin>>c;
	cout<<"d: ";	cin>>d;
	
	resultado = a + b/(c-d);
	
	cout<<"El resultado es: "<<resultado<<endl;
	
	
	return 0;
}
