/*Programa para ejemplificar el operador modulo
recibe el numero de segundos y los convierte a
horas minutos y segundos*/
#include <stdio.h>
#define MIN 60
#define HOUR 3600

unsigned int seg, min, hour, segl, minl;

int main(void)
{
    /*Recibe la cantidad de segundos*/
    printf("Ingresa el numero de segundos(<65000): \n");
    scanf("%d", &seg);
    hour = seg / HOUR;
    min = seg / MIN;
    minl = min % MIN;
    segl = seg % MIN;
    printf("\n%u segundos son iguales a: ", seg);
    printf("\n%dh %dm %ds \n", hour, minl, segl);
    return 0;
}
