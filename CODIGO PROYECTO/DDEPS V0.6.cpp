#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <string.h>
#include <windows.h>

void gesuser(void);
void ruser(void);
void registr(void);
void exm(void);
void elus(void);
void exam(void);
void loginexitoso(void);
void menu(void);
void login(void);
void vru(void);

#define PS        "\x1b[30m"
#define CI    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define RED     "\x1b[31m"

int main()
{

FILE *lg;
FILE *fp;
char ci[10];
char buffer[10];
char test1[50];
char contrase[25];


lg = fopen("C:/Users/Joel/Desktop/DDEPS/Codigos/P/progrm/depresion.txt", "r");
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
 login();
}

}

void login(void)
{ 
FILE *lg;
FILE *fp;
char ci[10];
char buffer[10];
char test1[50];
char contrase[25];
system("cls");
printf("\n     ======================================================================================\n");
printf("\n\n\t\t\t\t       Bienvenido a DDEDPS BETA\n");
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
 	printf("Digite su clave para continuar: "PS);
 	gets(contrase);
 	printf("a"ANSI_COLOR_RESET); 
 	fclose(fp);	
 }
if  (strcmp(contrase,buffer) == 0)
{
	puts("Contraseña correcta");
	loginexitoso();
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
}

void gesuser(void)
{ int opc;
FILE *fp;
	char cir[10];
	char newpas[90];
	char clave[50];
	system("cls");
	printf("\n\t\t\t======================================================================\n");
	printf("\n\n\n\n\n\t\t\t\t\t\t\tMenu\n");
	printf("\n\t\t\t======================================================================\n");
	printf("[1]Registre nuevo usuario\n");
	printf("[2]Ver datos de un usuario\n");
	printf("[3]Eliminar usuario\n");
	printf("[4]Volver al menu inicial\n");
	printf("[5]Salir\n");
	printf("\nDigite la opcion a escoger: ");
	scanf("%d", &opc); //Recomendación: Advertir al usuario mediante un mensaje el ingreso de caracteres o numeros erroneos
		switch(opc){      //Recomendacion: En caso de que exista una digitacion de caracter o numero erroneo que el sistema vuelva sobre el mismo menu.
			case 1:
				system("cls");
				ruser();
				break;
			case 2: 
				system("cls");
				ruser();
			case 3: 
				system("cls");
				elus();
				break;
			case 4:
				system("cls");
				printf("Gracias por confiar en nosotros!\n");
				printf("Digita enter para continaur\n");
				break;
			case 5:
				printf("Gracias por confiar en nosotros!\n");
				printf("Digita enter para continaur\n");
				getch();
				exit(1);
				break;
			default:
				printf("Error");
				printf("Gracias por confiar en nosotros!\n");
				printf("Digita enter para continaur\n");
				getch();
				break;
		}
}


void ruser(void)
{
	FILE *fp;
	char cir[10];
	char newpas[90];
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
}
}

void registr(void) //Recomendacion: Añadir una opcion de salida al menu en caso de que no se tenga el nombre del paciente
{                  //Recomendacion: Añadir controles de numeros diferentes y caracteres en el menu a crear 
FILE *fp;
char cir[10];
char registros[99999];
char nombrepaciente[30];
	fflush(stdin);
	system("cls");
	printf("\n\n\n\n\n\t\t\t\t\t\t\tRegistro de pacientes\n");
	printf("\n\t\t\t======================================================================\n");
	printf("\t\t\t\t\nAun no en funcionamiento volviendo al menu");
	fflush(stdin);
	getch();
	menu();
	printf("Digite el nombre del paciente: \n");
	gets(nombrepaciente);
	if(fp!=NULL)
	{
	printf("\nError");
	printf("\nAun no en funcionamiento.......");
	/*printf("\nEnter para volver a intentar");
	getch();
	menu();*/
	system("cls");
	fclose(fp);

	}
	else 
	{
	fp = fopen  (nombrepaciente	, "r");
	printf("El la anterior consula del paciente se dijo que: \n");
	fgets (registros, 999999, fp);
	puts(registros);
	printf("\n*Este documento es solo posible leerlo*");
	fclose(fp);
	getch(); 
}
}

