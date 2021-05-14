#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
void lectura();
int main (){
	
	lectura();
	system("pause");
	return 0;
}
void lectura(){
	ifstream archivo;
	string texto;
	archivo.open("putaaaa.txt",ios::in);
	if (archivo.fail()){
		cout<<"fail";
	}
	while (!archivo.eof()){
		getline(archivo,texto);
		cout<<texto;
	}
	archivo.close();
}
