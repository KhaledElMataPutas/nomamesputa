#include<iostream>
#include <stdlib.h>
using namespace std;

//Clase persona
class persona{
	private:
		string nombre;
		int edad;
	public:
		persona(string, int);
		void mostrar_datos();
};
persona::persona(string _nombre,int _edad){
	edad=_edad;
	nombre=_nombre;
}
void persona::mostrar_datos(){
	cout<<"Nombre "<<nombre<<" edad: "<<edad; 
}

//Clase alumno
class alumno : public persona{
	private:
		string colegio;
		int nota;
	public:
		alumno(string,int,string,int);
		void mostrar_alumno();
};
alumno::alumno(string _nombre,int _edad,string _colegio,int _nota) : persona(_nombre, _edad){
	colegio=_colegio;
	nota=_nota;
}
void alumno::mostrar_alumno(){
	mostrar_datos();
	cout<<endl<<"colegio: "<<colegio<<endl<<"Notas: "<<nota;
}

//clase empleado
class empleado : public persona{
	private:
		string compania;
		int sueldo_mensual;
	public:
		empleado (string, int, string, int);
		void mostrar_empleado();
}; 
empleado::empleado(string _nombre, int _edad, string _compania, int _sueldo_mensual) : persona(_nombre, _edad){
	compania=_compania;
	sueldo_mensual=_sueldo_mensual;
}
void empleado::mostrar_empleado(){
	mostrar_datos();
	cout<<"\nCompania: "<<compania<<endl<<"Sueldo mensual: "<<sueldo_mensual<<" en dolares";
}

//universitario
class universitario : public alumno{
	private:
		string universidad,carrera;
	public:
		universitario(string ,int, string, int, string, string);
		void mostrar_universitario();
};
universitario::universitario(string _nombre, int _edad, string _colegio, int _nota, string _universidad, string _carrera):alumno(_nombre,_edad,_colegio,_nota){
	universidad=_universidad;
	carrera=_carrera;
}
void universitario::mostrar_universitario(){
	mostrar_alumno();
	cout<<"\nUniversidad: "<<universidad<<"\nCarrera:"<<carrera;
}

int main(){
	alumno a1("Khaled",20,"CSAP",13);
	a1.mostrar_alumno();
	cout<<endl<<endl;
	empleado e1("Omar",19,"charlotte ice", 1000);
	e1.mostrar_empleado();
	cout<<endl<<endl;
	universitario u1("walid", 18, "CSAP", 14, "UCAB", "INgenieria");
	u1.mostrar_universitario();
	
	
	return 0;
}
