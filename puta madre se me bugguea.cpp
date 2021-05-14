#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
struct vivienda{
	char direccion[30];
	int casa_o_edif;
	
};
struct estudiantes{
	char nombre[30];
	int nota, edad;
	struct vivienda vida;
}alumnos [3];
int main (){
	int i,y,mayor,a;
	mayor=0;
	
	for (i=0;i<3;i++){
		fflush(stdin);
		y=i+1;
		cout<<endl<<"Ingrese el nombre del alumno "<<y<<": ";cin.getline(alumnos[i].nombre,30,'\n');
		cout<<"Ingrese los datos de la vivienda del alumno "<<y<<": "<<"\nDireccion: ";cin.getline(alumnos[i].vida.direccion,30,'\n');
		cout<<"Ingrese numero 1 si vive en casa, numero 2 si vive en apartamento: ";cin>>alumnos[i].vida.casa_o_edif;
		
		
		cout<<"\nIngrese promdio del alumno: ";cin>>alumnos[i].nota;
		if (alumnos[i].nota>mayor){
			mayor=alumnos[i].nota;
			a=i;
			cout<<"NNNNNNul"<<a;
		}
		fflush(stdin);
	}
	cout<<"\nla nota mayor es el alumno "<<(a+1)<<"llamado "<<alumnos[a].nombre<<" con un promedio de "<<alumnos[a].nota<<endl;
	cout<<"Vive en "<<alumnos[a].vida.direccion;
	if (alumnos[a].vida.casa_o_edif==1){
		cout<<" en una quinta jugosa";
		
	}
	else if (alumnos[a].vida.casa_o_edif==2){
	cout<<" ive en un apartamento iguuuu";	
		
		
		
		
	}
	
}
