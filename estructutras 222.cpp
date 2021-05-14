#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct atletas{
	char nombre[30];
	int medallas;
}alt[100];
int main (){
	int numero,mayor=0,menor=99999,a,b;
	cout<<"ingrese un numero de atletas ";cin>>numero;
	for (int i=0;i<numero;i++){
		fflush(stdin);		cout<<"\nIngrese el nombre del atleta "<<i+1<<": ";cin.getline(alt[i].nombre,30,'\n');
		cout<<"Ingrese el numero de medallas que obtuvo";cin>>alt[i].medallas;
		if (alt[i].medallas>mayor){
			mayor=alt[i].medallas;
			a=i;
		}
		if (alt[i].medallas<menor){
			menor=alt[i].medallas;
			b=i;
		}
		fflush(stdin);
	}
	cout<<"El atleta n"<<a+1<<" es el que tiene mas medallas con un total de "<<mayor<< "\nY el atleta "<<b<<" es el que tiene menos medallas con un total de "<<menor;
	
	
	return 0;
}
