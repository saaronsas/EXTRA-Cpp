#include <iostream>

using namespace std;

int main(){
	double a,b,c,d, media = 0;
	
	cout<<"Nota del primer alumno: ";	cin>>a;
	cout<<"Nota del segundo alumno: ";	cin>>b;
	cout<<"Nota del tercer alumno: ";	cin>>c;
	cout<<"Nota del cuarto alumno: ";	cin>>d;
	
	media = (a+b+c+d) / 4;
	
	cout<<"La media de los alumnos es de "<<media<<endl;
	
	
	return 0;
}
