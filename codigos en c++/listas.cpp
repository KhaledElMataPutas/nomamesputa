#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct nodo{
	int dato;
	nodo *siguiente;	
};
void menu();
void eliminarnodo (nodo *&, int);
void insertarlista (nodo *&, int);
void mostrarlista (nodo *);
void buscarlista (nodo *, int);
nodo *lista=NULL;
int main(){
	
	menu();
	return 0;
}
void insertarlista(nodo *&lista, int n){
	nodo *nuevo_nodo = new nodo();
	nuevo_nodo->dato = n;
	nodo *aux1 = lista;
	nodo *aux2;
	while ((aux1!=NULL)&&(aux1->dato<n)){
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	if (lista==aux1){
		lista=nuevo_nodo;
	}
	else {
		aux2->siguiente=nuevo_nodo;
	}
	nuevo_nodo->siguiente=aux1; 
	cout<<"\nElemento "<<n<<" insertado a lista correctamente ";
}
void mostrarlista (nodo *lista){
	nodo *actual=new nodo ();
	actual = lista;
	while (actual!=NULL){
		cout<<actual->dato<<"->";
		actual=actual->siguiente;
	}	
}
void menu(){
	int opcion,dato;
	
	do {
		cout<<"MENU \n1. Insertar elemenots a la lista\n2. Mostrar elemnetos de la lista \n3. Buscar un elemento \n4. Borrar un nodo de la lista\n5. Salir.";
		cout<<"\nOpcion: ";cin>>opcion;
		switch (opcion){
			case 1: system("cls");cout<<"\nDigite un numero ";cin>>dato;
					insertarlista (lista,dato);
					break;
			case 2: mostrarlista(lista);
					cout<<endl;
					system("pause");
			break;
			case 3: system("cls");
					cout<<"Digite un numero para buscar en LISTA: ";cin>>dato;
					cout<<endl;
					buscarlista(lista, dato);
					system ("pause");
					break;
			case 4: system("cls");
					cout<<"digite un elemento a eliminar ";cin>>dato;
					eliminarnodo(lista,dato);
					cout<<"\n";
					system("pause");
		}
		system("cls");	
	}while(opcion!=5);

}
void buscarlista (nodo *lista,int n){
	bool bandera=false;
	nodo *actual=new nodo();
	actual=lista;
	while ((actual!=NULL)&&(actual->dato<=n)){
		if (actual->dato==n){
			bandera=true;
		}
		actual=actual->siguiente;
	}
	if (bandera==true){
		cout<<"\nEl elemento "<<n<<" SI a sido encontrado en LISTA\n";
	}
	else{
		cout<"No se encontro una jara";
	}
}
void eliminarnodo (nodo *&lista, int n){
	if (lista!=NULL){
		cout<<"\nse esta";
		nodo *aux_borrar;
		nodo *anterior=NULL;
		aux_borrar=lista;
		while ((aux_borrar!=NULL)&&(aux_borrar->dato!=n)){
			anterior=aux_borrar;
			aux_borrar=aux_borrar->siguiente;	
		}
		if (aux_borrar==NULL){
			cout<<"No hay ni mierdas que borrar";
		}
		else if (anterior==NULL){
			lista=lista->siguiente;
			aux_borrar=NULL;
		}
		else {
			anterior->siguiente=aux_borrar->siguiente;
			delete aux_borrar;
		}
	}
}






