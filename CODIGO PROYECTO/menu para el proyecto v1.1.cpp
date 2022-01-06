#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<windows.h>

using namespace std;

int main(){
	
	int op, s, n;
	int contador = 0; 
	char cedula[50],correo[50],examen[50],registro[50],ultimo[50];
	bool ingresa = false;
do{
	system("cls");
	cout<<"Hola Bienvenido!!!"<<endl;
	system("pause");
	
	string user="", pass="";
	cout<<"ingrese nombre de usuario :"<<endl;
	cin>>user;
	
	cout<<"ingrese su contraseña :"<<endl;
	cin>>pass;
	
	
	if(user=="Alan" && pass=="alan123" ){
	ingresa = true;
	//cout<<"bienvenido al programa, Espere un momento "<<endl;
	}else{
	cout<<"Usuario o contraseña incorrecto"<<endl;
	contador++;
	system("pause");
	system("cls");
      }
   } while (ingresa == false && contador<3); 
   
   if(ingresa == false){
   	  cout<<"\n Usted no pudo ingresar al sistema. ADIOS"<<endl;
   	  exit(0);
   }
   else{
   	cout<<"\n Ingreso correctamente"<<endl;
   }
   
   system("cls");
	cout<<"Bienvenido Dr.Alan"<<endl;
	cout<<"Iniciando Pograma DDEPS(dectetor de estado de depresion somatizada)"<<endl;
	contador++;
	Beep(300,500);
	system("pause");
	system("cls");
	
	while(1){
	cout<<"\t\t\t-----MENU-----"<<endl;
	cout<<"Opciones: "<<endl;
	cout<<"1. Para realizar una consulta digita tu datos personales"<<endl;
	cout<<"2. Hacer examen de DDEPS"<<endl;
	cout<<"3. Salir del programa"<<endl;
	cin>>op;
	system("cls");
	

	
	switch(op){
		
		
		case 1:cout<<"Ingrese sus datos"<<endl;
		       cout<<"Cedula: \t"<<endl; cin>>cedula;
		       cout<<"Correo: \t"<<endl;  cin>>correo;
		       cout<<"Ultimo examen: "<<endl; cin>>ultimo;
		       cout<<"Registro de anteriores usos: "<<endl; cin>>registro;
		        system("pause");
		        system("cls");
		    break;
	
	    case 2:cout<<"Para seguir con el proceso recuerda que los datos a continuacion no son exactos Si continuas sera bajo la responsabilidad de la persona acargo .Aceptas los terminos de uso y aceptas que cualquier mal manejo sera culpa de la persona a cargo"<<endl;
	            system("pause");
		       cout<<"\n \t Escoja una opcion S para continuar y N para salir"<<endl;
		       cout<<""<<endl; 
			   	system("pause");
			break;
		case 3:cout<<"Salir\n ";
		
		       exit(0);
	
		
     	}
     	cout<<"presione una tecla para volver al menu principal"<<endl;
     	getch();
     	system("cls");
      }
	}





