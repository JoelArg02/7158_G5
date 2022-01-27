#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <string.h>
#include <windows.h>

int main(){
	
FILE *fp;
char ci[10];
char buffer[10];
char contrase[25];
int opc = 0;

printf("\n\n\t\t       Bienvenido a DDEDPS\n");
printf("\n\n\t\t\t     INGRESO");
printf("\n\t\t\t----------------");
login:
printf("\nLogin\n");
puts("Ingrese su C.I");
gets(ci);

fp = fopen  (ci, "r");
	if(fp==NULL) 
	 { printf("USUARIO NO REGISTRADO\n");
	   printf("Enter para continuar.......\n");
	   goto login;
     }
	 {
	 	fgets(buffer,10,fp);
	 	puts("Digite su clave para continuar");
	 	gets(contrase);
	 	fclose(fp);	
	 }
	if  (strcmp(contrase,buffer) == 0)
	{
		puts("Contraseña correcta");
		goto loginexitoso;
	}
	else
	{
		printf("Contraseña incorrecta");
		getch();
		exit(1);
	}
	
loginexitoso:
{
 system("cls");
 printf("              Haz logeado correctamente");
 system("cls");
 goto menu;
}
menu:
{
 system("cls");
 printf("\n\n\n\n\n\t\t\t\t\t\t\tMenu");
 printf("\n\t\t\t\t\t------------------------------------\n\n\n");
 printf("1)Ver registros\n");
 printf("2)Realizar examen DDEDPS\n");
 printf("3)Gestion usuarios\n");
 printf("4)Salir\n");
 printf("Digite opcion a escoger:\n");
 scanf("%d",&opc);
 switch(opc){
 	case 1: 
 		system("cls");
 		goto registros;
 		break;
 	case 2:
 		system("cls");
		goto examen;
		break;
	case 3:
		system("cls");
		goto usuarios;
		break;	
	case 4:
		exit(1);
}
}
registros:
{
	printf("Registros");
	return 0;
}	
examen:
{
	printf("Examen");
	return 0;
}
usuarios:
{
	printf("usuarios");
	return 0;
}

}
