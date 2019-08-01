#include <stdio.h>
#include <iostream>
#include <ctype.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int i;
float Vec1[5000],Vec2[5000], Suma[5000];
main(){
	for(int b=0;b<5000;b++){
		cout<<"Ingrese valores hasta llegar a la posicion 4999"<<endl;
		scanf("%f", &Vec1[i]);
		cout<<"Ingrese valores hasta llegar a la posicion 4999"<<endl;
		scanf("%f", &Vec2[i]);
		Suma[i]=Vec1[i]+Vec2[i];
		printf("La posicion %d es %2.0f\n",b,Suma[i]);
	}
}
