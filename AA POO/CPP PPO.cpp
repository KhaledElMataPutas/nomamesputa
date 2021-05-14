#include <iostream>
#include <stdlib.h>
#include<conio.h>;
using namespace std;

class persona {
	private :
		int edad;
		string nombre;
	public :
		void leer();
		void correr();
		persona(int, string);
};
persona::persona(int _edad,string _nombre){
	edad=_edad;
	nombre=_nombre;
}
void persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo una puta mierda";
}
void persona::correr(){
	cout<<"Soy "<<nombre<<" y corro una mierda";
}
int main(){
	persona p1=persona(20, "Jale");
	p1.correr();
	cout<<endl;
	p1.leer();
	return 0;
}
