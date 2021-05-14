#include <iostream>;
#include <math.h>;
using namespace std;
int main(){
	int lista[100];
	int limite, i;
	int lista2[100];
	cout<<"introduzca un limite para la lista ";cin>>limite;
	for(i=0; i<limite;i++){
		cout<<"ingrese un termino para el vector o lista ";cin>>lista[i];
	}	
	for (i=0;i<limite;i++){
		lista2[i]=lista[i]*2;
		cout<<endl<<lista2[i];
	}
	
	
	return 0;
}
