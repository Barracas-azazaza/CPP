#include"conio.h"
#include "stdio.h"
#include "windows.h"
void gotoxy (int x, int y){
	HANDLE hcon;
	hcon = GetStdHandle (STD_OUTPUT_HANDLE);
	COORD dwPos; 
	dwPos.X= x;
	dwPos.Y = y;
	SetConsoleCursorPosition (hcon,dwPos);
}
main(){
	int m=0, mu=0, r=0; //m= multiplicando, mu= multiplicador, r= resultado
	int x=0, y=0; //Ejes plano cartesiano
	for(m=1;m<=10;m++){ //El multiplicando debe ser 1 y menor que 10
		for(mu=1;mu<=10;mu++){ //El multiplicando mutiplicará desde 1 hasta 10
			gotoxy (x,y);
			printf("%i*%i=%i",m,mu,m*mu); //resultado y proceso del resultado
			y++; //acumular los ocupados en y
           } //se cierra el ciclo para que no siga derecho interfiriendo en el otro
		getch(); //cada vez que oprima una tecla mostrará el siguiente resutlado
  	if(m<=4){ //cantidad de veces que puede estar en el eje y, empezando desde 0 a 4 = 5
	 y=0;
	 x=x+15; //cambio que dara por cada tecla oprimida
	 }
  	else if(m>=5){ //apenas llegue a la quinta posición en el eje y bajará.
		y=12;
	     x=x+15; //se repetirá el proceso desde 0 a 4 =5 pero en posición y= 21
		 }
	if(x>60){
		x=0;
	}
}
}
