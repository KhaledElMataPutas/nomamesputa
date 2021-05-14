#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main(){
	char palabra1[20];
	char palabra2[20];
	cout<<"ingrese una palabra ";cin.getline(palabra1,20,'\n');
	cout<<endl<<"ingrese otra palabra ";cin.getline(palabra2,20,'\n');
	if (strcmp(palabra1,palabra2)==0){
		cout<<endl<<"ambas palabras son iguales";
	}
	else {
		if (strcmp (palabra1,palabra2)<0){
			cout<<"la palabra 2 es mayor";
		}
		else{
			cout<<"la palabra 1 es mayor";
		}
	}
	
	getch();
	return 0;
}
