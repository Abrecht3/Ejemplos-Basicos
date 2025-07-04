/*ESTE PROGRAMA SUMA Y RESTA MATRICES C =AB...........*/
#include<stdio.h>
#define m1 50
double a[m1][m1],b[m1][m1],c[m1][m1];
unsigned int m,n;
void leer_datos(),sumaab(),restaab(),imprime();
int main()
{
leer_datos();
sumaab();
printf("\nLA SUMA DE LAS MATRICES AB=C ES\n");
imprime();
restaab();
printf("\nLA RESTA DE LAS MATRICES AB=C ES\n");
imprime();
return 0;
}
void leer_datos()
{
register int i,j;
printf("\n\tESTE PROGRAMA SUMA O RESTA MATRICES: C=AB\n");
printf("\nProporciona el ORDEN de A(mXn) y B(mXn)\n");
printf("\tm=");
scanf("%u",&m);
printf("\tn=");
scanf("%u",&n);
printf("\nProporciona AmXn.......\n");
for(i=0;i<m;++i)
for(j=0;j<n;++j)
{
printf("A(%u,%u)=",i+1,j+1);
scanf("%lf",&a[i][j]);
}
printf("\nProporciona BmXn.......\n");
for(i=0;i<m;++i)
for(j=0;j<n;++j)
{
printf("B(%u,%u)=",i+1,j+1);
scanf("%lf",&b[i][j]);
}
}
void sumaab()
{
register int i,j;
for(i=0;i<m;++i)
for(j=0;j<n;++j)
{
c[i][j]=a[i][j]+b[i][j];
}
}
void restaab()
{
register int i,j;
for(i=0;i<m;++i)
for(j=0;j<n;++j)
{
c[i][j]=a[i][j]-b[i][j];
}
}
void imprime()
{
register int i,j;
for(i=0;i<m;++i)
for(j=0;j<n;++j)
printf("\nC(%u,%u)=%lg",i+1,j+1,c[i][j]);
printf("\n");
}
