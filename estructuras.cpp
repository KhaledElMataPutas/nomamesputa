#include <iostream>;
#include <conio.h>;
using namespace std;
struct datos_usuario{
	char nombre[30];
	int edad,numtlf;
};
struct empleado {
	char rol[30];
	struct datos_usuario datos;
	char local[30];

} empleados[3];

int main (){
	int y;
	for (int i=0;i<3;i++){
		fflush(stdin);
		y=i+1;
		cout<<"\nIntroduzca nombre del trabajador "<<y<<" ";cin.getline(empleados[i].datos.nombre,30,'\n');
		cout<<"Introduzca el local en el que trabaja el empleado "<<y<<" ";cin.getline(empleados[i].local,30,'\n');
		cout<<"Introduzca el rol que posee el empleado "<<y<<" en la empresa: ";cin.getline(empleados[i].rol,30,'\n');
		
	}
	cout<<endl<<"Los datos de los empleados introducidos son: ";
	for (int i=0;i<3;i++){
		cout<<endl<<"nombre del empleado "<<y<<" "<<empleados[i].datos.nombre<<endl;
		cout<<"Local en el que trabaja el empleado "<<empleados[i].datos.nombre<<": "<<empleados[i].local<<endl;
		cout<<"Rol del empleado "<<empleados[i].datos.nombre<<" en la empresa: "<<empleados[i].rol<<endl;	
	}
	
	getch();
	return 0;
}
