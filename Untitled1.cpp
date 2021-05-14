 //haz un programa que le pida datos basicops al usuario
 

#include <iostream>;
using namespace std;

int main(){
	float a, b, c, d, resultado=0,resultado1=0;
	cout<<"\n inserte un numero  ";cin>>a;
	cout<<"\n inserte otro numero  ";cin>>b;
	cout<<"\n inserte otro numero  ";cin>>c;
	cout<<"\n inserte otro numero mas  ";cin>>d;
	resultado1=b/(c-d);
	resultado=  a + resultado1;
	cout.precision (2);
	cout<<"\n su resultado es : "<<resultado<<"y "<<resultado1;
		
	return 0;
}
