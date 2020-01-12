#include<iostream>

using namespace std;

int main(){
	int n1,n2, suma = 0, resta = 0, div = 0, multi = 0;
	cout<<"Digame su prier digito: ";
	cin>>n1;
	cout<<"Digame su segundo digito: ";
	cin>>n2;
	
	suma = n1 + n2;
	resta =n1 - n2;
	multi = n1 * n2;
	div = n1 / n2;
	
	cout<<"\nLa suma es: "<<suma;
	cout<<"\nLa resta es : "<<resta;
	cout<<"\nLa division es : "<<div;
	cout<<"\nLa multiplicacion es: "<<multi;
	
	
	return 0;
}
