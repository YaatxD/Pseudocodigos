/* Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
Es posible que el codigo generado no sea completamente correcto. Si encuentra
errores por favor reportelos en el foro (http://pseint.sourceforge.net). */

#include<stdio.h>

/* Para las variables que no se pudo determinar el tipo se utiliza la constante
   SIN_TIPO. El usuario debe reemplazar sus ocurrencias por el tipo adecuado
   (usualmente int,float,bool, o char[]). */
#define SIN_TIPO float

/* Para leer variables de texto se utiliza scanf, que lee solo una palabra. 
   Para leer una linea completa (es decir, incluyendo los espacios en blanco)
   se debe utilzar ges (ej, reemplazar scanf("%s",x) por gets(x)) pero 
   obliga a agregar un getchar() antes del gets si antes del mismo se leyó
   otra variable con scanf. */

int main() {
	float answer;
	SIN_TIPO answercero;
	SIN_TIPO answerone;
	/* Instrucciones */
	printf("Bienvenido al sistema que te ayuda a solucionar problemas con tu microondas\n");
	printf("Responde Si presionando el número 0 en tu teclado y 1 para un No\n");
	printf("Esta conectado el microondas?\n");
	scanf("%s",answer);
	/* Si la respuesta es si, que el usuario presione 0, de lo contrario, que presione 1. */
	if (answer==0) {
		/* ***- Lógica del ejercicio -*** */
		if (answer==0) {
			printf("?Encendio la pantalla del microondas?\n");
			scanf("%s",answerone);
			/* Aquí el usuario si confirma que si, tiene que dar clic en el 0. */
			if (answer==0) {
				/* Vamos a mostrar el mensaje que corresponde a la respuesta dada. */
				printf("Remplazar el microondas, por favor\n");
			} else {
				printf("Comprar un microondas nuevo, por favor\n");
			}
		} else {
			printf("Conectelo, por favor.\n");
		}
	}
	if (answer==1) {
		/* ***- Lógica del ejercicio -*** */
		if (answer==0) {
			printf("?Encendio la pantalla del microondas?\n");
			scanf("%s",answercero);
			/* Aquí el usuario si confirma que si, tiene que dar clic en el 0. */
			if (answer==1) {
				/* Vamos a mostrar el mensaje que corresponde a la respuesta dada. */
				printf("Remplazar el microondas, por favor\n");
			} else {
				printf("Comprar un microondas nuevo, por favor\n");
			}
		} else {
			printf("Conectelo, por favor.\n");
		}
	}
	/* Se evalua la tecla presionada por el usuario y si no es: 0 o 1, devuelve un mensaje de error */
	if (answer!=0 || answer!=1) {
		printf("Respuesta no válida :´D\n");
	}
	return 0;
}

