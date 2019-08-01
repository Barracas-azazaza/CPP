#include <stdio.h>
#include <iostream>
#include <ctype.h>
#include <windows.h>
#include <conio.h>
main(){
	int num=0, canmay5=0, canmen5=0, totmay5=0, totmen5=0;
	for(int i=1;i<=10;i++){
		printf("Digite el n�mero ");
		scanf("%i", &num);
		if(num<=0){
			i--;
			printf("n�mero inv�lido");
			}else if(num>0 && num<=5){
				canmen5++;
				totmen5+=num;
			}else if(num>5){
				canmay5++;
				totmay5+=num;
			}
		}
		printf("\n cantidad <=5 %i",canmen5);
		printf("\n cantidad >5 %i", canmay5);
		printf("\n total mayor que 5 %i", totmay5);
		printf("\n total menor que 5 %i", totmen5);
	}