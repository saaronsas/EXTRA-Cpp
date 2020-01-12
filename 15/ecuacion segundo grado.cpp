#include <iostream>
#include <math.h>

using namespace std;

int main(){
	float a,b,c, pos = 0, neg = 0;
	
	cout<<"a: ";	cin>>a;
	cout<<"b: ";	cin>>b;
	cout<<"c: ";	cin>>c;
	
	pos = (-b + sqrt(pow(b,2)-4*a*c))/2*a;
	neg = (-b - sqrt(pow(b,2)-4*a*c))/2*a;
	
	cout<<pos;
	cout<<"\ny"<<endl;
	cout<<neg;
	
	
	
	return 0;
}
