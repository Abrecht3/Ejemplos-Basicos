//ESTE PROGRAMA IMPLEMENTA EL ALGORITMO DE LA SECANTE
#include<stdio.h>
#include<math.h>
double f(double);
double a,b,tolerancia,raiz,error;
unsigned int nitermax,cuenta;
void leer_datos(),secante(),comprueba(),imprimir();
int main()
{
    leer_datos();
    comprueba();
    secante();
    imprimir();
    return 0;
}
double f(double x)
{
    return(pow(x,2.0)-sin(x));
}
void leer_datos()
{
    printf("\n\tESTE PROGRAMA APLICA EL METODO DE LA SECANTE PARA ENCONTRAR UNA RAIZ:\n");
    printf("\n\t\tPROPORCIONA INTERVALO:\n");
    printf("\t\ta=");
    scanf("%lf",&a);
    printf("\t\tb=");
    scanf("%lf",&b);
    printf("\t\tPROPORCIONA TOLERANCIA:");
    scanf("%lf",&tolerancia);
    printf("\t\tPROPORCIONA # MAXIMO DE ITERACIONES:");
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
        {
            raiz=a;
            error=0;
            imprimir();
        }
        else
        {
            raiz=b;
            error=0;
            imprimir();
        }
    }
    if(producto<0)
    {
        printf("\nNO SE SATISFACE LA CONDICION f(a)*f(b)>0");
        main();
    }
}
void secante()
{
    double x,fafx;
    error=1;
    cuenta=0;
    while(error>tolerancia && cuenta<nitermax)
    {
        ++cuenta;
        x=(a*f(b)-b*f(a))/(f(b)-f(a));
        error=fabs(f(x));
        printf("\nl=%u X=%2.18lf Error=%2.18lf",cuenta,x,error);
        if(x<a)
        a=x;
        else
        b=x;
    }
    raiz=x;
}
void imprimir()
{
    printf("\n\tRaiz=%12.18lf +- %1.18lf",raiz,error);
    printf("\n\t# de Iteraciones=%u",cuenta);
    //exit(1);
}
