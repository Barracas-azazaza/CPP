#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include <iostream>
main(){
	float b=0, h=0, area=0, sumaareas=0; //variables
	for(float f=0; f<5; f++){ //Hallar el �rea de 5 tri�ngulos
		printf("Digite la base");
		scanf("%f",&b); //Escriebn la base
		printf("Digite la altura");
		scanf("%f", &h); //Escriben la altura
		area= (b*h)/2; //Da el resultado de cada �rea
		if(area>10){ //Si el resultado del �rea es mayor que 10 no acumula
			sumaareas+= 0;
		}
			else if(area<10){ //Si el resultado del �rea es menor que 10 s� acumula
			sumaareas+= area;
		}
			else if(area==10){ //Si el resultado es igual que 10 se resta del total acumulado
			sumaareas= sumaareas-10;
		}
		}
		if(sumaareas>=1&&sumaareas<=5){ //Si est� entre 1 y 5 restar 10
			sumaareas=sumaareas-10;
		}
			else if(sumaareas>=6&&sumaareas<=10){ //si est� entre 6 y 10 sumar 20
			sumaareas+=20;
		}
			else if(sumaareas>=11&&sumaareas<=20){ //si est� entre 11 y 20 dividir por 2
			sumaareas=(sumaareas)/2;
		}
			else if(sumaareas>20){ //si es mayor que 20 multiplicar por 2
			sumaareas=(sumaareas)*2;
		}
	printf("El acumulado es: %f%" ,sumaareas);
	}
//Ahora Si el resultado del �rea es > 10 no acumular. Si el resultado del �rea <10 acumular. Si el resultado es igual a 10 restarla del total acumulado.
//Si est� entre 1 y 5 restar 10, si est� entre 6 y 10 sumar 20, si est� entre 11 y 20 dividir por 2, si es mayor que 20 multiplicar por 2
//Se puede usar tambi�n float y cambiarle el nombre a %i por %f
