#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;

void escribir();
int main(){
	
	escribir();

	system("pause");
	return 0;
}
void escribir(){
	ofstream puta;
	string nombre,frase;
	cout<<"Digite el nombre de su archivo: ";
	getline(cin, nombre);
	puta.open(nombre.c_str(),ios::out);
	if (puta.fail()){
		cout<<"puta";
	}
	cout<<"\nIngrese el cuerpo del texto: ";
	getline(cin,frase);
	puta<<frase;
	puta.close();
}
