#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
void escribir();
int main(){
	
	escribir();
	system("pause");
	return 0;
}
void escribir(){
	ofstream puta;
	puta.open("puta.txt",ios::out);
	if (puta.fail()){
		cout<<"puta";
	}
	puta<<"puta";
	puta.close();
}
