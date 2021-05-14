#include <iostream>
#include <stdlib.h>
using namespace std;
class persona{
	private:
		string nombre;
		int edad;
	public:
		persona (string, int);
		virtual void mostrar();
};
persona::persona(string _nombre, int _edad){
	nombre=_nombre;
	edad=_edad;
}
void persona::mostrar(){
	cout<<"Nombre: "<<nombre<<"\nEdad: "<<edad;
}
class alumno : public persona{
	private:
		int notas;
	public:
		alumno(string, int, int);
		void mostrar();
};
alumno::alumno(string _nombre, int _edad, int _notas) : persona (_nombre, _edad){
	notas=_notas;
}
void alumno::mostrar(){
	persona::mostrar();
	cout<<"\nSus notas son: "<<notas;
}

class profesor : public persona{
	private:
		string materia;
	public:
		profesor(string, int, string);
		void mostrar();
};
profesor::profesor(string _nombre, int _edad, string _materia) : persona(_nombre, _edad){
	materia=_materia;
}
void profesor::mostrar(){
	persona::mostrar();
	cout<<"\nEl profesor da clases de "<<materia;
}

int main (){
	persona *vector[3];
	vector [0]=new alumno("Khaled",20,15);
	vector[0]->mostrar();
	cout<<endl;
	vector[1]=new profesor("Omar",23, "Matematica");
	vector[1]->mostrar();
	
	return 0;
}

















