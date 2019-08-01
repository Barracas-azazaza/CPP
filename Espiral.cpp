#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <ctype.h>
void gotoxy(int x, int y){
HANDLE hCon;
hCon=GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X=x;
dwPos.Y=y;
SetConsoleCursorPosition(hCon,dwPos);
}
main(){
	int a=0,e=0,i=0,o=0,u=0; //a= giros que debe dar, e= eje x superior, i= eje y derecho, o= eje x inferior devolviéndose, u= eje y izquierdo subiendo
	for(a=0;a<12;a++){ //cantidades máximas que puede girar
		for(e=a;e<79-a;e++){ //empezando de 0 a 79 = 80 en el eje x entonces e seguirá el proceso del ciclo pero será menor a 79 y quitándole la cantidad de veces que puede girar
			gotoxy(e,a); //e= eje x, a=ciclo
			printf("*");
			Sleep(10); //Esperará 10 milisegundos
		}
		for(i=0+a;i<=23-a;i++){ // en el eje y hacia abajo siguiendo el proceso de a para hacer el cilo y será desde y=0 hasta y= 24  o sea 0+23 = 24
			gotoxy(e,i); //e= eje x, i= y que bajará siguiendo el ciclo
			printf("*");
			Sleep(10);
		}
		for(o=79-a;o>0+a;o--){ //resta desde la posición x= 80(79) hasta 0 es de la parte inferior, y o-- porque es acumulado hacia atrás.
			gotoxy(o,i); //o= eje x, i= eje y que mantendrá siempre o sea 24
			printf("*");
			Sleep(10);
		}
		for(u=24-a;u>0+a;u--){ //resta desde la posición y= 24 hasta llegar a eje y=0
			gotoxy(a,u); //a=se repite el ciclo en eje x, u= eje y
			printf("*");
			Sleep(10);
	}
	}
}
