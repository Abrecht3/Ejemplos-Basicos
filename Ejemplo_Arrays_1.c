/*
Programa que muetra el uso de arrays
Recibe el tamaño de un array y dependiendo del valor recibido
solicitara valores que se recibiran desde el teclado, luego los mostrara y
y mostrara si es par con un 0 o impar con un 1
*/

#include <stdio.h>

int main(void)
{
	int numeros[1000];
	int i;

	int n;

	printf("Ingrese el tama�o del arreglo\n");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("Ingrese un numero entero\n");
		scanf("%d", &numeros[i]);
	}

	printf("Lista de numeros\n");

	for (i = 0; i < n; i++)
	{
		printf("%d por lo tanto %d\n", numeros[i], numeros[i] % 2);
	}

	return 0;
}
