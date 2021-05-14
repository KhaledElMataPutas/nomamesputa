#include <iostream>;
using namespace std;
int main(){
	int horas=0, contador=0, temperatura, temperatura1,temperatura2,temperatura3,temperatura4,temperatura5,temperatura6, mayor,menor;
	cout<<"temperatura global"<<endl;
	while (horas<24){
	horas+=1;cout<<horas<<endl;
	if (horas%4==0){
		contador+=1;
		cout<<"puta"<<contador<<endl;
		switch (contador){
			case 1:cout<<"\ningrese una temperatura ";cin>>temperatura1;break;
			case 2:cout<<"\ningrese una temperatura ";cin>>temperatura2;
			if (temperatura2>temperatura1){
				mayor=temperatura2;
				menor=temperatura1;
			}
			else{
				menor=temperatura2;
				mayor=temperatura1;
			}
			break;
			case 3:cout<<"\ningrese una temperatura ";cin>>temperatura3;
			if (temperatura3>mayor){
				mayor=temperatura3;
				
			}
			else if(temperatura3<menor){
				menor=temperatura3;
			}
		
			break;
			case 4:cout<<"\ningrese una temperatura ";cin>>temperatura4;
			if (temperatura4>mayor){
				mayor=temperatura4;
				
			}
			else if(temperatura4<menor){
				menor=temperatura4;
			}
			break;
			case 5:cout<<"\ningrese una temperatura ";cin>>temperatura5;
			if (temperatura5>mayor){
				mayor=temperatura5;
				
			}
			else if(temperatura5<menor){
				menor=temperatura5;
			}
			break;
			case 6:cout<<"\ningrese una temperatura ";cin>>temperatura6;
			if (temperatura6>mayor){
				mayor=temperatura6;
				
			}
			else if(temperatura6<menor){
				menor=temperatura6;
			}
			break;
			default:break;
		}
	
	
	}
	
	
	
	}
	temperatura=(temperatura1+temperatura2+temperatura3+temperatura5+temperatura4+temperatura6)/6;
	cout<<"la temperatura promedio es "<<temperatura<<endl;
	cout<<"la temperatura mayor es "<<mayor<<endl<<"la temperatura menor es "<<menor;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
