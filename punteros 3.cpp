#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
char nombre[30];
void pedirdatos();
void conteo();
int main(){
	pedirdatos();
	conteo();
	
	return 0;
}
void pedirdatos(){
	cout<<"\nIngrese su nombre: ";cin.getline(nombre,30,'\n');
}
void conteo(){
	int a,e,i,o,u;
	while (*nombre){
		switch(*nombre){
			case 'a': a++;break;
			case 'e': e++;break;
			case 'i': i++;break;
			case 'o': o++;break;
			case 'u': u++;break;
			
		}
		
	}
	cout<<"\nLas vocales son: a"<<a<<" e"<<e<<" i"<<i<<" o"<<o<<" u"<<u;
}
