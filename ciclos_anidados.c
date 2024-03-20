// Ejemplo de ciclos for anidados
/* Se imprimira en pantalla una X el numero de veces que indica el ciclo anidado
*  En cada paso del ciclo mostrara menos X, formando la mitad de un triangulo
*/

#include <stdio.h>

int main(void)
{
    int x, y;
    int i=5;
    // Primer ciclo for
    for (x = 0; x < 10; x++)
    {
        // Segundo ciclo for (Ciclo anidado)
        for (y = i; y > 0; y--)
        {
            printf("X\t");
        }
        printf("\n");
        i--;
    }
    return 0;
}
