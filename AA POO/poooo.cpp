#include <iostream>
#include <stdlib.h>
using namespace std;
class perro{
	private:
		string raza,nombre;
		int edad;
	public:
		void setPerro(string, string,int);
		string get_raza();
		string get_nombre();
		void imprimir();
};
void perro::setPerro(string _raza,string _nombre,int _edad){
	raza=_raza;
	nombre=_nombre;
	edad=_edad;
}
string perro::get_raza(){
	return raza;
}
string perro::get_nombre(){
	return nombre;
}
void perro::imprimir(){
	cout<<"El perro se llama: "<<nombre<<" es de raza: "<<raza<<" y tiene "<<edad;
}
int main(){
	string nombre,raza;
	int anos;
	perro p1;
	cout<<"Ingrese el nombre del perro: ";
	getline(cin,nombre);
	cout<<"Ingrese la raza de "<<nombre<<": ";
	getline(cin,raza);
	cout<<"Ingrese la edad de: "<<nombre<<": ";cin>>anos;
	p1.setPerro(raza,nombre,anos);
	cout<<endl<<endl;
	p1.imprimir();
	return 0;
}

