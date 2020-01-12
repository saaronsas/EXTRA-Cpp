#include <iostream>

using namespace std;

int main(){
	int x,y,aux;
	
	cout<<"x: "; cin>>x;
	cout<<"y: "; cin>>y;
	
	aux = x;
	x = y;
	y = aux;
	
	cout<<"x = "<<x<<endl;
	cout<<"y = "<<y<<endl;
	
	return 0;
}
