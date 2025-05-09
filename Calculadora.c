/*Ejemplo de una calculadora en la que se elige el tipo de operacion a realizar primero*/
/*Uso de Switch y while,*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int opc = 0;
    float a = 0.0, b = 0.0, resultado = 0.0;
    printf("Calculadora Basica \n");
    printf("Escoja una Operacion: \n");
    printf("1-producto 2-potencia 3-division 4-raiz 5-salir \n");
    scanf("%d", &opc);
    while (opc > 0 && opc < 5)
    {
        printf("Proporciona los Valores de a y b: \n");
        scanf("%f %f", &a, &b);
        switch (opc)
        {
        case 1:
            resultado = a * b;
            printf("\n %4.2f * %4.2f = %4.2f", a, b, resultado);
            break;
        case 2:
            resultado = pow(a, b);
            printf("\n pow(%4.2f,%4.2f) = %4.2f", a, b, resultado);
            break;
        case 3:
            if (b != 0)
            {
                resultado = a / b;
                printf("\n %4.2f / %4.2f = %4.2f", a, b, resultado);
            }
            else
                printf("\n b debe ser distinto de cero \n");
            break;
        case 4:
            if ((a * b) > 0)
            {
                resultado = sqrtf(a * b);
                printf("\n sqrtf(%4.2f*%4.2f) = %4.2f", a, b, resultado);
            }
            else
                printf("(a*b) debe ser mayor a cero \n");
            break;
        default:
            printf("Salir del programa");
            break;
        }
        printf("\n Escoge una Opcion: ");
        scanf("%d+5", &opc);
    }
    printf("Salir del Programa");
    return 0;
}
