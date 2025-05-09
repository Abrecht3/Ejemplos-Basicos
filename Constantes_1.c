/*programa que define constantes para convertir
el peso de libras a Kilogramos asi como la edad actual*/

/*Uso de constantes*/
#include <stdio.h>
#define Grams_Pounds 0.454
const actual = 2025;

long wpounds, wgramos;
int anioN, edadA;

int main(void)
{
    /*recibe los datos del usuario*/
    printf("Ingresa tu peso en libras: \n");
    scanf("%ld", &wpounds);
    printf("Ingresa tu anio de nacimiento: \n");
    scanf("%d", &anioN);
    wgramos = wpounds * Grams_Pounds;
    edadA = anioN - actual;
    printf("\ntu peso en kilogramos es: %ld\n", wgramos);
    printf("tu edad en el 2025 es: %d anios\n", -1 * edadA);
    return 0;
}
