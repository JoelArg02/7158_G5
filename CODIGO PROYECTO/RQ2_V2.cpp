#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <string.h>
#include <windows.h>


int main(){

FILE *lg;
FILE *fp;
char ci[10];
char cir[10];
char clave[50];
char newpas[90];
char registros[99999];
char nombrepaciente[30];
char cartadir[300];
char buffer[10];
char cadena[50], cadena2[50], cadena3[50], cadena4[50], cadena6[50];
char cadena7[50],cadena8[50], cadena9[50],cadena10[50], cadena5[50];
char test1[50];
char contrase[25];
int opc = 0;

menu:
{
 system("cls");
 printf("\n\n\n\n\n\t\t\t\t\t\t\tMenu\n");
 printf("\t\t\t===========================================================================\n");
 printf("[1]Ver registro de paciente\n");
 printf("[2]Realizar examen DDEDPS\n");
 printf("[3]Gestion usuarios\n");
 printf("[4]Salir\n");
 printf("Digite opcion a escoger: ");
 scanf("%d",&opc);
 switch(opc){
 	case 1: 
 		system("cls");
 		printf("Registro ");
 		break;
 	case 2:
 		system("cls");
		printf("Hacer examen");
		break;
	case 3:
		system("cls");
		printf("Gestion usuarios");
		break;	
	case 4:
		exit(1);
}
}
}
