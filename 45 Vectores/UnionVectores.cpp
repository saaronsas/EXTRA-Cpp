#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	char letras1[] = {'a','b','c','d','e'};
	char letras2[] = {'f','g','h','i','j'};
	char letras3[10];
	
	for(int i=0; i<5; i++){
		letras3[i]=letras1[i];
	}
	for(int j=5; j<10; j++){
		letras3[j]=letras2[j-5];
	}
	cout<<"\nEl tercer vector es "<<letras3<<"\n\n";
	system("pause");
	return 0;
}
