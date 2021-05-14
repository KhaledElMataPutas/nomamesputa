#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct nodo{
	int dato;
	nodo *siguiente;
};
nodo *lista=NULL;
void agregarlistaa(nodo *&,int);
void eliminarnodo (nodo *&, int);
void mostrarlista (nodo *);
void buscarlista (nodo*, int);
void eliminarlista(nodo *&,int &);
void menu();
int main (){
	
	menu();
	
	return 0;
}
void menu(){
	int dato,res;
	do{
		system ("cls");
		cout<<"	__Menu__\n Ingrese una opcion: ";
		cout<<"\n\n1. Ingresar un dato a LISTA\n2. Eliminar un dato de LISTA\n3. Buscar un dato de LISTA\n4. Mostrar datos de la LISTA\n5. eliminar TODA la lista\n6. Salir\n";
		cin>>res;
		switch (res){
			case 1: system("cls");
					cout<<"Ingrese un numero: ";cin>>dato;
					agregarlistaa (lista, dato);system("pause");break;
			case 2: system("cls");
					cout<<"ingrese un dato que desee eliminar: ";cin>>dato;
					eliminarnodo (lista, dato);system("pause");break;
			case 3: system ("cls");
					cout<<"Ingrese un dato para buscarlo en lista: ";cin>>dato;
					buscarlista(lista, dato);
					system ("pause");break;
			case 4: system ("cls");
					cout<<"Mostrando lista...\n";
					mostrarlista(lista);system("pause");break;
			case 5: while (lista!=NULL){
					cout<<" eliminando "<<dato;
					eliminarlista(lista,dato);
					}
					cout<<endl;
					system("pause");
					break;
					
		}
		
	}while (res!=6);
}
void agregarlistaa (nodo *&lista, int n){
	nodo *nuevo_nodo=new nodo();
	nuevo_nodo->dato=n;
	nodo *aux1=lista;
	nodo *aux2;
	while ((aux1!=NULL)&&(aux1->dato<n)){
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
	cout<<"\nEl numero "<<nuevo_nodo->dato<<" fue introducido en LISTA\n";
}
void eliminarnodo(nodo *&lista,int n){
	if (lista!=NULL){
		
		nodo *auxborrar;
		nodo *anterior=NULL;
		auxborrar=lista;
		while ((auxborrar!=NULL)&&(auxborrar->dato!=n)){
			anterior=auxborrar;
			auxborrar=auxborrar->siguiente;
			cout<<"Puta";
		}
		if (auxborrar==NULL){
			cout<<"\nNo hay ni madres que borrar we";
		}
		else if (anterior==NULL){
			lista=lista->siguiente;
			auxborrar=NULL;
			cout<<"Se borro con exito "<<n<<".";
		}	
		else{
			anterior->siguiente=auxborrar->siguiente;
			delete auxborrar;
			cout<<"Se borro con exito "<<n<<".";
		}
	}
}
void buscarlista (nodo *lista, int n){
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
		cout<<"\nEl dato "<<n<<" a sido encontrado\n";
	}
	else {
		cout<<"\nNo hay ni madres wn \n";
	}
}
void mostrarlista(nodo *lista){
	nodo *actual=new nodo();
	actual=lista;
	while (actual!=NULL){
		cout<<"->"<<actual->dato;
		actual=actual->siguiente;
	}
	cout<<" ";
}
void eliminarlista (nodo *&lista,int &n){
	nodo *aux=lista;
	n=aux->dato;
	lista=aux->siguiente;
	delete aux;
}



