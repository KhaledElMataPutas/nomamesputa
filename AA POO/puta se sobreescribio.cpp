#include <iostream>
#include <stdlib.h>
using namespace std;
class animal{
	private:
		int edad,peso;
	public:
		animal(int, int);
		virtual void comer();
};
animal::animal(int _edad,int _peso){
	edad=_edad;
	peso=_peso;
}
void animal::comer(){
	cout<<" pesa "<<peso<<" de "<<edad<<" anos, come";
}
class humano : public animal{
	private:
		string nombre;
	public:
		humano(int, int, string);
		void comer();
};
humano::humano(int _edad, int _peso, string _nombre) : animal(_edad, _peso){
	nombre=_nombre;
}
void humano::comer(){
	cout<<"El humano llamado "<<nombre;
	animal::comer();
}
class perro : public animal{
	private:
		string raza;
	public:
		perro(int, int, string);
		void comer();
};
perro::perro (int _edad, int _peso, string _raza) : animal (_edad, _peso){
	raza=_raza;
}
void perro::comer(){
	cout<<"el perro de raza "<<raza;
	animal::comer();
}
int main (){
	animal *a1=new humano(16,74, "Khaled");
	a1->comer();
	animal *a2=new perro(12, 45, "dobberman");
	cout<<endl;
	a2->comer();
	
	return 0;
}
















