#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
struct archivos{
	string nombre;
};
void escribir_archivo();
void anadir_archivo();
void leer_archivo();
void menu();
int main (){
	
	menu();
	return 0;
}
void menu(){
	int respuesta;
	string texto,nombre_archivo;
	do{
		system("cls");
		cout<<"Ingrese una opcion";
		cout<<"\n\n1. Crear un archivo.\n2. Anadir al archivo.\n3. Leer un archivo.\n4 Salir.\n\n";
		cin>>respuesta;
		switch(respuesta){	
			case 1: system("cls");
					escribir_archivo();
					break;
			case 2: system("cls");
					anadir_archivo();
					break;
			case 3: system("cls");
					leer_archivo();
					break;
		}
	}while(respuesta!=4);
}
void escribir_archivo(){
	fflush(stdin);
	ofstream archivo;
	string texto,nombre;
	cout<<"Ingrese el nombre de su archivo: ";
	getline(cin,nombre);
	archivo.open(nombre.c_str(),ios::out);
	if (archivo.fail()){
		cout<<"\nError, el desarrollador es tan inutil que no sabe hace codigo, skere\n\n";
		system("pause");
		return;
	}
	cout<<"\nIngrese un cuerpo para el archivo de texto: ";
	getline(cin,texto);
	archivo<<texto;
	archivo.close();
}
void anadir_archivo(){
	fflush(stdin);
	ofstream archivo;
	string texto, nombre;
	cout<<"Ingrese el nombre del archivo que desea modificar: ";
	getline(cin,nombre);
	archivo.open(nombre.c_str(),ios::app);
	if (archivo.fail()){
		cout<<"No hay ni madres de lo que buscas we\n\n";
		system("pause");
		return;
	}
	cout<<"\nIngrese el texto que desee agregar al archivo "<<nombre<<": ";
	getline(cin,texto);
	archivo<<texto<<endl;
	archivo.close();
}
void leer_archivo(){
	fflush(stdin);
	ifstream archivo;
	string texto,nombre;
	cout<<"Ingrese el nombre del archivo que deseea buscar: ";
	getline(cin,nombre);
	archivo.open(nombre.c_str(),ios::in);
	if (archivo.fail()){
		cout<<"Error, no existe ni madre we \n\n";
		system("pause");
		return;
	}
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<"El archivo es: "<<texto<<endl;
		system("pause");
	}
}
































