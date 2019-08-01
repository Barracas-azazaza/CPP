#include <iostream>
using namespace std;
main(){
	int cantidad=0;
	float suma=0,promedio=0, n=0;
	cout<<"Ingrese la cantidad de notas que va a ingresar";
	cin>>cantidad;
	cout<<"Usted va a ingresar ",cantidad, "notas";
	for(int i=1;i<=cantidad;i++){
		cout<<"Ingrese la nota: ",i;
		cin>>n;
		suma= n+suma;
	}
	promedio=suma/cantidad;
	cout<<"El promedio es: ",promedio;
}
