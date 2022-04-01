#include<iostream>
using namespace std;
int main () {
	int cam,pan,zap,chaq,libros,cf,cfp,cfz,cfl,otro,at;
	
	cf=0;
	cfp=0;
	cfz=0;
	cfl=0;
	int ccam=1;
	int cpan=1;
	int czap=1;
	
	int clibros=1;
	
	do{
		while(ccam<=4) {
			cout<<"Ingrese el valor de la camisa "<<ccam<<":";
			cin>>cam;
			cf=cf+cam;
			ccam=ccam+1;
		}
		cout<<"\nEl valor total de las camisas es: "<<cf<<endl;
		while (cpan<=3) {
			cout<<"Ingrese el valor del pantalon "<<cpan<<":";
			cin>>pan;
			cfp=cfp+pan;
			cpan=cpan+1;
		}
		cout<<"\nEl valor total de los pantalones es: "<<cfp<<endl;
		while (czap<=2) {
			cout<<"Ingrese el valor del zapatos "<<czap<<":";
			cin>>zap;
			cfz=cfz+zap;
			czap=czap+1;
		}
		cout<<"\nEl valor total de los zapatos es: "<<cfz<<endl;
	
		cout<<"Ingrese el valor de la chaqueta: ";
		cin>>chaq;
		
		cout<<"\nEl valor de la chaqueta es: "<<chaq<<endl;
		
		while(clibros<=4) {
			cout<<"Ingrese el valor del libro "<<clibros<<":";
			cin>>libros;
			cfl=cfl+libros;
			clibros=clibros+1;
		} 	
			cout<<"\nEl valor total de los libross es: "<<cfl<<endl;
	
	at=cfl+chaq+cfz+cfp+cf;
	
	cout<<"\nEl valor es: "<<at<<endl;
	
	
	
	cout<<"otro: ";
	cin>>otro;
	
	}while(otro==1);
}

