#include <iostream>
#include <conio.h>
using namespace std;
void primo(int);
int main(){
	int numero,*di_num;
	cout<<"ingrese un numero ";cin>>numero;
	di_num=&numero;
	primo(*di_num);
	
	getch();
	return 0;
}
void primo(int numero){
	int a=0;
	for (int i=2;i<numero;i++){
		if (numero%i==0){
			a=1;
		}
	
	}
	if (a==0){
		cout<<"el nunmero es primo JAJAJAJ ";
	}
	else {
		cout<<"no es primo";
	}
}
