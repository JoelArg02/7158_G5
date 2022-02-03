#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include<conio.h>
#include <string.h>
#include <windows.h>
 
int main()
{
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

    do
    {
        system("cls");
	printf("\n\n\n\n\n\t\t\t\t\t\t\tMenu\n");
	printf("\n\t\t\t======================================================================\n");
	printf("[1]Registre nuevo usuario\n");
	printf("[2]Ver datos de un usuario\n");
	printf("[3]Eliminar usuario\n");
	printf("[4]Volver al menu inicial\n");
	printf("[5]Salir\n");
	printf("\nDigite la opcion a escoger: ");
	scanf("%d", &opc);
			switch(opc){
			case 1:
				system("cls");
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
				fclose(fp);}
				else 
				{
				fp = fopen  (cir	, "w+");
				printf("Digite su clave: ");
				gets(newpas);
				fputs(newpas, fp);
				fclose(fp);
				break;
			case 2: 
				fflush(stdin);
				system("cls");
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
				fclose(fp);}
				else 
				{
				printf("No existe el usuario");
				getch();
				fclose(fp);
				break;
			case 3: 
				fflush(stdin);
				system("cls");
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
				break;
			case 4:
				system("cls");
				printf(" \nVolviendo....");
				break;
			case 5:
				printf("Gracias por confiar en nosotros!\n");
				printf("Digita enter para continaur\n");
				getch();
				exit(1);
				break;
			}
		}
	
	} 
    } while ( opc != 4 );

    return 0;

}

