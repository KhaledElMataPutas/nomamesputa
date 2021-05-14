#include <iostream>
#include <stdlib.h>
using namespace std;
int *lista,tam,numero;
void pedirdatos();
void busqueda(int *,int);
int main(){
	pedirdatos();
	busqueda(lista,numero);
	delete[] lista;
	
	return 0;
}
void pedirdatos(){
	lista=new int [tam];
	cout<<"Ingrese un tamano de la lista: ";cin>>tam;
	for (int i=0;i<tam;i++){
		cout<<"Ingrese un numero: ";cin>>lista[i];
		
	}
	cout<<"cual numero quieres buscar? ";cin>>numero;
	
}
void busqueda(int *lista,int numero){
	int a=0;
	for (int i=0;i<tam;i++){
		if (lista[i]==numero){
			a=1;
		}
	}
	if (a==1){
		cout<<"\nSi se encontro el numero que busca "<<numero;
	}
	else {
		cout<<"No hay ni mierdas ";
	}
}
