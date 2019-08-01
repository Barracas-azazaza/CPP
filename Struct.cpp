// PD: ********************** Hecho por Camilo Andrés Barragán Gómez ******************************
#include <iostream> //Librería
using namespace std; //Estandard
struct productos{ //Declarar el struct
int nombre; //Entero perteneciente al struct
float precio; //Float perteneciente al struct
}teclado, raton, monitor; //Opciones del struct
int main(){
raton.precio = 20000; //Asignar valor
cout<<"Precio del raton: "<<raton.precio<<endl; //Imprimir y salto de línea
return 0; //Finalizar programa, comando innecesario
}