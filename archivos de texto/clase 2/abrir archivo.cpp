#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
void anadir();
int main(){
	anadir();
	
	system("pause");
	return 0;
}
void anadir(){
	ofstream archivo;
	string texto;
	archivo.open("putaaaa.txt",ios::app);
	if (archivo.fail()){
		cout<<"fail";
	}
	cout<<"Ingrese lo que quiera agregar al texto";
	getline(cin,texto);
	archivo<<texto<<endl;
	archivo.close();
}
