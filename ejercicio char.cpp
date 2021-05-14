#include <iostream>
#include <conio.h>
using namespace std;
int num_mayor(int lista[3]);
int main(){
	int numero_may;
	int numeros[3];
	for (int i=0;i<3;i++){
		cout<<"\nIngrese un numero: ";cin>>numeros[i];
		
	}
	numero_may=num_mayor(numeros);
	cout<<endl<<numero_may;
	getch();
	return 0;
}
num_mayor(int lista[3]){
	int mayor=0;
	for (int i=0;i<3;i++){
		if (lista[i]>mayor){
			mayor=lista[i];
		}
	}
	return mayor;	
}
