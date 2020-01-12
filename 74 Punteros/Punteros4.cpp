#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numeros[] = {1,2,3,4,5,}, *dir_num;
	
	dir_num = numeros;  ///Es lo mismo que esto   &numero[0]
	for(int i=0; i<5;i++){
		cout<<"Elemento del vector ["<<i<<"]:  "<<*dir_num++<<" y Posicion: "<<dir_num<<endl;
	}
	
	getch();
	return 0;
}
