#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	float temperatura, temperatura_alta = 0,suma = 0, temperatura_baja = 999, temperatura_media;
	
	for(int i=4; i<=24; i+=4){
		cout<<"Introduzca la temperatura a las "<<i<<": ";	cin>>temperatura;
		
		suma += temperatura;
		
		if(temperatura > temperatura_alta){
			temperatura_alta = temperatura;
		}
		if(temperatura < temperatura_baja){
			temperatura_baja = temperatura;
		}
		
		temperatura_media = suma / 6;
	}
	
	cout<<"La temperatura media es "<<temperatura_media;
	cout<<"\nLa temperatura maxima es de "<<temperatura_alta;
	cout<<"\nLa temperatura mimima es de "<<temperatura_baja;
	
	
	
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
