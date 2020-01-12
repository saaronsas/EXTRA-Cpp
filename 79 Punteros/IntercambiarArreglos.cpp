#include <iostream>
#include <conio.h>

using namespace std;

int hallarMax(int *, int );

int main(){
	const int nElement=5;
	int numero[nElement]={3,5,1,8,1};
	
	cout<<"El mayor elemento es "<<hallarMax(numero,nElement);
	
	getch();
	return 0;
}

int hallarMax(int *dirVec, int nElement){
	int max=0;
	
	for(int i=0; i<nElement;i++){
		if(*(dirVec+i)>max){
			max=*(dirVec+i);
		}
	}
	return max;
}
