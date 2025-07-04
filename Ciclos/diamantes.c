/*
Programa que imprime un rectangulo formado por
un caracter escogido por el usuario y en su interior
se forma un rombo con el vacio de cada linea
*/
#include <stdio.h>

/*se declaran los prototipos de las funciones*/
int diamanteImpar(int linea, char valor);
int diamantePar(int linea, char valor);

int main(void)
{
	int linea;
	char valor;
	printf("Ingrese el caracter: \n");
	scanf("%c", &valor);
	printf("Dame una Cantidad de Lineas: \n");
	scanf("%d", &linea);
	printf("\n");
	/*
	se define si el numero de lineas es par o impar
	dependiendo del resultado se llamara una funcion
	distinta en cada caso
	*/
	if (linea % 2 == 1)
	{
		diamanteImpar(linea, valor);
	}
	else
	{
		diamantePar(linea, valor);
	}
}

/*se declara la funcion con todos los enunciados de esta
para los valores impares*/
int diamanteImpar(int linea, char valor)
{
	int i, j, cont = 1, aux = linea, k;
	/*con este ciclo se realizara la figura superior*/
	for (i = linea / 2; i > 0; i--)
	{
		for (j = i; j > 0; j--)
		{
			printf("%c", valor);
		}
		for (j = 0; j < cont; j++)
		{
			printf(" ");
		}
		for (j = i; j > 0; j--)
		{
			printf("%c", valor);
		}
		cont = cont + 2;
		printf("\n");
	}
	printf("\n");
	cont = cont - 2;
	/*con este ciclo se realizara la figura inferior*/
	for (i = 1; i <= linea / 2; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%c", valor);
		}
		for (k = 3; k <= (2 * aux - (cont + 2)); k++)
		{
			printf(" ");
		}
		for (j = i; j > 0; j--)
		{
			printf("%c", valor);
		}
		printf("\n");
		aux--;
	}
}
/*se declara la funcion con todos los enunciados de esta
para los valores pares*/
int diamantePar(int linea, char valor)
{
	int i, j, cont = 1, aux = linea, k;
	/*con este ciclo se realizara la figura superior*/
	for (i = linea / 2; i > 0; i--)
	{
		for (j = i - 1; j > 0; j--)
		{
			printf("%c", valor);
		}
		for (j = 0; j < cont + 1; j++)
		{
			printf(" ");
		}
		for (j = i - 1; j > 0; j--)
		{
			printf("%c", valor);
		}
		cont = cont + 2;
		printf("\n");
	}
	cont = cont - 2;
	/*con este ciclo se realizara la figura inferior*/
	for (i = 1; i <= linea / 2; i++)
	{
		for (j = 1; j < i; j++)
		{
			printf("%c", valor);
		}
		for (k = 0; k <= (2 * aux - (cont + 2)); k++)
		{
			printf(" ");
		}
		for (j = i; j > 1; j--)
		{
			printf("%c", valor);
		}
		printf("\n");
		aux--;
	}
}
