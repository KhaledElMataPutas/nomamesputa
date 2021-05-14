#include <iostream>
#include <conio.h>
using namespace std;
int TAM,mayor=0,puntos[100],a;
struct fecha{
	int ano,meses,dias;
}fechas[100];
void pedirdatos();
fecha aaa(fecha fechas[],int);
void imprimir_datos();
int main(){
	pedirdatos();
	aaa(fechas,TAM);
	imprimir_datos();
	getch();
	return 0;
}
void pedirdatos(){
	cout<<"\nIngrese una cantidad de fechas ";cin>>TAM;
	for (int i=0;i<TAM;i++){
		cout<<endl<<"ingrese un ano. ";cin>>fechas[i].ano;
		cout<<"ingrese un mes. ";cin>>fechas[i].meses;
		cout<<"ingrese un dia. ";cin>>fechas[i].dias;
	}
}
fecha aaa(fecha fechas[],int  TAM){
	for (int i=0;i<TAM;i++){
		puntos[i]=(fechas[i].ano*365+fechas[i].meses*30+fechas[i].dias);
		if (puntos[i]>mayor){
			a=i;
			mayor=puntos[i];
		}
		
		
	}
}
void imprimir_datos(){
	cout<<"la fecha mayor es: "<<fechas[a].dias<<"/"<<fechas[a].meses<<"/"<<fechas[a].ano;
}
