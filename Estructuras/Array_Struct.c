/*Este programa muestra un array cuyas entradas son estructuras*/
#include <stdio.h>
#define MAX 30
/*se define una estructura con los datos que recibira
un nombre y un apellido menores a 30 caracteres
y un telefono menor a 15 caracteres*/
typedef struct
{
    char nombre[30];
    char apellido[30];
    char phone[15];
} index;

int main(void)
{
    index lista[4];
    int i;
    for (i = 0; i < 4; i++)
    {
        puts("ingresa el nombre y apellido: ");
        scanf("%s %s", &lista[i].nombre, &lista[i].apellido);
        puts("ingrese el telefono: ");
        scanf("%s", &lista[i].phone);
    }
    printf("\n\n");
    for (i = 0; i < 4; i++)
    {
        printf("Nombre %s %s\t\t", lista[i].apellido, lista[i].nombre);
        printf("telefono %s\n", lista[i].phone);
    }
    printf("\n");
    return 0;
}
