#include <iostream>
#include <conio.h>
using namespace std;
struct puta{
	int dato;
	puta *siguiente;
};
void agregar_pi(puta *&,int);
void borrar_pi(puta *&,int &);
int main (){
	int dato;
	puta *pila=NULL;
	char respuesta;
	do {
		cout<<"\nIntroduzca un dato ";cin>>dato;
		agregar_pi(pila,dato);
		cout<<"desea agregar otro dato (s/n)";cin>>respuesta;
		
		
	}while((respuesta=='s')||(respuesta=='S'));
	cout<<"\n--------------------------------------\nBorrando datos\n--------------------------------------\n";
	while (pila!=NULL){
		borrar_pi(pila,dato);
		if (pila!=NULL){
			cout<<dato<<",";
		}
		else {
			cout<<dato<<".";
		}
	}
	
	return 0;
}
void agregar_pi(puta *&pila, int palabra){
	puta *nueva_puta=new puta();
	nueva_puta->dato=palabra;
	nueva_puta->siguiente=pila;
	pila=nueva_puta;
	
}
void borrar_pi(puta *&pila,int &palabra){
	puta *aux=pila;
	palabra=aux->dato;
	pila=aux->siguiente;
	delete aux;
	
}




