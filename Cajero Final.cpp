#include <stdio.h>
#include <iostream>
#include <ctype.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int Pin, NuevoUsuario, RepeticionPin, AcumuladorRepeticionPin, RepeticionNuevoUsuario, AcumuladorRepeticionNuevoUsuario, Opciones, Retiro, x, X, y, Y, z, CuentaConsignacion, ValorConsignacion, OpcionesConsultas, PinActual, CambiarPin, ValorPagoServicio;
char NuevoUsuarioCaracter[1], PinCaracter[1], NombreServicio[10];




ConfirmacionIngresoPin(){
	AcumuladorRepeticionPin+=1;
}




ConfirmacionCaracter(){
	if(isalpha(NuevoUsuarioCaracter[0])){
		RepeticionNuevoUsuario+=1;
			AcumuladorRepeticionNuevoUsuario+=1;
			cout<<"A los 3 intentos se cancela la cuenta"<<endl;
	}
	if(isalpha(PinCaracter[0])){
		RepeticionPin+=1;
		ConfirmacionIngresoPin();
		cout<<"A los 3 intentos se cancela el proceso de ingreso y recuerde que son números"<<endl;
	}
}




MenuOpciones(){
	cout<<"Escoja una de las siguientes opciones"<<endl;
	cout<<"Retirar dinero (1)"<<endl;
	cout<<"Consignacion (2)"<<endl;
	cout<<"Consulta (3)"<<endl;
	cout<<"Cambiar Pin (4)"<<endl;
	cout<<"Pago de servicios (5)"<<endl;
	cin>>Opciones;
	switch(Opciones){
		case 1:
			system("cls");
			cout<<"Escogio la opcion de retirar dinero"<<endl;
			cout<<"Ingrese el valor de su retiro que sea multiplo de 10000"<<endl;
			cin>>Retiro;
			while(0!=Retiro%10000){
				cout << "Por favor digite un valor canjeable en billetes de $10000"<<endl;
				cin>> Retiro;
				}
			x=Retiro/50000; 
			X=Retiro%50000; 
			y=X/20000; 
			Y=X%20000; 
			z=Y/10000;
			cout<< "Reciba su dinero:"<<endl;
			cout<<x<<" billetes de $50.000"<<endl; 
			cout<<y<<" billetes de $20.000"<<endl;
			cout<<z<<" billetes de $10.000"<<endl;
			cout<<"Retiro exitosamente $"<<Retiro<<endl;
			cout<<"Gracias por usar su banco Barracas"<<endl;
			return 0;
			break;
		case 2:
			system("cls");
			cout<<"Escogio la opcion consginar"<<endl;
			cout<<"Ingrese cuenta a la que quiere consignar, recuerde que son 11 digitos"<<endl;
			cin>>CuentaConsignacion;
			if(CuentaConsignacion>=10000000000 && CuentaConsignacion<=99999999999){
			cout<<"Ingrese el valor de consignacion"<<endl;
			cin>>ValorConsignacion;
			cout<<"Ha consignado "<<ValorConsignacion<<" a la cuenta "<<CuentaConsignacion<<" exitosamente"<<endl;
			cout<<"Gracias por usar su banco Barracas"<<endl;
			}else{
				cout<<"El numero de la cuenta tenia que ser igual a 11 digitos"<<endl;
				cout<<"Su transaccion ha sido cancelada"<<endl;
				cout<<"Gracias por usar su banco Barracas"<<endl;
			}
			return 0;
			break;
		case 3:
			system("cls");
			cout<<"Escogio la opcion para consultas"<<endl;
			cout<<"Consultar saldo (1)"<<endl;
			cout<<"Consultar sus movimientos (2)"<<endl;
			cin>>OpcionesConsultas;
			switch(OpcionesConsultas){
				case 1:
					system("cls");
					cout<<"Escogio consultar saldo"<<endl;
					cout<<"Su saldo es 0"<<endl;
					cout<<"Gracias por usar su banco Barracas"<<endl;
					return 0;
					break;
				case 2:
					system("cls");
					cout<<"Escogio consultar sus movimientos"<<endl;
					cout<<"Usted no ha tenido movimientos, su cuenta es nueva"<<endl;
					cout<<"Gracias por usar su banco Barracas"<<endl;
					return 0;
					break;
			}
		case 4:
			system ("cls");
			cout<<"Escogio la opcion cambiar clave"<<endl;
			cout<<"Ingrese su pin actual"<<endl;
			cin>>PinActual;
			if(PinActual==Pin){
				cout<<"Ingrese su nuevo Pin, recuerde que debe estar entre 1000 y 9999 y no debe incluir letras"<<endl;
				cin>>Pin;
				if(Pin>=1000 && Pin<=9999){
					cout<<"Confirme su pin"<<endl;
					cin>>CambiarPin;
					if(CambiarPin==Pin){
					cout<<"Su pin ha sido cambiado exitosamente"<<endl;
					cout<<"Gracias por usar su banco Barracas"<<endl;
					return 0;
				}else{
					cout<<"La confirmacion de su pin ha fallado"<<endl;
					cout<<"Gracias por usar su banco Barracas"<<endl;
					return 0;
				}
				}else{
					cout<<"No hemos podido cambiar su pin, vuelva a empezar"<<endl;
					cout<<"Gracias por usar su banco Barracas"<<endl;
					return 0;
				}
			}else{
				cout<<"Ha ingresado mal su pin actual, vuelva a empezar"<<endl;
				cout<<"Gracias por usar su banco Barracas"<<endl;
				return 0;
			}
			break;
		case 5:
			system("cls");
			cout<<"Escogio la opcion pago de servicios"<<endl;
			cout<<"Ingrese el valor a pagar"<<endl;
			cin>>ValorPagoServicio;
			cout<<"Ingrese el servicio que desea pagar"<<endl;
			cin>>NombreServicio[0];
			cout<<"Se pagó el servicio "<<NombreServicio<<" por "<<ValorPagoServicio<<endl;
			cout<<"Transaccion exitosa"<<endl;
			cout<<"Gracias por usar su banco Barracas"<<endl;
			return 0;
			break;
		default:
		cout<<"Su transaccion ha sido cancelada, vueva a iniciar"<<endl;
		cout<<"Gracias por usar su banco Barracas"<<endl;
		return 0;
			}
	}
	
	
	
	
