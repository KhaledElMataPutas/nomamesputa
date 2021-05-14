#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int lista[]={3,2,1,5,4};
	int ban,i,dato;
	cout<<"introduzca un numero para buscarlo ";cin>>dato;
	ban=0;
	i=0;
	while ((ban==0)&&(i<5)){
		if (lista[i]==dato){
			ban=1;
		}
		i++;
	}
	if (ban==1){
		cout<<"si se pudo encontrar el numero que busca ";
	}
	else {
		cout<<"no se encontro una mierda ";
	}
	
	return 0;
}
