#include <iostream>;
#include <math.h>;
using namespace std;
int main(){
	float x,y,funcion=0 ;
	cout<<"introduzca un numero ";cin>>x;
	cout<<"\nintroduzca otro numero ";cin>>y;
	funcion = (sqrt(x))/(pow(y,2)-1);
	cout<<"el resultado de la funcion es:  "<<funcion;
	
	
	return 0;
}
