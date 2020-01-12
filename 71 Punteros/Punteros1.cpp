#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int num = 20, *dir_num=&num;
	
	cout<<"Numero: "<<*dir_num<<endl;
	cout<<"Direccion de mem: "<<dir_num<<endl;
	
	system("pause");
	return 0;
}
