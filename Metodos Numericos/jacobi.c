//ESTE PROGRAMA IMPLEMENTA EL ALGORITMO DE JACOBI
/*PARA RESOLVER UN SISTEMA DE ECUACIONES LINEALMENTE INDEPENDIENTE A x=c */
#include <stdio.h>
#define indice 50
#define orden 200
double a[indice][indice],x[indice][orden],c[indice],errorx[indice],tolerancia;
double error_relativo;
unsigned int rango,nmaxiteraciones,k;
void leer_datos(),jacobi(),imprimir();
int main()
{
  leer_datos();
      jacobi();
    imprimir();
   return 0;
}
void leer_datos()
{  

    register int i,j;
    printf("\nESTE PROGRAMA RESUELVE UN SISTEMA DE ECUACIONES LINEALES A x = c\n");
    printf("\t\tPOR EL ALGORITMO ITERATIVO DE JACOBI\n");
    printf("\t# de Incognitas del Sistema:");
    scanf("%u",&rango);
    //Solicitamos la Matriz A
    printf("\nProporciona la Matriz A\n");
    for(i=0;i<rango;++i)
       for(j=0;j<rango;++j)
       {
          printf("A(%d,%d)=",i+1,j+1);
          scanf("%lf",&a[i][j]);
                                          }
    //solicitamos el vector c
    printf("\nProporciona el vector c\n");
    for(i=0;i<rango;++i)
       {
         printf("c(%d)=",i+1);
         scanf("%lf",&c[i]);
                                }
    //solicitamos tolerancia y # maximo de iteraciones
    printf("\nProporciona Tolerancia y # maximo de iteraciones\n");
    printf("Tolerancia=");
    scanf("%lf",&tolerancia);
    printf("#Maximo de Interaciones=");
   scanf("%u",&nmaxiteraciones);
}
void jacobi()
{
register int i,j;
double error,suma1,suma2;
error=1.0;
k=0;
for(i=0;i<rango;++i)x[i][k]=0.0;
printf("\n");
while(error>tolerancia && nmaxiteraciones>k)
{
printf("I=%d",k+1);
error_relativo=0.0;
for(i=0;i<rango;++i)
{
suma1=suma2=0.0;
for(j=0;j<=i-1;++j)suma1+=a[i][j]*x[j][k];
for(j=i+1;j<rango;++j)suma2+=a[i][j]*x[j][k];
x[i][k+1]=(c[i]-suma1-suma2)/a[i][i];
errorx[i]=fabs(x[i][k+1]-x[i][k]);
error_relativo+=errorx[i]/fabs(x[i][k+1]);
printf("%lf",x[i][k+1]);
}
++k;
printf("\n");
error=error_relativo;
}
}
void imprimir()
{
register int i;
printf("\nLas Raices del Sistema son:\n");
for(i=0;i<rango;++i)
printf("\n\tX(%d)=%lf+-%2.18lf",i+1,x[i][k+1],errorx[i]);
printf("\nError Relativo=%2.18lf\n",error_relativo);
}
