#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <string.h>
#include <windows.h>

int main(){
	
FILE *fp;
char ci[10];
char cir[10];
char clave[50];
char newpas[90];
char registros[99999];
char nombrepaciente[30];
char buffer[10];
char contrase[25];
int opc = 0;

printf("\n\n\t\t\t\t       Bienvenido a DDEDPS\n");
printf("\n\n\t\t\t\t\t     INGRESO");
printf("\n     ======================================================================================\n");
login:
printf("\n\t\t\t\t\t     Login\n");
printf("Ingrese su C.I: ");
gets(ci);

fp = fopen  (ci	, "r");
if(fp==NULL) 
 { printf("USUARIO NO REGISTRADO\n");
   printf("Enter para continuar.......\n");
   getch();
   system("cls");
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
	printf("Contraseña incorrecta\n");
	printf("Vuelva a intentarlo");
	getch();
	system("cls");
    goto login;	
    fflush(stdin);
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
	fflush(stdin);
	printf("\n\n\n\n\n\t\t\t\t\t\t\tRegistro de pacientes\n");
	printf("\n\t\t\t======================================================================\n");
	printf("Digite el nombre del paciente: \n");
	gets(nombrepaciente);
	if(fp==NULL)
	{
	printf("\nError");
	printf("\nNo existe el paciente");
	getch();
	system("cls");
	goto registros;
	fclose(fp);}
	else 
	{
	fp = fopen  (nombrepaciente	, "r");
	printf("El la anterior consula del paciente se dijo que: \n");
	fgets (registros, 999999, fp);
	puts(registros);
	printf("\n*Este documento es solo posible leerlo*");
	fclose(fp);
	getch(); 
	goto menu;}
	
	return 0;
}	
examen:
{
	system("cls");
	printf("\n\n\n\n\n\t\t\t\t\t\t\tEXAMEN DDEDPS\n");
	printf("\n\t\t\t======================================================================\n");
	printf("[1]Para comenzar\n");
	printf("[2]Volver\n");
	printf("Digite opcion a escoger: ");
	scanf("%d",&opc);
	switch(opc){
	case 1: 
 		system("cls");
 		goto exml;
 		break;
	case 2:
 		system("cls");
		goto menu;
		break;

}
}
usuarios:
{
	system("cls");
	printf("\n\n\n\n\n\t\t\t\t\t\t\tMenu\n");
	printf("\n\t\t\t======================================================================\n");
	printf("[1]Registre nuevo usuario\n");
	printf("[2]Ver datos de un usuario]\n");
	printf("[3]Eliminar usuario\n");
	printf("[4]Volver al menu inicial\n");
	printf("[5]Salir\n");
	printf("\nDigite la opcion a escoger: ");
	scanf("%d", &opc);
		switch(opc){
			case 1:
				system("cls");
				goto rdu;
				break;
			case 2: 
				system("cls");
				goto vdduu;
				break;
			case 3: 
				system("cls");
				goto elmus;
				break;
			case 4:
				system("cls");
				goto menu;
				break;
			case 5:
				printf("Gracias por confiar en nosotros!\n");
				printf("Digita enter para continaur\n");
				getch();
				exit(1);
				break;
		}
	}
elmus: {
	printf("Eliminar usuario\n");
	printf("\n     ======================================================================\n");
	fflush(stdin);
	printf("Digite el numero de cedula del usuario a eliminar: ");
	gets(cir);
	if(remove(cir)==0)
        printf("El usuario fue eliminado correctamente.");
    else
        printf("Hubo un error vuelva a intentar.\n");   
	return 0;
}
rdu:
{
	printf("\t\t\t\tRegistro de usuarios");
	printf("\n     ======================================================================\n");
	fflush(stdin);
	printf("Digite numero de cedula: ");
	gets(cir);
	fp = fopen  (cir	, "r");
	if(fp!=NULL)
	{
	printf("\nError");
	printf("\nYa existe este usuario");
	getch();
	goto menu;
	fclose(fp);}
	else 
	{
	fp = fopen  (cir	, "w+");
	printf("Digite su clave: ");
	gets(newpas);
	fputs(newpas, fp);
	fclose(fp);
	goto menu;}
}
vdduu: {
	fflush(stdin);
	printf("Ver datos de usuario: \n");
	printf("Ingrese el C.I del doctor: ");
	gets(cir);
	fp = fopen  (cir	, "r");
	if(fp!=NULL)
	{
	fgets (clave, 50, fp);
	printf("\nUsuario: ");
	puts(cir);
	printf("La clave es la siguiente: ");
	puts(clave);
	getch();
	goto menu;
	fclose(fp);}
	else 
	{
	printf("No existe el usuario");
	getch();
	fclose(fp);
	goto menu;}
}
exml: {
	printf("Nombre del paciente: ");
	gets(nombrepaciente);
	return 0;
}
}
