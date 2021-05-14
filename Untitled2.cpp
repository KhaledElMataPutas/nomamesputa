#include <iostream>
#include <conio.h>
using namespace std;
struct nodo {
	int dato;
	nodo *derecho;
	nodo *izquierdo;	
};
nodo *arbol=NULL;
nodo *crear_nodo(int);
void mostrarArbol(nodo *,int);
void menu();
void insertarnodo(nodo *&, int);
int main(){
	
	menu();
	return 0;
}
nodo *crear_nodo (int n){
	nodo *nuevo_nodo=new nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->derecho=NULL;
	nuevo_nodo->izquierdo=NULL;
	return nuevo_nodo;
}
void insertarnodo(nodo *&arbol,int n){
	if (arbol==NULL){
		nodo *nuevo_nodo=crear_nodo(n);
		arbol=nuevo_nodo;
	}
	else{
		int valor_raiz=arbol->dato;
		if (n<valor_raiz){
			insertarnodo(arbol->izquierdo,n);
		}
		else{
			insertarnodo(arbol->derecho,n);
		}
	}
}
void menu(){
	int dato, respuesta, contador=0;
	do{
		system("cls");
		cout<<"MENU\nIngrese una opcion:\n\n1. Insertar datos.\n2. Mostrar datos.\n3. Salir.\n";cin>>respuesta;
		switch (respuesta){
			case 1: system ("cls");
					cout<<"Digite un elemento: ";cin>>dato;
					insertarnodo (arbol,dato);break;
			case 2: system("cls");
					cout<<"Mostrando el arbol...\n";
					mostrarArbol(arbol,contador);
					cout<<endl;
					system("pause");break;
		}
		
	}while (respuesta!=3);
}
void mostrarArbol (nodo *arbol, int cont){
	if (arbol==NULL){
		return;
	}	
	else{
		mostrarArbol(arbol->derecho,cont+1);
		for(int i=0;i<cont;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izquierdo,cont+1);
	}
}













