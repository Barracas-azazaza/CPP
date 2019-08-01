#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
main(){
	int x=0; //x Es la cantidad de repeticiones que queramos
	printf("Digite cantidad de repeticiones");
	scanf("%i", &x); //el & se utiliza para separar un área de memorias
	for(int i=1; i<=x; i++){ //i<=x es para que aparezca las cantidades que se piden empezando desde 1 y no desde 0
		printf("\nhola");
	}
}
