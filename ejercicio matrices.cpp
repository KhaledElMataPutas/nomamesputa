#include <iostream>;
#include <conio.h>
using namespace std;
int main (){
	int lista[5]={1,2,3,4,5};
	int sup, med, inf, dato,n;
	n=0;
	cout<<"ingrese un numero para buscar ";cin>>dato;
	inf=0;
	sup=5;
	while (inf<=sup){
		if (lista[med]==dato){
			n=1;
			break;
		}
		if (lista[med]>dato){
			sup=med;
			med=(sup+inf)/2;
		}
		if (lista [med]<dato){
			inf=med;
			med=(inf+sup)/2;
		}
	}
		
	if (n==1){
		cout<<"aaaaaa";
	}	
	if (n!=1) {
		cout<<"basura no encontre una mierdaaaa";
	}	
	
	
	return 0;	
}
