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


lg = fopen("C:/Users/Joel/Desktop/Proyect/1/progrm/archi2.txt", "r");
if(lg==NULL)
{
printf("Error interno avisar al administrador...\n");
printf("El programa se cerrara......\n");
getch();
exit(1);
}
else
{
 fgets(test1, 50,lg);
 fclose(lg);
}
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

}
}
