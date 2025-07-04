/*ESTE PROGRAMA APLICA EL ALGORITMO DE BISECCION PARA ENCONTRAR LA RAIZ DE
UNA ECUACION*/
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double a,b,tolerancia;
unsigned int nitermax,contador;
double f(double),raiz,error;
void leer_datos(),comprueba(),bisecta(),imprimir();
int main()
{
    leer_datos();
    comprueba();
    bisecta();
    imprimir();
    return 0;
}
double f(double x)
{
    return(pow(x,2.0)-sin(x));
}
void leer_datos()
{
    printf("\nESTE PROGRAMA ENCUENTRA LA RAIZ DE UNA ECUACION POR EL ALGORITMO DE BISECCION\n");
    printf("\t\ta=");
    scanf("%lf",&a);
    printf("\t\tb=");
    scanf("%lf",&b);
    printf("\t\tTolerancia=");
    scanf("%lf",&tolerancia);
    printf("\t\t# Maximo de Iteraciones=");
    scanf("%u",&nitermax);
}
void comprueba()
{
    double producto;
    producto=f(a)*f(b);
    if(producto==0)
    {
         error=0;
         if(f(a)==0)
            raiz=a;
         else
            raiz=b;
         imprimir();
    }
    if(producto>0)
    {
         printf("\nNO SE SATISFACE LA CONDICION f(a)*f(b) <0");
         main();
    }
}
void bisecta()
{
    double xmedia,producto;
    error=1.0;
    contador=0;
    while(error>tolerancia && contador<nitermax)
    {
         ++contador;
         xmedia=(a+b)/2;
         producto=f(a)+f(xmedia);
         if(producto==0)
         {
              raiz=xmedia;
              error=0;
              imprimir();
         }
         if(producto<0)
              b=xmedia;
         else
              a=xmedia;
         error=fabs(b-a);
         printf("\nIteracion=%u Xmedia=%2.18lf Error=%2.18lf",contador,xmedia,error);
    }
    raiz=xmedia;
}
void imprimir()
{
    printf("\nRaiz=%2.18lg",raiz);
    printf("\nError=%2.18lg",error);
    printf("\n# de Iteraciones=%u\n",contador);
    exit(1);
}
