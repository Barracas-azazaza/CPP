#include <stdio.h>
#include <iostream>
#include <ctype.h>
#include <windows.h>
#include <conio.h>
main(){
	int a=0, b=0, c=0, r=0;
		printf("Escriba el número ");
		scanf("%i", &a);
		printf("Escriba el número ");
		scanf("%i", &b);
		printf("Escriba el número ");
		scanf("%i", &c);
	if(a>b && b>c){
		printf("El resultado de mayor a menor es%i,%i,%i, y de menor a mayor es %i,%i,%i",a,b,c,c,b,a);
	}else if(a>c && c>b){
		printf("El resultado de mayor a menor es%i,%i,%i, y de menor a mayor es %i,%i,%i",a,c,b,b,c,a);
	}else if(b>a && a>c){
		printf("El resultado de mayor a menor es%i,%i,%i, y de menor a mayor es %i,%i,%i",b,a,c,c,a,b);
	}else if(b>c && c>a){
		printf("El resultado de mayor a menor es%i,%i,%i, y de menor a mayor es %i,%i,%i",b,c,a,a,c,b);
	}else if(c>b && b>a){
		printf("El resultado de mayor a menor es%i,%i,%i, y de menor a mayor es %i,%i,%i",c,b,a,a,b,c);
	}else if(c>a && a>b){
		printf("El resultado de mayor a menor es%i,%i,%i, y de menor a mayor es %i,%i,%i",c,a,b,b,a,c);
	}else if(a<b && c<b){
		printf("El resultado de mayor a menor es%i,%i,%i, y de menor a mayor es %i,%i,%i",b,c,a,a,c,b);
	}
}
