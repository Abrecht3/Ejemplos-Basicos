#include<stdio.h>

int Suma,ValorA,ValorB;
float Resta,Division,Producto;
float ValorC,d,e,f,g,h;

main()
{
    printf("Dame los valores de la suma: \n");
    scanf("%d %d",&ValorA,&ValorB);
    printf("\nDame los valores de la Resta: \n");
    scanf("%f %f",&ValorC,&d);
    printf("\nDame los valores del Producto: \n");
    scanf("%f %f",&e,&f);
    printf("\nDame los valores de la Division: \n");
    scanf("%f",&g);
    scanf("%f",&h);
    Suma=ValorA+ValorB;
    Resta=ValorC-d;
    Producto=e*f;
    if (h>0){
        Division=g/h;
    }
    printf("\nLa Suma es: %d\n",Suma);
    printf("La Resta es: %.0f\n",Resta);
    printf("El Producto es: %.0f\n",Producto);
    printf("La Division es: %.2f\n",Division);

}
