#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct nodo{
	int dato;
	nodo *derecha;
	nodo *izquierda;
};
nodo *crear_nodo(int );
void insertarnodo(nodo *&, int);
nodo *arbol=NULL;
void menu();
int main(){
	
	menu();
	return 0;
}
void menu(){
	int dato, respuesta;
	do{
		system("cls");
		cout<<"\tMENU\t\nIngrese una opcion:\n\n1.Ingresar datos\n2. salir.\n";cin>>respuesta;
		switch (respuesta){
			case 1: system("cls");
					cout<<"Ingrese un dato que desee agregar al ARBOL: ";cin>>dato;
					insertarnodo(arbol, dato);
		}
		
	}while (respuesta!=2);
}
void insertarnodo(nodo *&arbol,int n){
	if (arbol==NULL){
		nodo *nuevo_nodo=crear_nodo(n);
		arbol=nuevo_nodo;
	}
	else{
		int valor_raiz=arbol->dato;
		if (n<valor_raiz){
			insertarnodo(arbol->izquierda,n);
		}
		else{
			insertarnodo (arbol->derecha,n);
		}
	}
}
nodo *crear_nodo (int n){
	nodo *nuevo_nodo=new int();
	nuevo_nodo->dato=n;
	nuevo_nodo->derecha=NULL;
	nuevo_nodo->izquierda=NULL;
	return nuevo_nodo;	
}
















