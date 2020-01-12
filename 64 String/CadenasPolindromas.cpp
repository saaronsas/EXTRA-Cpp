#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char cad1[] = "reconocer", cad2[] = "coche";
	
	if(strcmp(cad1,strrev(cad1))==0){
		cout<<"La palabra "<<cad1<<" es polindroma..."<<endl;
	} else{
		cout<<"La palabra "<<cad1<<" no es polindroma..."<<endl;
	}
	if(strcmp(cad2,strrev(cad2))==0){
		cout<<"La palabra "<<cad2<<" es polindroma..."<<endl;
	} else{
		cout<<"La palabra "<<cad2<<" no es polindroma..."<<endl;
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
