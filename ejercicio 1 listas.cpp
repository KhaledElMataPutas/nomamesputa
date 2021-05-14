#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct nodo{
	int dato;
	nodo *siguiente;
};
nodo *lista=NULL;
void agregarlista(nodo *&,int);
void mostrarlista(nodo *);
void sumalista(nodo *);

int main(){
	int dato;
	char respuesta;
	do {
		cout<<"Ingrese un numero a lista: ";cin>>dato;
		agregarlista(lista,dato);
		cout<<"\nDesea agregar otro elemento?(s/n) ";cin>>respuesta;
	}while ((respuesta=='s')or(respuesta=='S'));
	cout<<"\nMostrando elementos de la lista\n";
	mostrarlista(lista);
	sumalista(lista);
	return 0;
}
void agregarlista(nodo *&lista, int n){
	nodo *nuevo_nodo=new nodo();
	nodo *aux;
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	
	if (lista==NULL){
		lista=nuevo_nodo;
		
	}
	else {
		aux=lista;
		while (aux->siguiente!=NULL){
			aux=aux->siguiente;
		}
		aux->siguiente=nuevo_nodo;
	}
	cout<<"filho da putas: "<<n;
}
void mostrarlista(nodo *lista){
	while(lista!=NULL){
		cout<<"->"<<lista->dato;
		lista=lista->siguiente;
	}
}
void sumalista(nodo *lista){
	int suma=0;
	while (lista!=NULL){
		suma+=lista->dato;
		lista=lista->siguiente;
	}
	cout<<"\n\nLa suma de los elementos de la lista es: "<<suma;
}































