/*
Muestra el funcionamiento de los condicionales if-else de manera sencilla
en este ejemplo siempre se van a cumplir las condiciones 1 y 4,
las condiciones 2 y 3 no son validas y por ello no se imprimen en pantalla
*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    int x = 4, y = 6, z = 2;
    if (x == 4)
    {
        printf("***\n");
    }
    if (x != y - z)
    {
        printf("* *\n");
    }
    if (z == 1)
    {
        printf(" * \n");
    }
    if (y)
    {
        printf("*y*\n");
    }
    return 0;
}
