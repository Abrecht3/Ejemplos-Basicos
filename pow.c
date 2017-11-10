/*
    Genera el cuadrado de un numero con operaciones basicas y funciones
    simula el funcionamiento de la funcion pow(,) de math.h
*/
#include<stdio.h>

int cx;
void cuadrado(int cx);

int main(void)
{
    int cx=23;
    printf("el valor de CX es: %d ",cx);
    cuadrado(cx);
}

void cuadrado(int cx)
{
    int porc;
    printf("ingresa un numero para saber su cuadrado: ");
    scanf("%d",&cx);
    porc=cx*cx;
    printf("El cuadrado es: %d ",porc);
}
