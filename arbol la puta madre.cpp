#include <stdlib.h>
#include <iostream>
#include <conio.h>
using namespace std;
struct nodo{
	int dato;
	nodo *derecha;
	nodo *izquierda;
	nodo *padre;
};
nodo *arbol=NULL;
void insertar_arbol(nodo *&, nodo *, int);
void eliminar(nodo *, int );
nodo *crearNodo(nodo *, int);
void mostrar_arbol(nodo *, int );
bool buscar_dato(nodo *, int );
void pre_orden(nodo *);
void eliminar_nodo(nodo *);
void destruir_nodo(nodo *);
nodo *Minimo(nodo *);
void remplazar(nodo *, nodo *);
void menu();
int main(){
	menu();
	return 0;
}
void menu(){
	int dato, opcion, cont = 0;
	do{
		system("cls");
		cout<<"\t.:MENU:.\t\n";
		cout<<"Selecione una opcion:\n";
		cout<<"\n1. Ingresar un dato a Arbol.\n";
		cout<<"2. Mostrar Datos del Arbol.\n";
		cout<<"3. Buscar un elemento en ARBOL\n";
		cout<<"4. Recorrer el arbol en Pre Orden\n";
		cout<<"5. Eliminar un elemento del Arbol\n";
		cout<<"6. Salir\n";//Comando para salir
		cin>>opcion;
		switch (opcion){
			case 1: system("cls");
					cout<<"Ingrese un numero a arbol: ";cin>>dato;
					insertar_arbol(arbol,NULL, dato);
					break;
			case 2: system("cls");
					cout<<"Mostrando elementos del arbol:  \n";
					mostrar_arbol(arbol, cont);
					system ("pause");break;
			case 3: system("cls");
					cout<<"Ingrese un elemento que desee buscar: ";cin>>dato;
					if (buscar_dato(arbol,dato)==true){
						cout<<"\nEl numero "<<dato<<" si fue encontrado ";
					}
					else {
						cout<<"\nNo hay ni mierdas we ";
					}
					system("pause");break;
			case 4: system("cls");
					cout<<"Mostrando los elementos en Pre orden: \n\n";
					pre_orden(arbol);
					cout<<endl;
					system("pause");break;
			case 5: system("cls");
					cout<<"Ingrese un numeron que quieras eliminar";cin>>dato;
					eliminar(arbol,dato);
					system("pause");break;
		}
		
	}while (opcion != 8);
}
nodo *crearNodo(nodo *padre, int n){
	nodo *nuevo_nodo=new nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->derecha=NULL;
	nuevo_nodo->izquierda=NULL;
	nuevo_nodo->padre=padre;
}
void insertar_arbol(nodo *&arbol, nodo *papa, int n){
	if (arbol==NULL){
		nodo *nuevo_nodo=crearNodo(papa, n);
		arbol=nuevo_nodo;
	}
	else {
		int valor=arbol->dato;
		if (valor<n){
			insertar_arbol(arbol->derecha,arbol, n);
		}
		else{
			insertar_arbol(arbol->izquierda, arbol, n);
		}
	}
}
void mostrar_arbol(nodo *arbol, int cont){
	if (arbol==NULL){
		return;
	}
	else{
		mostrar_arbol(arbol->derecha, cont+1);
		for (int i=0;i<cont; i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrar_arbol(arbol->izquierda, cont+1);
	}
}
bool buscar_dato(nodo *arbol, int puta){
	if (arbol==NULL){
		return false;
	}
	else if (arbol->dato==puta){
		return true;
	}
	else if (puta>arbol->dato){
		return buscar_dato(arbol->derecha, puta);
	}
	else {
		return buscar_dato(arbol->izquierda, puta);
	}
}
void pre_orden(nodo *arbol){
	if (arbol==NULL){
		return;
	}
	else {
		cout<<" - "<<arbol->dato;
		pre_orden(arbol->izquierda);
		pre_orden(arbol->derecha);
	}
}
void eliminar(nodo *arbol, int n){
	if (arbol==NULL){
		return;
	}
	else if (n>arbol->dato){
		eliminar(arbol->derecha, n);
	}
	else if (n<arbol->dato){
		eliminar(arbol->izquierda, n);
	}
	else {
		eliminar_nodo(arbol);
	}
}
void eliminar_nodo(nodo *nodo_eliminar){
	if ((nodo_eliminar->derecha)&&(nodo_eliminar->izquierda)){
		nodo *menor=Minimo(nodo_eliminar->derecha);
		nodo_eliminar->dato=menor->dato;
		eliminar_nodo(menor);
	}
	else if (nodo_eliminar->izquierda){
		remplazar(nodo_eliminar, nodo_eliminar->izquierda);	
		destruir_nodo(nodo_eliminar);
	}
	else if (nodo_eliminar->derecha){
		remplazar(nodo_eliminar,nodo_eliminar->derecha);
		destruir_nodo(nodo_eliminar);
	}
	else {
		remplazar(nodo_eliminar, NULL);
		destruir_nodo(nodo_eliminar);
	}
}
nodo *Minimo(nodo *arbol){
	if (arbol==NULL){
		return NULL;
	}
	if (arbol->izquierda){
		return Minimo(arbol);
	}
	else {
		return arbol;
	}
}
void remplazar(nodo *arbol, nodo *nuevo_nodo){
	if (arbol->padre){
		if (arbol->dato==arbol->padre->izquierda->dato){
			arbol->padre->izquierda=nuevo_nodo;
		}
		else if (arbol->dato==arbol->padre->derecha->dato){
			arbol->padre->derecha=nuevo_nodo;
		}
		if (nuevo_nodo){
			nuevo_nodo->padre=arbol->padre;
		}
	}
}
void destruir_nodo(nodo *nodo){
	nodo->derecha=NULL;
	nodo->izquierda=NULL;

	delete nodo;
}













