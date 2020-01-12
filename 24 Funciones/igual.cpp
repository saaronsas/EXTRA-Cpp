#include <iostream>

using namespace std;

int name(){
	int a,b,c,d;
	
	cout<<"Introduzca su primer numero: ";	cin>>a;
	cout<<"Introduzca su segundo numero: ";	cin>>b;
	cout<<"Introduzca su tercer numero: ";	cin>>c;
	
	cout<<"Introduzca su ultimo numero: ";	cin>>d;
	
	if(a == d){
		cout<<d<<" es igual que "<<a;
	}
	else if(d == b){
		cout<<d<<" es igual que "<<b;
	}
	else if(d == c){
		cout<<d<<" es igual que "<<c;
	}
	else{
		cout<<d<<" no es igual a ningun otro numero";
	}
	
	return 0;
}
