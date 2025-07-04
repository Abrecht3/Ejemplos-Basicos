/*programa qu recibe 10 calificaciones y muestra el
promedio, las calificaciones deben estar en un rango
especificado*/

/*Arrays, ciclo for y condicional if*/

#include <stdio.h>
#define CalMax 100
#define Alumnos 10

int main(void)
{
    int calif[Alumnos];
    int idx, total = 0;
    for (idx = 0; idx < Alumnos; idx++)
    {
        printf("ingresa la calificacion de la persona %d: ", idx + 1);
        scanf("%d", &calif[idx]);
        if (calif[idx] > CalMax)
        {
            printf("la calificacion maxima es: %d", CalMax);
            printf("\ningresa una calificacion correcta: ");
            scanf("%d", &calif[idx]);
        }
        total += calif[idx];
    }
    printf("\nel promedio del grupo es: %d\n\n", total / Alumnos);
    return 0;
}
