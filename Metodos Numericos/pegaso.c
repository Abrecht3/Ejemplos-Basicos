//ESTE PROGRAMA OBTIENE LA RAIZ DE UNA ECUACION
//USADNDO EL aLGORITMO DE PEGASO
#include <stdio.h>
#include <math.h>
double funcion(double), a, b, raiz, tolerancia, error;
unsigned int niteraciones, contador;
void leer_datos(), pegaso(), resultados();
main()
{
leer_datos();
pegaso();
resultados();
return 0;
}
void leer_datos()
{
    printf("\nEste programa obtiene la raiz aplicando\n");
    printf("\tel algoritmo de Pegaso\n");
printf("\n \t Proporciona a=");
scanf("%lf",&a);
printf("\n \t Proporciona b=");
scanf("%lf",&b);
printf("\n \t Proporciona tolerancia=");
scanf("%lf",&tolerancia);
printf("\n \t Proporciona el # maximo de iteraciones=");
scanf("%u",&niteraciones);
}
void pegaso()
{
  double fa, fb, s12, c, fc, g;
contador=0;
error=1.0;
fa=funcion(a);
fb=funcion(b);
    if(fa*fb<0){
        printf("\nNO SE SATISFACE f(a)*f(b)=0\n");
        main();
    }
    if(fc==0)
    {
        raiz=c;
        error=0;
        }
    if(fa*fb==0){
        if(fa==0){
            raiz=a;
            error=0;
            }
        else{
            raiz=b;
            error=0;
        }
    }
    else{
    while(error>tolerancia && niteraciones>contador){
              ++contador;
              s12=(fb-fa)/(b-a);
              c=b-(fb/s12);
              fc=funcion(c);
              error=fabs(fc);
              if(fc==0)
              {
                raiz=c;
                error=0;
                }
              if(fa*fb<0)
              {
                  a=b;
                  b=c;
                  fa=fb;
                  fb=fc;
                  }
              else
              {
                  g=fb/(fb+fc);
                  b=c;
                  fa=g*fa;
                  fb=fc;
                  }
printf("\n \t Iteracion=%u X=%2.16lf Error=%2.16lf\n", contador, c, error);
}
          raiz=c;}
  }
double funcion(double x)
{
  return (x*exp(x)-1);
}

void resultados()
{
printf("\n \t Raiz=%12.18lf ",raiz);
printf("\n \t Error=%12.18lf ",error);
printf("\n \t # de Iteraciones %u \n ",contador);
}
