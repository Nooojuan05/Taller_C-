#include<iostream>
using namespace std;
int main () {
	int n,i,tipo,slr;
	float sf;
	cout<<"Ingrese el numero de emplados: ";
	cin>>n;
	while(i<n) {
		slr = 855000 - (855000*0.26);
	
		cout<<"\nIngrese las horas extras: ";
		cin>>tipo;
		
		if (tipo <= 19 && tipo>0 ) {
			sf=slr+(slr*0.10) ;	
		}
		else if (tipo >19 && tipo<=31) {
			sf=slr+(slr*0.15);	
		}
		else if (tipo >= 32) {
			sf=slr+(slr*0.20);
		}
		else {
			cout<<"Su salario es "<<slr;
		}
		cout<<"\nSu salario es: "<<sf;
		
		i=i+1;
	}	
}

