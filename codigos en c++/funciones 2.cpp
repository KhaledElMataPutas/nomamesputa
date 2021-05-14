#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
struct puta{
	char dato;
	puta *siguiente;
};
void agregar_pi(puta *&,char);
void borrar_pi(puta *&,char &);
int main (){
	char dato[20];
	puta *pila=NULL;
	char respuesta;
	do {
		cout<<"\nIntroduzca un dato ";cin.getline(dato,20,'\n');
		agregar_pi(pila,dato[20]);
		fflush(stdin);
		cout<<"desea agregar otro dato (s/n)";cin>>respuesta;
		
		fflush(stdin);
	}while((respuesta=='s')||(respuesta=='S'));
	cout<<"\n--------------------------------------\nBorrando datos\n--------------------------------------\n";
	while (pila!=NULL){
		borrar_pi(pila,dato[20]);
		if (pila!=NULL){
			cout<<dato<<",";
		}
		else {
			cout<<dato<<".";
		}
	}
	
	return 0;
}
void agregar_pi(puta *&pila, char palabra){
	puta *nueva_puta=new puta();
	nueva_puta->dato=palabra;
	nueva_puta->siguiente=pila;
	pila=nueva_puta;
	
}
void borrar_pi(puta *&pila, char &palabra){
	puta *aux=pila;
	palabra=aux->dato;
	pila=aux->siguiente;
	delete aux;
	
}
