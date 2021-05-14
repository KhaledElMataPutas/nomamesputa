#include <iostream>
#include <stdlib.h>
using namespace std;
class tiempo{
	private:
		int horas,minutos,segundos;
	public:
		tiempo(int, int , int);
		tiempo(long);
		void imprimir();
};
tiempo::tiempo(int _horas,int _segundos,int _minutos){
	horas=_horas;
	segundos=_segundos;
	minutos=_minutos;
	cout<<endl<<horas*3600+minutos*60+segundos;
}
tiempo::tiempo(long numeros){
	horas=0;
	minutos=0;
	segundos=0;
	while (numeros>3600){
		
		horas++;
		numeros-=3600;
	
	}
	cout<<endl;
	while(numeros>60){
		minutos++;
		numeros-=60;
		
	}
	cout<<endl;
	segundos=numeros;
}

void tiempo::imprimir(){
	cout<<"las horas son "<<horas<<endl<<"Los minutos son "<<minutos<<endl<<"Los segundos son "<<segundos;
}
int main(){
	long a=15600;
	cout<<"Puta";
	
	tiempo t1(a);
	t1.imprimir();
	
	return 0;
}
