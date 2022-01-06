#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>

using namespace std;

int main(){
	
	int op, s;
	
	cout<<"Hola Bienvenido!!!"<<endl;
	system("pause");
	
	string user="", pass="";
	cout<<"ingrese nombre de usuario :"<<endl;
	cin>>user;
	
	cout<<"ingrese su contraseña :"<<endl;
	cin>>pass;
	
	
	if(user=="Alan" && pass=="alan123" )
	cout<<"bienvenido al programa, Espere un momento "<<endl;
	else
	cout<<"Usuario o contraseña incorrecto"<<endl;
	system("pause");
	system("cls");
	

	cout<<"Bienvenido Dr.Alan"<<endl;
	cout<<"Iniciando Pograma DDEPS(dectetor de estado de depresion somatizada)"<<endl;
	Beep(300,500);
	system("pause");
	system("cls");
	
	
	cout<<"-----MENU-----"<<endl;
	cout<<"Opciones: "<<endl;
	cout<<"1. Para realizar una consulta digita tu datos personales"<<endl;
	cout<<"2. Hacer examen de DDEPS"<<endl;
	cin>>op;
	

	
	switch(op){
		
		case 1:cout<<"Ingrese sus datos"<<endl;
		       cout<<"Cedula: "<<endl;
		       cout<<"Correo electronico: "<<endl;
		       cout<<"Ultimo examen realizado: "<<endl;
		       cout<<"Registro de anteriores usos: "<<endl;
		        system("pause");
		        system("cls");
		    break;
	    case 2:cout<<"Para seguir con el proceso recuerda que los datos a continuacion no son exactos Si continuas sera bajo la responsabilidad de la persona acargo .Aceptas los terminos de uso y aceptas que cualquier mal manejo sera culpa de la persona a cargo"<<endl;
	            system("pause");
		       cout<<"\n \t Escoja una opcion Si para continuar y No para salir"<<endl;
			   	system("pause");
			break;
		default: cout<<"Gracias por usar el programa"<<endl;
		break;
     	}
	}





