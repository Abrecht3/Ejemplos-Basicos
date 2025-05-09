/*Uso de apuntadores*/

/*Programa que Ordena los valores de un vector los imprime si
se encuentran dentro de un Rango deseado y borra si estan
repetidos*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int tamVector(void);
void leeVector(int *X, int n);
void Burbuja(int *X, int n);
void impVector(int *X, int n, int l, int k);

int main(void)
{
    int *X;
    int tam;
    int max, min;
    tam = tamVector();
    X = (int *)malloc(tam * sizeof(int));
    min = limInf();
    max = limSup();
    leeVector(X, tam);
    Burbuja(X, tam);
    impVector(X, tam, max, min);
}
/*funcion para determinar el tama�o del array*/
int tamVector(void)
{
    int n;
    printf("ingresa el tamanio del arreglo: \n");
    scanf("%d", &n);
    return (n);
}
/*Las dos funciones siguientes reciben los limites del arreglo*/
int limInf(void)
{
    int l;
    printf("ingresa el limite inferior: \n");
    scanf("%d", &l);
    return (l);
}

int limSup(void)
{
    int k;
    printf("ingresa el limite superior: \n");
    scanf("%d", &k);
    return (k);
}
/*funcion que recibe los datos que se almacenaran en el array*/
void leeVector(int *X, int n)
{
    int i;
    printf("valores del arreglo: \n");
    for (i = 0; i < n; i++)
    {
        printf("\nA[%d]= ", i + 1);
        scanf("%d", X);
        X++;
    }
    return;
}
/*funcion que ordena los valores del arreglo por el metodo de burbuja*/
void Burbuja(int *X, int n)
{
    int i, j, temp;
    for (j = 1; j <= n; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (X[i] > X[i + 1])
            {
                temp = X[i];
                X[i] = X[i + 1];
                X[i + 1] = temp;
            }
        }
    }
}
/*funcion que muestra el array ordenado y cumpliendo los requisitos*/
void impVector(int *X, int n, int l, int k)
{
    int i;
    printf("\n\nArreglo B[%d]:", n);
    for (i = 0; i < n; i++, X++)
    {
        if (*X != *(X + 1))
        {
            if (*X <= l)
            {
                if (*X >= k)
                {
                    printf(" %d ", *X);
                }
            }
        }
    }
    printf("\n\n");
    return;
}
