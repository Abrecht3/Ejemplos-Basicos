/*ESTE PROGRAMA ENCUENTRA LA RAIZ POR EL METODO DE REGLA FALSA*/
#include<stdio.h>
#include<math.h>
double a,b,raiz,tolerancia,error,funcion(double x);
unsigned int niteraciones,contador;
void leer_datos(),reglafalsa(),resultados();
main()
{
    leer_datos();
    reglafalsa();
    resultados();
    return 0;
}
double funcion(double x)
{    
    return(pow(x,2.0)-sin(x));
}
void leer_datos()
{
    printf("\nESTE PROGRAMA ENCUENTRA LA RAIZ DE UNA ECUACION\n");
    printf("\n\tPOR LE METODO DE REGLA FALSA...\n");
    printf("Proporciona a=");
    scanf("%lf",&a);
    printf("proporciona b:");
    scanf("%lf",&b);
    printf("Proporciona Tolerancia=");
    scanf("%lf",&tolerancia);
    printf("Proporciona # maximo de iteraciones=");
    scanf("%u",&niteraciones);
}
void reglafalsa()
{
    double fa,fb,fx,x;
    contador=0;
    error=1.0;
    fa=funcion(a);
    fb=funcion(b);
    if(fa*fb>0)
    {  
        printf("\nNO SE PUEDE APLICAR REGLA FALSA YA QUE f(a)*f(b)>0\n");
        main();
    }
    if(fa*fb==0)
    {
        if(fa==0)
        {
             raiz=a;
             error=0;
        }
        else
        {
             raiz=b;
             error=0;
        }
    }
    /*Aplicamos Algoritmo de Regula Falsi.........................*/
    else
       while(error>tolerancia && niteraciones>contador)
       {
              contador++;
              x=(b*fabs(funcion(a))+a*fabs(funcion(b)))/(fabs(funcion(a))+fabs(funcion(b)));
              fx=funcion(x);
              error=fabs(fx);
              if(fa*fx==0)
              {
                    raiz=x;
                    error=0;
              }
              if(fa*fx<0)
              {
                    b=x;
                    fb=fx;
              }
              else
              {
                    a=x;
                    fa=fx;
              }
              printf("\nl=%3u a=%12.18lf b=%12.18lf Error=%2.18lf",contador,a,b,error);
       }
       raiz=x;
}
void resultados()
{   
    printf("\nRaiz=%12.18lf",raiz);
    printf("\nError=%2.18lf",error);
    printf("\n# de Iteraciones=%u\n",contador);
}
