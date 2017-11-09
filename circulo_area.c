//Programa para calcular el area de un circulo
#include<stdio.h>

float radio,area;

int main(void)
{
    printf("Ingresa el valor del radio: ");
    scanf("%d",&radio);
    area=3.1415*radio*radio;
    printf("\n\nel area es: %f ",area);
}
