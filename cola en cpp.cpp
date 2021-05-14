#include <iostream>
#include <conio.h>
using namespace std;
struct nodo {
	int dato;
	nodo *siguiente;		
};
void insertar_cola(nodo *&,nodo *&,int);
void borrar_cola (nodo *&,nodo*&,int);
bool cola_vacia(nodo *&);

int main(){
	int dato;
	nodo *inicio;
	nodo *fin;
	cout<<"introduzca un dato ";cin>>dato;
	insertar_cola(inicio,fin,dato);	
	cout<<"introduzca un dato ";cin>>dato;
	insertar_cola(inicio,fin,dato);	
	cout<<"\nBorrando datos de COLA...";
	while (inicio!=NULL){
		borrar_cola(inicio,fin,dato);
		if (inicio!=NULL){
			cout<<dato<<" , ";
		}
		else {
			cout<<dato<<".";
		}
	}
	return 0;
}
void insertar_cola(nodo *&inicio,nodo *&fin,int n){
	nodo *nuevo_nodo=new nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	if (cola_vacia (inicio)){
		inicio=nuevo_nodo;
	}
	else{
		fin->siguiente=nuevo_nodo;
	}
	fin=nuevo_nodo;
	cout<<"El dato "<<n<<" ha sido introducido a COLA \n";
}
bool cola_vacia (nodo *&inicio){
	return (inicio==NULL)? true : false;
}
void borrar_cola(nodo *&inicio,nodo *&fin,int &n){
	n=inicio->dato;
	nodo *aux=inicio;
	if (inicio==fin){
		inicio=NULL;
		fin = NULL;
	}
	else {
		inicio=inicio->siguiente;	
	}
	delete aux;
}
