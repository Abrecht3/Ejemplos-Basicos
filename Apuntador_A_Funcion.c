/*Demostracion de la declaracion y uso de una apuntador a
una funcion*/
#include <stdio.h>

float Cuadro(float x);
float (*p)(float x);

int main(void)
{
    p = Cuadro;
    printf("Usando la funcion %f", Cuadro(6.6));
    printf("Usando apuntador %f", p(6.6));
    return 0;
}

float Cuadro(float x)
{
    return (x * x);
}
