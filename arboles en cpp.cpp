#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct nodo {
	int dato;
	nodo *derecho;
	nodo *izquierdo;
	nodo *padre;	
};
nodo *arbol=NULL;
nodo *crear_nodo(int, nodo *);
void preOrden (nodo *);
void mostrarArbol(nodo *,int);
void menu();
void insertarnodo(nodo *&, int, nodo *);
bool buscarDato (nodo *, int);
void inOrden(nodo *);
void postOrden(nodo *);
void eliminar(nodo *, int);
void eliminar_nodo(nodo*);
void remplazar (nodo *, nodo *);
void destruir(nodo *);
nodo *minimo(nodo *);
int main(){
	
	menu();
	return 0;
}
nodo *crear_nodo (int n, nodo *papa){
	nodo *nuevo_nodo=new nodo();
	nuevo_nodo->dato=n;
	nuevo_nodo->derecho=NULL;
	nuevo_nodo->izquierdo=NULL;
	nuevo_nodo->padre=papa;
	return nuevo_nodo;
}
void insertarnodo(nodo *&arbol,int n, nodo *papa){
	if (arbol==NULL){
		nodo *nuevo_nodo=crear_nodo(n,papa);
		arbol=nuevo_nodo;
	}
	else{
		int valor_raiz=arbol->dato;
		if (n<valor_raiz){
			insertarnodo(arbol->izquierdo,n,arbol);
		}
		else{
			insertarnodo(arbol->derecho,n,arbol);
		}
	}
}
void menu(){
	int dato, respuesta, contador=0;
	do{
		system("cls");
		cout<<"MENU\nIngrese una opcion:\n\n1. Insertar datos.\n2. Mostrar datos.\n3. Buscar un dato en especifico.\n4. preOrdenar el arbol.\n5. Recorrer el arbol in Orden.\n";
		cout<<"6. Recorrer el arbol en Post-Orden.\n";
		cout<<"7. Eliminar un nodo del Arbol.\n8. Salir\n";cin>>respuesta;
		switch (respuesta){
			case 1: system ("cls");
					cout<<"Digite un elemento: ";cin>>dato;
					insertarnodo (arbol,dato,NULL);break;
			case 2: system("cls");
					cout<<"Mostrando el arbol...\n";
					mostrarArbol(arbol,contador);
					cout<<endl;
					system("pause");break;
			case 3: system("cls");
					cout<<"Que elemento desea buscar? ";cin>>dato;
					if (buscarDato(arbol,dato)==true){
						cout<<"\nel elemento "<<dato<<" si esta en Arbol\n";
					}
					else{
						cout<<"\nPuta\n";
					}
					system("pause");break;
			case 4: system("cls");
					cout<<"Recorriendo el arbol:\n";
					preOrden(arbol);cout<<endl<<endl;
					system("pause");break;
			case 5: system("cls");
					cout<<"recorriendo en inOrden\n";
					inOrden(arbol);
					cout<<endl;
					system("pause");break;
			case 6: system("cls");
					cout<<"Recorriendo el arbol en Post-Orden:  ";
					postOrden(arbol);
					cout<<endl;
					system("pause");break;
			case 7: system("cls");
					cout<<"Ingrese un dato que desee eliminar: ";cin>>dato;
					eliminar(arbol, dato);
					break;
		}
		
	}while (respuesta!=8);
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
bool buscarDato (nodo *arbol, int dato){
	if (arbol==NULL){
		return false;
	}
	else if (arbol->dato==dato){
		return true;
	}
	else if(arbol->dato<dato){
		buscarDato(arbol->izquierdo,dato);
	}
	else{
		buscarDato(arbol->derecho,dato);
	}
}
void preOrden(nodo *arbol){
	if (arbol==NULL){
		return;
	}
	else{
		cout<<arbol->dato<<" - ";
		preOrden(arbol->izquierdo);
		preOrden(arbol->derecho);
	}
}
void inOrden(nodo *arbol){
	if (arbol==NULL){
		return;
	}
	else {
		inOrden(arbol->izquierdo);
		cout<<arbol->dato<<"  -  ";
		inOrden(arbol->derecho);
	}
}
void postOrden(nodo *arbol){
	if (arbol==NULL){
		return;
	}
	else{
		postOrden(arbol->izquierdo);
		postOrden(arbol->derecho);
		cout<<" - "<<arbol->dato;
	}
}
void eliminar(nodo *arbol, int n){//eliminar nodo del arbol
	if (arbol==NULL){
		return;
	}	
	else if (n<arbol->dato){
		eliminar(arbol->izquierdo,n);
	}
	else if (n>arbol->dato){
		eliminar(arbol->derecho,n);
	}
	else {//Si encontraron el valor a norrar
		eliminar_nodo(arbol);
	}
}
void eliminar_nodo(nodo *nodo_eliminar){
	if (nodo_eliminar->izquierdo&&nodo_eliminar->derecho){//si el nodo tiene hijo izq e hijo der
		nodo *menor=minimo(nodo_eliminar);
		nodo_eliminar->dato=menor->dato;
		eliminar_nodo(menor);
	}
	else if (nodo_eliminar->izquierdo){
		remplazar (nodo_eliminar, nodo_eliminar->izquierdo);
		destruir(nodo_eliminar);
	}
	else if (nodo_eliminar->derecho){
		remplazar(nodo_eliminar,nodo_eliminar->derecho);
		destruir(nodo_eliminar);
	}
	else { //si el nodo no tiene hijos, un nodo hoja
		remplazar(nodo_eliminar,NULL);
		destruir(nodo_eliminar);
	}
}
nodo *minimo(nodo *arbol){//funcion para determinar el nodo mas izquierdo posible
	if (arbol==NULL){
		return NULL;
	}
	if (arbol->izquierdo){//si tiene hijo izquierdo buscara por la izquierda
		return minimo(arbol->izquierdo);
	}
	else{
		return arbol;
	}
}
void remplazar(nodo *arbol, nodo *nuevo_nodo){
	if (arbol->padre){
		if (arbol->dato==arbol->padre->izquierdo->dato){
			arbol->padre->izquierdo=nuevo_nodo;
		}													//Estas condicionales es para saber si el nodo que queremos remplazar esta en el lado iz o der
		else if (arbol->dato==arbol->padre->derecho->dato){
			arbol->padre->derecho=nuevo_nodo;
		}
	}
	if (nuevo_nodo){
		nuevo_nodo->padre=arbol->padre;
	}
}
void destruir (nodo *nodo){
	nodo->derecho=NULL;
	nodo->izquierdo=NULL;
	delete nodo;
}




