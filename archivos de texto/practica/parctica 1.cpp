#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;

struct datos{
	string nombre,telefono;
	int plan;
};
void menu();
void escribir();
void lectura();
void agregar();
int main(){
	menu();
	return 0;
}
void menu(){
	int respuesta;
	cout<<"puta";
	do{
		system("cls");
		cout<<"Ingrese una opcion: \n\n";
		cout<<"1. Ingresar datos.\n2. Mostrar datos. \n3. Agregar datos al archivo.\n4 Salir\n";
		cin>>respuesta;
		switch (respuesta){
			case 1: system("cls");
					escribir();
					break;
			case 2: system("cls");
					lectura();
					system("pause");break;
			case 3: system("cls");
					agregar();
					
					
		}
	}while(respuesta!=4);
	
}
void escribir(){
	fflush(stdin);
	ofstream archivo;
	string nombre,numero, nom;
	int plan;
	cout<<"\nIngrese el nombre del archivo: ";
	getline (cin,nom);
	archivo.open(nom.c_str(),ios::out);
	if (archivo.fail()){
		cout<<"\nError";
	}
	system("cls");
	cout<<"Ingrese los siguientes datos\n\n: ";
	cout<<"Nombre y apellido: ";
	getline(cin,nombre);
	cout<<"Ingrese su numero de telefono";
	getline(cin,numero);
	cout<<"Ingrese el plan mensual en dolares: ";cin>>plan;
	archivo.open("prueba.txt",ios::out);
	
	archivo<<"Nombre: "<<nombre<<" Numero: "<<numero<<".  Plan del usuario: "<<plan<<" Dolares al mes";
	archivo.close();
}
void lectura(){
	fflush(stdin);
	ifstream archivo;
	string texto,nombre;
	cout<<"Ingrese el nombre del archivo que desea acceder: ";
	getline (cin, nombre);
	archivo.open(nombre.c_str(),ios::in);
	if (archivo.fail()){
		cout<<"\n\nNo se pudo encontrar el archivo. ";
		return;
	}
	while (!archivo.eof()){
		getline(archivo,texto);
		cout<<"Puta"<<texto<<endl;
	}
	archivo.close();
}
void agregar(){
	fflush(stdin);
	ofstream archivo;
	string nombre,numero,arch;
	int plan;
	cout<<"ingrese el nombre del archivo que desee agregar: ";
	getline(cin,arch);
	archivo.open(arch.c_str(),ios::app);
	if (archivo.fail()){
		cout<<"\nError: no se pudo abrir el archivo";
		return;
	}
	cout<<"Ingrese el Nombre y apellido del usuario: ";
	getline(cin,nombre);
	cout<<"Ingrese el numero de telefono de "<<nombre<<": ";
	getline(cin, numero);
	cout<<"Ingrese el monto en dolares del plan mensual de "<<nombre<<": ";cin>>plan;
	archivo<<endl<<"Nombre: "<<nombre<<". Numero de telefono: "<<numero<<". Plan mensual: "<<plan<<"Dolares.";
}










































