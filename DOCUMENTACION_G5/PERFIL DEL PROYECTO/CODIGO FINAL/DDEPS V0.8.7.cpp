#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <iostream>
#include <string.h>
#include <windows.h>

#define PS        "\x1b[30m"
#define CI    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
#define RED     "\x1b[31m"

#define TECLA_ENTER 13
#define TECLA_BACKSPACE 8
#define LONGITUD 30
#define MAX_INTENTOS 3
#define NUMERO_USUARIOS 5
#ifndef MAX
#define MAX 100
#endif

void validar(char []);
void gesuser(void);
void ruser(void);
void registr(void);
void exm(void);
void regist(void);
void menu(void);
void login(void);
void exmla(void);
void regsp(void);


int main()
{
setlocale(LC_ALL, "spanish");
FILE *lg;

lg = fopen("C:/DDEPS/usuarios/0", "r");
if(lg==NULL)
{
printf(RED"Error interno avisar al administrador...\n");
printf("El programa se cerrara......\n"ANSI_COLOR_RESET);
getch();
exit(1);
}
else
{
fclose(lg);
}

lg = fopen("C:/DDEPS/palabras.txt", "r");
if(lg==NULL)
{
printf(RED"Error interno avisar al administrador...\n");
printf("El programa se cerrara......\n"ANSI_COLOR_RESET);
getch();
exit(1);
}
else
{
fclose(lg);
}
lg = fopen("C:/DDEPS/DDEPSa.txt", "r");
if(lg==NULL)
{
printf(RED"Error interno avisar al administrador...\n");
printf("El programa se cerrara......\n"ANSI_COLOR_RESET);
getch();
exit(1);
}
else
{
fclose(lg);
}
login();
}


void login(void)
{
FILE *lg;
FILE *fp;
char ci[10];
char infa[MAX];
const char* str1 = "c:/DDEPS/usuarios/";
char ubiu[MAX];
char buffer[40];
char nombre[30];
char test1[50];
char contrase[30];
int intento = 0;
int ingresa = 0;
char caracter;
int i = 0;
int j = 0;
fflush( stdin );
system("cls");
printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
printf(CI"\t\t\t##                                                                      ##\n");
printf("\t\t\t##"ANSI_COLOR_RESET"                        BIENVENIDO A DDEPS BETA                       "CI"##\n");
printf("\t\t\t##"ANSI_COLOR_RESET"                               Ingreso                                "CI"##\n");
printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
printf("\t\t\t##"ANSI_COLOR_RESET"                                LOGIN                                 "CI"##\n");
printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);

fflush( stdin );
printf("Ingrese su C.I: ");
scanf("%s",infa);
strcat(strcpy(ubiu, str1), infa);
fp = fopen  (ubiu	, "r");
if(fp==NULL) 
 { printf("USUARIO NO REGISTRADO\n");
   printf("Enter para continuar.......\n");
   getch();
   login();
   fclose(fp);
   system("cls");
   }
