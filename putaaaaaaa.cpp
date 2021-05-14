#include <iostream>
#include <conio.h>
using namespace std;
struct datoss{
	char nombre[30];
	int edad;
};
struct nodo{
	datoss per;
	nodo *siguiente;
};
datoss persona;
nodo *fin=NULL;
nodo *inicio=NULL;
void mostrar_datos();
void pedir_datos(datoss);
void menu();
void agregar_cola(nodo *,nodo *,datoss );
void borrar_cola(nodo *,nodo *,datoss &);
bool cola_vacia (nodo *);
int main (){
	
	menu();
	return 0;
}
void menu(){
	int opcion;
	do{
		system ("cls");
		cout<<"   --MENU--\ndigite una opcion: \n1. Insertar datos. \n2. Mostrar datos. \n3. Salir\n";cin>>opcion;
		switch (opcion){
			case 1:	system ("cls");
					 pedir_datos(persona);break;
			case 2: system ("cls");
					cout<<inicio;
					mostrar_datos();
					
					cout<<"\nputa\n";break;
			
			case 3:break;
		}
	fflush(stdin);
	}while((opcion==1)||(opcion==2));
}
void pedir_datos(datoss persona){
	cout<<"Introduzca el nombre: ";
	fflush(stdin);
	cin.getline(persona.nombre,20,'\n');
	cout<<"Introduzca la edad de "<<persona.nombre<<": ";cin>>persona.edad;
	agregar_cola(inicio,fin,persona);	
}
void agregar_cola(nodo *inicio,nodo *fin, datoss perr){
	nodo *nuevo_nodo=new nodo();
	nuevo_nodo->per=perr;
	nuevo_nodo->siguiente=NULL;
	cout<<"\t Los datos de "<<nuevo_nodo->per.nombre<<" han sido introducidos de manera exitosa"<<endl;
	if (cola_vacia(inicio)){
		inicio=nuevo_nodo;
	}	
	else{
		fin->siguiente=nuevo_nodo;
	}
	fin=nuevo_nodo;
}
bool cola_vacia(nodo *inicio){
	return (inicio==NULL)? true : false;
}
void borrar_cola(nodo *inicio,nodo *fin, datoss &perr){
	perr=inicio->per;
	nodo *aux=inicio;
	if (inicio==fin){
		inicio=NULL;
		fin=NULL;
	}
	else {
		inicio=inicio->siguiente;
	}
	delete aux;
}
void mostrar_datos(){
	while (inicio!=NULL){
		borrar_cola(inicio,fin,persona);
		if (inicio!=NULL){
			cout<<"Nombre: "<<persona.nombre<<"\nEdad: "<<persona.edad<<endl;
		}
		else {
			cout<<"Nombre: "<<persona.nombre<<"\nEdad: "<<persona.edad;
		}
	}
}














