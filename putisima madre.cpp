#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct datos{
	char Nombre[30];
	int edad;
} *registro;
struct nodo{
	datos persona;
	nodo *siguiente;
};
datos p;
nodo *inicio=NULL;
int cont=0;
nodo *fin=NULL;
void menu();
void agregarCola(nodo *, nodo *, datos);
void quitarCola(nodo *, nodo *, datos &);
void pedirDatos();
void borrarDatos();
bool cola_vacia(nodo *);
int main(){
	
	menu();
	return 0;
}
void menu(){
	int respuesta;
	do{
		system ("cls");
		cout<<" ___MENU___ \n-----Ingrese una opcion-----\n1. Ingresar Datos\n2. Borrar datos\n3. Salir\n ";cin>>respuesta;
		switch (respuesta){
			case 1:system("cls"); pedirDatos();break;
			case 2: borrarDatos(); system("pause");break;
			case 3:break;
		}
		
		
	}while (respuesta!=3);
}
void pedirDatos(){
	fflush(stdin);
	cout<<"\nIngrese un nombre: ";cin.getline(p.Nombre,20,'\n');
	cout<<"Diga la edad de "<<p.Nombre<<": ";cin>>p.edad;
	cont++;
	agregarCola(inicio,fin,p);
	fflush(stdin);
}
void agregarCola(nodo *inicio,nodo *fin, datos per){
	nodo *nuevo_nodo= new nodo();
	nuevo_nodo->persona=per;
	if (cola_vacia(inicio)){
		inicio=nuevo_nodo;
	}
	else {
		fin->siguiente=nuevo_nodo;
	}
	fin=nuevo_nodo;
}
bool cola_vacia(nodo * inicio){
	return (inicio==NULL)? true : false;
}
void borrarDatos(){
	cout<<"Borrando datos...\n";
	while (inicio!=NULL){
		quitarCola(inicio,fin,p);
		if (inicio!=NULL){
			cout<<"Nombre: "<<p.Nombre<<"\nEdad: "<<p.edad<<endl;
		}
		else{
			cout<<"Nombre: "<<p.Nombre<<"\nEdad: "<<p.edad;
		}
		
	}
}
void quitarCola (nodo *inicio,nodo *fin,datos &per){
	per=inicio->persona;
	nodo *aux=inicio;
	if (inicio==fin){
		inicio=NULL;
		fin=NULL;
	}	
	else{
		inicio=inicio->siguiente;
	}
	delete aux;
}







































