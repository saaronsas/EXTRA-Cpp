#include <iostream>

using namespace std;

int main(){
	int a, b;
	
	cout<<"a: ";	cin>>a;
	cout<<"b: ";	cin>>b;
	
	if(a > b){
		cout<<a;
	}
	else if(a == b){
		cout<<"a y b son iguales";
	}
	else{
		cout<<b;
	}
	
	
	
	return 0;
}
