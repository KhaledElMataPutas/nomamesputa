#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct prome{
	float nota1,nota2,nota3,prom_notas;
};
struct alumno{
	char nombre[20];
	struct prome notas;
	
}alumnos[100];
int main(){
	float mayor=0,menor=9999,prom_total;
	int cantidad,a,b;
	cout<<"ingrese una cantidad de alumnos a evaluar: ";cin>>cantidad;
	for (int i=0;i<cantidad;i++){
		fflush(stdin);
		cout<<endl;
		cout<<"ingrese el nombre del alumno: "<<i+1<<": ";cin.getline(alumnos[i].nombre,20,'\n');
		cout<<"Ingrese las notas del alumno: \nNota 1 : ";cin>>alumnos[i].notas.nota1;
		cout<<"Nota 2 : ";cin>>alumnos[i].notas.nota2;
		cout<<"Nota 3 : ";cin>>alumnos[i].notas.nota3;
		alumnos[i].notas.prom_notas=(alumnos[i].notas.nota1+alumnos[i].notas.nota3+alumnos[i].notas.nota2)/3;
		cout<<"el promedio del alumno "<<i+1<<" es: "<<alumnos[i].notas.prom_notas;
		if (alumnos[i].notas.prom_notas>mayor){
			mayor=alumnos[i].notas.prom_notas;
			a=i;
		}
		if (alumnos[i].notas.prom_notas<menor){
			menor = alumnos[i].notas.prom_notas;
			b=i;
			cout<<"\naaaaaaaaa\n";
		}
		fflush(stdin);
	}
	cout<<endl<<"la nota mayor es del alumno "<<a+1<<" llamado "<<alumnos[a].nombre<<" con un promedio de "<<mayor<<endl;
	cout<<"Por otra parte, el alumno "<<b+1<<" llamado "<<alumnos[b].nombre<<" es el del menor promedio, con un total de "<<menor<<" putos";
	getch();
	return 0;
}