do{ 
	 {
	fflush( stdin );
	i = 0;
	fp = fopen  (ubiu	, "r");
 	fgets(buffer,40,fp);
 	printf("Digite su clave para continuar: ");
 			while (caracter = getch()) {
			if (caracter == TECLA_ENTER) {
				contrase[i] = '\0';
				break;
				
			} else if (caracter == TECLA_BACKSPACE) {
				if (i > 0) {
					i--;
					printf("\b \b");
				}
				
			} else {
				if (i < LONGITUD) {
					printf("*");
					contrase[i] = caracter;
					i++;
				}
			}
		}
	fgets(nombre, 50,fp);
 	fclose(fp);	
 }
if  (strcmp(contrase,buffer) == 0)
{
	strcpy(contrase, "");
	fclose(fp);
	ingresa == 1;
	system("cls");
	printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
	printf(CI"\t\t\t##                                                                      ##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                        CONTRASEÑA CORRECTA                           "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
	printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
	std::cout << "\t\t\t\t\t\t\t  |||||\n\t\t\t\t\t\t\t 0 . . 0\n\t\t\t\t\t\t\t0   ^   0\n\t\t\t\t\t\t\t0  \\_/  0\n\t\t\t\t\t\t\t 0     0\n\t\t\t\t\t\t\t  00000\n\t\t\t\t\t\t\t   888\n\t\t\t\t\t\t\t    8\n\n";
	Sleep(1200);
	menu();
}
else
{
	ingresa = 0;
	intento++;
	if (intento > MAX_INTENTOS) {
		Sleep(100);
		system("cls");
		printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
		printf(CI"\t\t\t##                                                                      ##\n");
		printf("\t\t\t##"RED"                 Se superó el numero máximo de intentos!              "CI"##\n");
		printf("\t\t\t##"RED"                          Volviendo al inicio                         "CI"##\n");
		printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
		printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
		Sleep(2000);		
		login();
		return;
	} else {
		printf("\nClave incorrecta!\n");
		printf(RED"%d/3\n"ANSI_COLOR_RESET"",intento);
		Sleep(100);
		fclose(fp);
	}
}
} while (ingresa == 0);
}



