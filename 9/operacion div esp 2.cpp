#include <iostream>

using namespace std;

int main(){
	float a,b,c,d,e,f, resultado = 0;
	
	cout<<"a: ";	cin>>a;
	cout<<"b: ";	cin>>b;
	cout<<"c: ";	cin>>c;
	cout<<"d: ";	cin>>d;
	cout<<"e: ";	cin>>e;
	cout<<"f: ";	cin>>f;
	
	resultado = (a+b/c)/(d+e/f);
	
	cout<<"El resultado es: "<<resultado<<endl;
	
	
	
	return 0;
}
