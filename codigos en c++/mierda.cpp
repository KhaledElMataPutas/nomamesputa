#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
struct tiempo{
	int horas,minutos,segundos;
}etapas[3],*di_etapas=etapas;
void operacion();
int main(){
	operacion();
	return 0;
}
void operacion(){
	int *puntos,mayor=0,a,*etapass;
	etapass=new int [3];
	puntos=new int [3];
	for (int i=0;i<3;i++){
		cout<<"Ingrese las horas del ciclista "<<i+1<<": ";cin>>(di_etapas+i)->horas;
		cout<<"Ingrese los minutos del ciclista "<<i+1<<": ";cin>>(di_etapas+i)->minutos;
		cout<<"Ingrese los segundos del ciclista "<<i+1<<": ";cin>>(di_etapas+i)->segundos;
		puntos[i]=(di_etapas+i)->horas*3600+(di_etapas+i)->minutos*60+(di_etapas+i)->segundos;
		if (puntos[i]>mayor){
			mayor=puntos[i];
			a=i;
		}
		etapass[i]=puntos[i]/7200;
		
	}
	cout<<"\nEl mayor tiempo logro un total de  "<<etapass[a]<<" con un tiempo de: "<<(di_etapas+a)->horas<<" horas "<<(di_etapas+a)->minutos<<" minutos "<<(di_etapas+a)->segundos<<" segundos";
}
