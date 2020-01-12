#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char cad1[] = "OSCAR", cad2[] = "oscar";
	
	if(strcmp(cad1,strupr(cad2))==0){
		cout<<"Las dos palabras son iguales..."<<endl;
	} else{
		cout<<"Las palabras no son iguales..."<<endl;
	}
	cout<<"\n\n";
	system("pause");
	return 0;
}
