//haz calculos matematicos en c++ pta

#include <iostream>;
using namespace std;
int main() {
	int n1, n2, suma=0, resta=0, division=0, multiplicacion=0;
	cout<<"digite un numero";
	cin>>n1;
	cout<<"digite otro numero";
	cin>>n2;
	suma=n1+n2;
	resta=n1-n2;
	multiplicacion=n1*n2;
	division=n1/n2;
	cout<<"las operaciones son : "<<resta<<" la resta, "<<multiplicacion<<" la multiplicacion, "<<division<<" la division y "<<suma<<" la suma";
	
	
	
	return 0;
}
