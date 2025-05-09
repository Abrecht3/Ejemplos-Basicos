/*uso del ciclo for*/
/*Muestra los valores ASCII para los caracteres de la a A la Z*/
#include <stdio.h>

int main(void)
{
    int ctr;
    for (ctr = 65; ctr < 91; ctr++)
    {
        printf(" %c ", ctr);
    }
    printf("\n");
    return 0;
}
