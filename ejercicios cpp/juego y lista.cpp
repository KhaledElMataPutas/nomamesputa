#include <iostream>
#include <stdlib.h>
using namespace std;
struct datos{
	int intentos,no_juego;
	
};
struct nodo{
	datos info;
	nodo *siguiente;
};
nodo *lista=NULL;
void agregar_lista(nodo *&, datos);
void mostrar_lista(nodo *);
void borrar_lista(nodo *&,datos &);
void menu();
void juego(int);

int main(){
	menu();
	return 0;
}
void menu(){
	int opcion,juegos=0, numero=123, nu_us;
	datos jugada;
	do{
		system("cls");
		cout<<"MENU\n";
		cout<<"1.Nueva partida\n2.Mostrar las mejores jugadas\n3. Borrar el historial.\n4. Salir\n\n";
		cin>>opcion;
		switch(opcion){
			case 1: system("cls");
					nu_us=0;
					jugada.intentos=0;
					juegos++;
					while(nu_us!=numero){
						system("cls");
						cout<<"Ingrese un numero: ";cin>>nu_us;
						jugada.intentos++;
					}
					jugada.no_juego=juegos;
					cout<<"El juego termino con un total de "<<jugada.intentos<<" intentos";
					agregar_lista(lista, jugada);
					system("pause");break;
			case 2: system("cls");
					mostrar_lista(lista);
					system("pause");break;
			case 3: system("cls");
					borrar_lista(lista, jugada);
					cout<<"Lista borrada con exito\n";system("pause");
					break;
		}
	}while(opcion!=4);
}

void agregar_lista(nodo *&lista, datos informacion){
	nodo *nuevo_nodo=new nodo();
	nuevo_nodo->info=informacion;
	nodo *aux1=lista;
	nodo *aux2;
	while ((aux1!=NULL)&&(aux1->info.no_juego<informacion.no_juego)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if (lista==aux1){
		lista=nuevo_nodo;
	}
	else{
		aux2->siguiente=nuevo_nodo;
	}
	nuevo_nodo->siguiente=aux1;
}
void mostrar_lista(nodo *lista){
	nodo *actual=new nodo();
	actual=lista;
	while(actual!=NULL){
		cout<<"Partida numero "<<actual->info.no_juego<<".\nCon un total de "<<actual->info.intentos<<endl<<endl;
		actual=actual->siguiente;
	}
	cout<<" ";
}
void borrar_lista(nodo *&lista, datos &informacion){
	nodo *aux_borrar=lista;
	informacion=aux_borrar->info;
	lista=aux_borrar->siguiente;
	delete aux_borrar;
}



















