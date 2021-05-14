#include <iostream>
#include <stdlib.h>
using namespace std;
class animal{
	private:
		int edad;
		string alimentacion;
		string nombre;
	public:
		animal(int,string,string);
		void comer();
		void nacer();
};
animal::animal(int _edad,string _alimentacion,string _nombre){
	edad=_edad;
	alimentacion=_alimentacion;
	nombre=_nombre;
}
void animal::comer(){
	cout<<"comer";
}
void animal::nacer(){
	cout<<"ni modo, sale nacer";
}
int main(){
	animal a1=animal(12,"carne", "a");
	a1.comer();
}