void gesuser(void)
{	int opc;
	FILE *fp;
	char elimu[MAX];
	char cie[MAX];
	const char* str1 = "c:/DDEPS/usuarios/";
	char ubielu[MAX];
	char ubieu[MAX];
	char cir[10];
	char newpas[90];
	char clave[50];
	do{
	system("cls");
	printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
	printf(CI"\t\t\t##                                                                      ##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                              MENU                                    "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                [1]Registre nuevo usuario                             "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                [2]Ver clave de un usuario                            "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET "                [3]Eliminar usuario                                   "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                [4]Volver al menu inicial                             "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                [5]Salir                                              "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
	printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
	printf("\nDigite la opción a escoger: ");
	strcat(strcpy(ubielu, str1), cie);
	fflush( stdin );
	scanf("%d", &opc);
		switch(opc){
			case 1:
				system("cls");
				ruser();
				break;
			case 2: 
				system("cls");
				fflush(stdin);
				system("cls");
				printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
				printf(CI"\t\t\t##                                                                      ##\n");
				printf("\t\t\t##"ANSI_COLOR_RESET"                        Ver datos de usuario                          "CI"##\n");
				printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
				printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
				printf("Ingrese el C.I del doctor: ");
				scanf("%s",cie);
				strcat(strcpy(ubielu, str1), cie);
				fp = fopen  (ubielu	, "r");
				if(fp!=NULL)
				{
				fgets (clave, 50, fp);
				printf("\nUsuario: %s\n",cie);
				printf("La clave es la siguiente: ");
				puts(clave);
				getch();
				menu();
				fclose(fp);}
				else 
				{
				printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
				printf(CI"\t\t\t##                                                                      ##\n");
				printf("\t\t\t##"ANSI_COLOR_RESET"                        No existe el usuario!                         "CI"##\n");
				printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
				printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
				printf("No existe el usuario");
				getch();
				fclose(fp);
				menu();}
				break;
			case 3: 
				system("cls");
				char cir[10];
				printf(CI"\t\t\t==========================================================================\n");
				printf("\t\t\t##                                                                      ##\n");
  				printf("\t\t\t##"ANSI_COLOR_RESET"                        ELIMINAR USUARIO                              "CI"##\n");
  				printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
  				printf("\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
				fflush(stdin);
				printf("Digite el numero de cédula del usuario a eliminar: ");
				scanf("%s",elimu);
				strcat(strcpy(ubieu, str1), elimu);
				if(remove(ubieu)==0){
				system("cls");
				printf(CI"\t\t\t==========================================================================\n");
				printf("\t\t\t##                                                                      ##\n");
  				printf("\t\t\t##"ANSI_COLOR_RESET"                        C.I DEL USUARIO ELIMINADO                     "CI"##\n");
  				printf("\t\t\t##"ANSI_COLOR_RESET"                                %s                            "CI"##\n",cir );
  				printf("\t\t\t##"ANSI_COLOR_RESET"                     Se eliminó de manera correcta                    "CI"##\n");
  				printf("\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
    			getch();
				}else{
        		printf("\t\t\tHubo un error vuelva a intentar.\n");   
        		printf("\t\t\tRecuerde que no puede borrar su propio usuario!.\n");  
				getch();}
				break;
			case 4:
				system("cls");
				menu();
				break;
			case 5:
				printf("Gracias por confiar en nosotros!\n");
				printf("Digite enter para salir\n");
				getch();
				exit(1);
				break;
			default:
				printf("\nOpciócn incorrecta");
				getch();
				break;
			}
		}while(opc!=6);
}

void validar(char num[]){
    for (int i = 0; i < strlen(num); i++)
    {
        if(!isdigit(num[i]) ) {
			system("cls");
			printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
			printf(CI"\t\t\t##                                                                      ##\n");
			printf("\t\t\t##"ANSI_COLOR_RESET"                        ¡SOLO SE ACEPTAN CÉDULAS!                     "CI"##\n");
			printf("\t\t\t##"ANSI_COLOR_RESET"                           REGRESANDO AL MENU                         "CI"##\n");
			printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
			printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
            getch();
			gesuser();
	        break;
        }
    }
}

void ruser(void)
{
	int cedula;
	int ced,pares,impares,total,dec=0;
    int a,b,c,d,e,f,g,h,i,j,k;
	FILE *fp;
	char cir[MAX];
	const char* str1 = "c:/DDEPS/usuarios/";
	char ubieu[MAX];
	char nombre[30];
	char newpas[90];
	char caracter;
	system("cls");
	printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
	printf(CI"\t\t\t##                                                                      ##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                        REGISTRO DE USUARIOS                          "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
	printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
	fflush(stdin);
	printf("Digite numero de cedula: ");
    scanf("%s",cir);
    strcat(strcpy(ubieu, str1), cir);
    validar(cir);
    cedula = atoi(cir);
    ced=cedula;
    a=cedula/1000000000;
    cedula=cedula-(a*1000000000);
    b=cedula/100000000;
    cedula=cedula-(b*100000000);
    c=cedula/10000000;
    cedula=cedula-(c*10000000);
    d=cedula/1000000;
    cedula=cedula-(d*1000000);
    e=cedula/100000;
    cedula=cedula-(e*100000);
    f=cedula/10000;
    cedula=cedula-(f*10000);
    g=cedula/1000;
    cedula=cedula-(g*1000);
    h=cedula/100;
    cedula=cedula-(h*100);
    i=cedula/10;
    cedula=cedula-(i*10);
    j=cedula/1;
    cedula=cedula-(j*1);
	if (cedula>2400000000){
    printf("wtf");
    }else{
        pares=b+d+f+h;
        a=a*2;	
        if (a>9){
            a=a%10+a/10;
        }
        c=c*2;
        if (c>9){
            c=c%10+c/10;
        }
        e=e*2;
        if (e>9){
            e=e%10+e/10;
        }
        g=g*2;
        if (g>9){
            g=g%10+g/10;
        }
        i=i*2;
        if (i>9){
            i=i%10+i/10;
        }
        impares=a+c+e+g+i; 
        total=pares+impares;
        while (dec-total!=j && dec<total+10){
            dec=dec+10;
        }
        if (dec-total==j)
		{
		    fflush(stdin);
			fp = fopen  (ubieu	, "r");
			if(fp!=NULL){
				printf("\nError");
				printf("\nYa existe este usuario");
				getch();
				fclose(fp);}
			else {
				i = 0;
				fp = fopen  (ubieu	, "w+");
				printf("Digite su clave: ");
					while (caracter = getch()) {
						if (caracter == TECLA_ENTER) {
							newpas[i] = '\0';
							break;
						} else if (caracter == TECLA_BACKSPACE) {
							if (i > 0) {
							i--;
							printf("\b \b");
						}
				
							} else {
						if (i < LONGITUD) {
							printf("*");
							newpas[i] = caracter;
							i++;
						}
				}
		}
				
				printf("a\n"ANSI_COLOR_RESET);
				fputs(newpas, fp);
				system("cls");
				printf(CI"\n\n\n\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
				printf(CI"\t\t\t##                                                                      ##\n");
				printf("\t\t\t##"ANSI_COLOR_RESET"                       USUARIO REGISTRADO CON ÉXITO!                  "CI"##\n");
				printf("\t\t\t##"ANSI_COLOR_RESET"                                   :)                                 "CI"##\n");
				printf("\t\t\t##"ANSI_COLOR_RESET"                     Recuerde tener su clave en resguardo             "CI"##\n");
				printf(CI"\t\t\t##                                                                      ##\n");
				printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
				printf("\n\t\t\t\t"ANSI_COLOR_RESET"                       Su clave es: %s                                               \n",newpas);
				fclose(fp);
				getch();
				return;
				}
        	getch();
        }else {
        	system("cls");
			printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
			printf(CI"\t\t\t##                                                                      ##\n");
			printf("\t\t\t##"ANSI_COLOR_RESET"                        ¡SOLO SE ACEPTAN CÉDULAS!                     "CI"##\n");
			printf("\t\t\t##"ANSI_COLOR_RESET"                           REGRESANDO AL MENU                         "CI"##\n");
			printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
			printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
        	getch();
        	ruser();
        }     
    }  
}

void registr(void)
{
char infa[MAX];
const char* str1 = "c:/DDEPS/registros/";
char ubifin[MAX];
FILE *fp;
char registros[99999];
	fflush(stdin);
	system("cls");
	printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
	printf(CI"\t\t\t##                                                                      ##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                        ¡REGISTRO DE PACIENTES!                       "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                 PARA REVISAR LA FICHA DE UN PACIENTE                 "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                 INTRODUCE LA FECHA Y LOS DATOS PEDIDOS               "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                      DIA/MES/AÑO/NOMBRE/APELLIDO                     "CI"##\n");
    printf("\t\t\t##"ANSI_COLOR_RESET"                     EJM: 10_04_21_daniel_espinosa                    "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                                   Ó                                  "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                  EL NOMBRE DEL FORMATO QUE HAYAS PUESTO              "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
	printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
	fflush(stdin);
	printf("Digite el nombre de la consulta: ");
	scanf("%s",infa);
	strcat(strcpy(ubifin, str1), infa);
	fp = fopen  (ubifin	, "r");
	if(fp==NULL)
	{
	system("cls");
	printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
	printf(CI"\t\t\t##                                                                      ##\n");
	printf("\t\t\t##"RED"                                  ERROR                               "CI"##\n");
	printf("\t\t\t##"RED"                          ARCHIVO NO ENCONTRADO                       "CI"##\n");
	printf("\t\t\t##"RED"                            VOLVIENDO AL MENU                         "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
	printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
	getch();
	menu();
	system("cls");
	fclose(fp);
	}
	else 
	{
	system("cls");
	printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
	printf(CI"\t\t\t##                                                                      ##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                    DETALLES DE LA CONSULTA:                          "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
	printf(CI"\t\t\t==========================================================================\n\n\n"ANSI_COLOR_RESET);
	fgets (registros, 999999, fp);
	puts(registros);
	printf(CI"\n\n\n\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
	printf(CI"\t\t\t##                                                                      ##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                  ESTE ARCHIVO SOLO ES PARA LECTURA                   "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                     ENTER PARA VOLVER AL MENU                        "CI"##\n");
	printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
	printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
	getch();
	menu();
	fclose(fp);
}
}

void menu(void)
{
	setlocale(LC_ALL, "spanish");
	int opcc;
	int n;
	do {
  system("cls");
  printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
  printf(CI"\t\t\t##                                                                      ##\n");
  printf("\t\t\t##"ANSI_COLOR_RESET"                              MENU                                    "CI"##\n");
  printf("\t\t\t##"ANSI_COLOR_RESET"                [1]Ver registro de paciente                           "CI"##\n");
  printf("\t\t\t##"ANSI_COLOR_RESET"                [2]Realizar examen DDEDPS                             "CI"##\n");
  printf("\t\t\t##"ANSI_COLOR_RESET "                [3]Gestión usuarios                                   "CI"##\n");
  printf("\t\t\t##"ANSI_COLOR_RESET"                [4]Salir                                              "CI"##\n");
  printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
  printf(CI"\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
 		printf("\nDigite opción a escoger: ");
 		fflush( stdin );
 		scanf("%d",&opcc);
	 switch(opcc){
 		case 1 : 
 			system("cls");
 			registr();
 			break;
 		case 2:
 			system("cls");
			exm();
			break;
		case 3:
		 	gesuser();
			break;	
		case 4:
			exit(1);
			break;	
		default:
			printf("\nOpción incorrecta");
			getch();
			break;
			}
	} while(opcc!=4);
}

void exm(void)
{
	FILE *Fp;
	FILE *Fd;
	char fitxizen[30],palabra[60],pala2[30],texto[80],
	delimitador[] = ",";
	char *token = strtok(palabra, delimitador);
    int i,tmp1,tmp2,konta=0;
	int opc;
	do{
	system("cls");
	printf(CI"\t\t\t==========================================================================\n");
	printf("\t\t\t##                                                                      ##\n");
  	printf("\t\t\t##"ANSI_COLOR_RESET"                          EXAMEN DDEDPS                               "CI"##\n");
  	printf("\t\t\t##"ANSI_COLOR_RESET"                [1]Para comenzar                                      "CI"##\n");
    printf("\t\t\t##"ANSI_COLOR_RESET"                [2]Volver                                             "CI"##\n");
  	printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
  	printf("\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
	printf("\t\t\tDigite opcion a escoger: ");
	fflush( stdin );
		scanf("%d",&opc);
		switch(opc){
		case 1: 
			system("cls");
 			exmla();
 			break;
		case 2:
			system("cls");
 	 		menu();
			break;
		default:
			printf("\nOpciócn incorrecta");
			getch();
			break;}
	} while(opc!=2);
}

void exmla(void){
	fflush( stdin );
	system("cls");
	FILE* Fp;
	FILE* Fd;
	int i,tmp1,tmp2,prom=0, cal, n2;
    char cadena[500],
    delimitador[] = " ",texto[50000];
    Fp=fopen("c:/DDEPS/palabras.txt", "r");
    fgets(cadena,800,Fp);
    char *token = strtok(cadena, delimitador);
    Fd=fopen("C:/DDEPS/DDEPSa.txt","r");
    if (Fd==NULL){
		printf("Error abriendo el fichero");}
		if(token != NULL)
		while(token != NULL){
			
		while (feof(Fd)==0)
    	{
        fgets(texto,5000,Fd);
        for(i=0;i<strlen(texto);i++)
        {
        	
        	if (token[0]==texto[i])
            {
            tmp1=0;
            tmp2=i;
            while ((token[tmp1]==texto[tmp2])&&(tmp2<strlen(texto))&&(tmp1!=strlen(token)))
                  {
                        tmp1++;
                        tmp2++;
                        if (tmp1==strlen(token));
                  }
               }
            }
  		}
		prom++;
		token = strtok(NULL, delimitador);
		}
		cal = (5 * prom)/25;
		printf("\nEl examen realizado consta de un nivel de probabilidad del estado depresivo "RED"%d"ANSI_COLOR_RESET" ",cal);
      	printf("\nSe recomienda hacer un análisis profundo si es necesario* ");
      	printf("\nEnter para continuar con la creación de la ficha del paciente");
      	getch();
      	regsp();
      	}

void regsp(void){

		fflush( stdin );
		FILE* avr;
		char textoa[5000];
		char infa[MAX];
		const char* str1 = "c:/DDEPS/registros/";
		char ubifin[MAX];
		int opc, op2;
      	system("cls");
      	printf(CI"\t\t\t==========================================================================\n");
		printf("\t\t\t##                                                                      ##\n");
  		printf("\t\t\t##"ANSI_COLOR_RESET"                     RECUERDE QUE PARA LA CREACIÓN                    "CI"##\n");
  		printf("\t\t\t##"ANSI_COLOR_RESET"                      DEL HISTORIAL DE LA CONSULTA                    "CI"##\n");
    	printf("\t\t\t##"ANSI_COLOR_RESET"                  SE CREARÁ CON EL SIGUIENTE FORMATO:                 "CI"##\n");
    	printf("\t\t\t##"ANSI_COLOR_RESET"                      DIA/MES/AÑO/NOMBRE/APELLIDO                     "CI"##\n");
    	printf("\t\t\t##"ANSI_COLOR_RESET"                     EJM: 10_04_21_daniel_espinosa                    "CI"##\n");
    	printf("\t\t\t##"ANSI_COLOR_RESET"              RESPETE EL ORDEN O INFORME QUE SE INTRODUJO             "CI"##\n");
    	printf("\t\t\t##"ANSI_COLOR_RESET"         SI INTRODUJO MAL LA INFORMACIÓN AVISAR AL ADMINISTRADOR      "CI"##\n");
    	printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
  		printf("\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
  		printf("Ingrese información: ");
  		scanf("%s",infa);
  		strcat(strcpy(ubifin, str1), infa);
  		avr = fopen(ubifin, "r");
  		if (avr == NULL){
  			do{
  			printf("\nRevise si se introdujo bien la información, para continuar digite '1' o si no es así digite '2' para reintentar :\n");
  			fflush( stdin );
 			scanf("%d",&opc);
			switch(opc){
		case 1:
			system("cls");
 			fflush( stdin );
 			printf("Escriba aquí el resultado y la conclusión que se llegó con el paciente\n");
 			printf("Recuerde NO agregar saltos de línea o enter mientras escribe!\n");
 			gets(textoa);
 			system("cls");
 			printf("Esto es lo que se guardará en el registro del paciente: \n");
 			puts(textoa);
 			printf("Se volverá al menu al dar enter");
 			avr = fopen(ubifin, "w+");
 			fputs(textoa, avr);
 			fclose(avr);
 			getch();
 			menu();
			break; 
		case 2:
			system("cls");
 			regsp();
 			break;
		default:
			printf("\nOpción incorrecta");
			getch();
			break;}
	} while(opc!=2);		
	}else{
		system("cls");
		printf(CI"\t\t\t==========================================================================\n");
		printf("\t\t\t##                                                                      ##\n");
  		printf("\t\t\t##"ANSI_COLOR_RESET"                     REVISE QUE TODO ESTÉ CORRECTO                    "CI"##\n");
 		printf("\t\t\t##"ANSI_COLOR_RESET"                   ES POSIBLE QUE EL REGISTRO EXISTA                  "CI"##\n");
 		printf("\t\t\t##"ANSI_COLOR_RESET"                         VOLVIENDO AL INICIO                          "CI"##\n");
    	printf("\t\t\t##"ANSI_COLOR_RESET"                                                                      "CI"##\n");
  		printf("\t\t\t==========================================================================\n"ANSI_COLOR_RESET);
  		Sleep(2200);
  		regsp();
	}
}