IngresarPin(){
	cout<<"Ingrese el pin de su cuenta"<<endl;
	cin>>Pin;
	if(Pin==NuevoUsuario){
		cout<<"Ha ingresado correctamente a su cuenta"<<endl;
		RepeticionPin+=3;
		Sleep(4444);
		system("cls");
		MenuOpciones();
	}else{
		RepeticionPin+=1;
		ConfirmacionIngresoPin();
		cout<<"A los 3 intentos se cancela el proceso de ingreso"<<endl;
	}
	if(AcumuladorRepeticionPin==3){
		cout<<"Se completaron los 3 intentos y se cancelo el proceso de ingreso de cuenta"<<endl;
		Sleep(4444);
		system("cls");
		exit(0);
	}
	}




CreacionNuevoUsuario(){
	cout<<"Ingrese pin de 4 digitos para creacion de cuenta que esten entre 1000 y 9999 y recuerde no ingresar letras"<<endl;
	cin>>NuevoUsuario;
		if(NuevoUsuario>=1000 && NuevoUsuario<=9999){
			cout<<"Cuenta creada exitosamente"<<endl;
			RepeticionNuevoUsuario+=3;
			Sleep(4444);
			system("cls");
			IngresarPin();
		}else{
			RepeticionNuevoUsuario+=1;
			AcumuladorRepeticionNuevoUsuario+=1;
			cout<<"A los 3 intentos se cancela la cuenta"<<endl;
		}
		if(AcumuladorRepeticionNuevoUsuario==3){
			cout<<"Se completaron los 3 intetos y se cancelo el proceso de creacion de cuenta"<<endl;
			Sleep(4444);
			system("cls");
			exit(0);
		}
	}

	
	
	
main(){
	while(RepeticionNuevoUsuario!=3){
		CreacionNuevoUsuario();
	}
	while(RepeticionPin!=3){
		IngresarPin();
	}
	while(AcumuladorRepeticionNuevoUsuario==3){
		exit(0);
	}
}
