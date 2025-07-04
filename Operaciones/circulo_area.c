/*
Programa para calcular el area de un circulo
recibe un valor desde el teclado y usa operadores aritmeticos basicos (*)
y un valor constante para pi, para asi retornar el resultado
*/
#include <stdio.h>

float radio, area;

int main(void)
{
    printf("Ingresa el valor del radio: ");
    scanf("%f", &radio);
    area = 3.1415 * (radio * radio);
    printf("\n\nel area es: %f \n", area);
}
