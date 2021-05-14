#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct persona{
	char nombre [20];
	int edad;
	int Discapacidad;
}gente [100];
struct persona_dis{
	char nombre [20];
	int edad;
}gente_dis[100];
int main (){
	int i,a=0,b,personas;
	int per_dis,aux_dis;
	char si[]="si";
	char no[]="no";
	cout<<"introduzca un numero de personas a evaluar ";cin>>personas;
	for (i=0;i<personas;i++){
		fflush(stdin);
		cout<<"introduzca el nombre de la persona "<<i+1<<": ";cin.getline(gente[i].nombre,20,'\n');
		cout<<"Ingrese la edad de "<<gente[i].nombre<<": ";cin>>gente[i].edad;
		cout<<gente[i].nombre<<" posee alguna discapacidad?(1 para si, 0 para no): ";cin>>gente[i].Discapacidad;
			
		
		if (gente[i].Discapacidad==1){
			if (aux_dis==0){
				aux_dis++;
				strcpy(gente_dis[a].nombre,gente[i].nombre);
				gente_dis[a].edad=gente[i].edad;
				cout<<endl<<"a";
			}
			else if (gente[i].Discapacidad==0){
				aux_dis++;
				a++;
				strcpy(gente_dis[a].nombre,gente[i].nombre);
				gente_dis[a].edad=gente[i].edad;
					
			}	
			else {
				cout<<"Puta madre no elegiste";
			}		
		}
	
		fflush(stdin);
	}
	cout<<"\nhay un total de "<<aux_dis<<" personas discapacitadas"<<endl;
	for (b=0;b<aux_dis;b++){
		cout<<endl<<"Nombre: "<<gente_dis[b].nombre<<"\nEdad: "<<gente_dis[b].edad<<endl;
	}
	getch();
	return 0;
}

