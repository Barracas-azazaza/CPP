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
	int a=0,e=0,i=0,o=0,u=0; //a= giros que debe dar, e= eje x superior, i= eje y derecho, o= eje x inferior devolvi�ndose, u= eje y izquierdo subiendo
	for(a=0;a<12;a++){ //cantidades m�ximas que puede girar
		for(e=a;e<79-a;e++){ //empezando de 0 a 79 = 80 en el eje x entonces e seguir� el proceso del ciclo pero ser� menor a 79 y quit�ndole la cantidad de veces que puede girar
			gotoxy(e,a); //e= eje x, a=ciclo
			printf("*");
			Sleep(10); //Esperar� 10 milisegundos
		}
		for(i=0+a;i<=23-a;i++){ // en el eje y hacia abajo siguiendo el proceso de a para hacer el cilo y ser� desde y=0 hasta y= 24  o sea 0+23 = 24
			gotoxy(e,i); //e= eje x, i= y que bajar� siguiendo el ciclo
			printf("*");
			Sleep(10);
		}
		for(o=79-a;o>0+a;o--){ //resta desde la posici�n x= 80(79) hasta 0 es de la parte inferior, y o-- porque es acumulado hacia atr�s.
			gotoxy(o,i); //o= eje x, i= eje y que mantendr� siempre o sea 24
			printf("*");
			Sleep(10);
		}
		for(u=24-a;u>0+a;u--){ //resta desde la posici�n y= 24 hasta llegar a eje y=0
			gotoxy(a,u); //a=se repite el ciclo en eje x, u= eje y
			printf("*");
			Sleep(10);
	}
	}
}
