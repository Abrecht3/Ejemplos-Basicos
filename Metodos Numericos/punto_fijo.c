//ESTE PROGRAMA IMPLEMENTA EL ALGORITMO DE PUNTO FIJO...
#include<stdio.h>
#include<math.h>
void leer_datos(),puntofijo(),imprimir();
double g(double),xn,tolerancia,error,raiz;
unsigned int nitermax,contador;
main()
{
 leer_datos();
  puntofijo();
 imprimir();
 return 0;
         }
double g(double x)
{
 return(sqrt(sin(x)));
            }
void leer_datos()
{
 printf("\nEste proframa aplica Punto Fijo Xn+1=(Xn)...\n");
  printf("\nXn=");
   scanf("%lf",&xn);
    printf("\nTolerancia=");
   scanf("%lf",&tolerancia);
  printf("\n#De Iteraciones Maximo=");
scanf("%u",&nitermax);
                  }
void puntofijo()
{
 double xnm1;
 error=1.0;
 contador=0;
 while(error>tolerancia && nitermax>contador)
   {
    ++contador;
    xnm1=g(xn);
    error=fabs(xnm1-xn);
    printf("\nlteracion=%u Xn=%12.16lg Xn+1=%12.16lg Error=%12.16lg",contador,xn,xnm1,error);
    xn=xnm1;
                  }
    raiz=xn;
                           }
void imprimir()
{
 printf("\n\tRaiz=%12.16lg +- %12.16lg #De Iteraciones=%u\n",raiz,error,contador);
                             }
