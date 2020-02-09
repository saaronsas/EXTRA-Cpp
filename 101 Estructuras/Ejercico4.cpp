#include <iostream>
#include <conio.h>

using namespace std;

struct Etapas{
	int horas, minutos, segundos;
}et[100];

int main(){
	int num, h=0, min=0, seg=0;
	cout<<"Introduzca el numero de etapas:  "; cin>>num;
	
	for(int i=0; i<num; i++){
		cout<<"\nEtapa numero "<<i+1<<"..."<<endl;
		cout<<"Horas:  "; cin>>et[i].horas;
		cout<<"Minutos:  "; cin>>et[i].minutos;
		cout<<"Segundos:  "; cin>>et[i].segundos;
		
		h+=et[i].horas;
		min+=et[i].minutos;
		if(min>=60){
			min-=60;
			h++;
		}
		seg+=et[i].segundos;
		if(seg>=60){
			seg-=60;
			min++;
		}
	}
	cout<<"\n\nEl corredor ha tardedo en "<<num<<" etapas:"<<endl;
	cout<<"Horas: "<<h<<"\nMinutos: "<<min<<"\nSegundos: "<<seg;
	
	getch();
	return 0;
}