void exm(void)
{
	int opc;
	system("cls");
		printf(CI"\t\t\t==========================================================================\n");
	printf("\t\t\t##                                                                      ##\n");
  	printf("\t\t\t##"ANSI_COLOR_RESET"                          EXAMEN DDEDPS                               "CI"##\n");
  	printf("\t\t\t##"RED"                      AUN NO EN FUNCIONAMIENTO                        "CI"##\n");
  printf("\t\t\t##"ANSI_COLOR_RESET"                [1]Para comenzar                                      "CI"##\n");
  printf("\t\t\t##"ANSI_COLOR_RESET"                [2]Volver                                             "CI"##\n");
  	printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
  	printf("\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
	printf("\t\t\tDigite opcion a escoger: ");
	scanf("%d",&opc);   //Realizar el control de ingreso de un numero diferente y de caracteres - sigue presente el error
	switch(opc){        //Recomendacion: Añadir mensaje de ingreso de datos erroneos o ingreso de caracteres
	case 1: 
 		system("cls");
 		printf("Aun no en funcionamiento..");
 		getch();
 		break;
	case 2:
 		system("cls");
		break;
}
}

void vru(void)
{
	FILE *fp;
	char cir[10];
	char clave[50];
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
	menu();
	fclose(fp);}
	else 
	{
	printf("No existe el usuario");
	getch();
	fclose(fp);
	menu();}
}

void elus(void)
{
	char cir[10];
	printf(CI"\t\t\t==========================================================================\n");
	printf("\t\t\t##                                                                      ##\n");
  	printf("\t\t\t##"ANSI_COLOR_RESET"                        ELIMINAR USUARIO                               "CI"##\n");
  	printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
  	printf("\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
	fflush(stdin);
	printf("Digite el numero de cedula del usuario a eliminar: ");
	gets(cir);
	if(remove(cir)==0){
    printf("El usuario fue eliminado correctamente.");
    getch();
	}
	else{
	
        printf("Hubo un error vuelva a intentar.\n");   
		getch();
	
		}
}

void exam(void)
{
	char cadena[50], cadena2[50], cadena3[50], cadena4[50], cadena6[50];
	char cadena7[50],cadena8[50], cadena9[50],cadena10[50], cadena5[50];
	char test1[50];
	char cartadir[300];
	FILE *fp;
	fflush(stdin);
	printf("\nIngrese la ubicacion del documento a leer: ");
	gets(cartadir);
	fp = fopen  (cartadir, "r");
	if(fp==NULL)
	{
	printf("Error, no se encontro ningun archivo.\n");
	printf("Reingrese la ruta del archivo: ");
	getch();
	fclose(fp);}
	else 
	{
	printf("Analizando......\n");
	fgets(cadena, 50,fp);
	fgets(cadena2, 50,fp);
	fgets(cadena3, 50,fp);
	fgets(cadena4, 50,fp);
	fgets(cadena5, 50,fp);
	fgets(cadena6, 60,fp);
	fgets(cadena7, 70,fp);
	fgets(cadena8, 80,fp);
	fgets(cadena9, 90,fp);
	fgets(cadena10, 100,fp);
	fp = fopen("C:/Users/Joel/Desktop/Proyect/1/progrm/archi2.txt", "r");
	if(fp==NULL)
	{
	printf("Error interno avisar al administrador...\n");
	printf("El programa se cerrara......\n");
	getch();
	exit(1);
	}
	else{
	puts(cadena);
	puts(test1);
	fclose(fp);
	getch();
	//goto examen;
	}
}
}

void loginexitoso(void)
{
 system("cls");
 printf("              Haz logeado correctamente");
 system("cls");
 menu();
}

void menu(void)
{
	char opcc;
	int n;
do 
	{
 system("cls");
  printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
  printf(CI"\t\t\t##                                                                      ##\n");
  printf("\t\t\t##"ANSI_COLOR_RESET"                              MENU                                    "CI"##\n");
  printf("\t\t\t##"ANSI_COLOR_RESET"                [1]Ver registro de paciente                           "CI"##\n");
  printf("\t\t\t##"ANSI_COLOR_RESET"                [2]Realizar examen DDEDPS                             "CI"##\n");
  printf("\t\t\t##"ANSI_COLOR_RESET "                [3]Gestion usuarios                                   "CI"##\n");
  printf("\t\t\t##"ANSI_COLOR_RESET"                [4]Salir                                              "CI"##\n");
  printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
  printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
 		printf("\nDigite opci%cn a escoger: ", 162);
 		fflush( stdin );
 		scanf("%c",&opcc);     //Recomendacion: Añadir mensaje de datos ingresados son erroneos 
	 switch(opcc){                 //Recomendacion: Añadir mensaje de ingreso de dato de caracter
 		case '1' : 
 			system("cls");
 			registr();
 			break;
 		case '2':
 			system("cls");
			exm();
			break;
		case '3':
		 	gesuser();
			break;	
		case '4':
			exit(1);
			break;	
		default:
			printf("\nOpci%cn incorrecta",162);
			printf("\nEnter para reintentar");
			getch();
			}
	} while(opcc!=5);
}
