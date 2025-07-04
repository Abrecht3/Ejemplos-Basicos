//ESTE PROGRAMA CALCULA EL DETERMINANTE DE UNA MATRIZ ...
#include <stdio.h>
void leer_matriz(),determinante();
double a[50][50],s;
unsigned int rango;
int main()
{
    leer_matriz();
	determinante();
	return 0;
}

void leer_matriz()
{
    register int i,j,k;
	printf("\nProporciona Rango de la matriz=");
	scanf("%u",&rango);
	for(i=0;i<rango;++i)
        for(j=0;j<rango;++j)
        {
            printf("A[%d,%d]=",i+1,j+1);
            scanf("%lg",&a[i][j]);
        }
}

void determinante()
{
    register int i,j,k;
    double q;
    for(i=0;i<rango;++i)
        for(j=i+1;j<rango;++j)
        {
            q=a[j][i]/a[i][i];
            for(k=0;k<rango;++k) a[j][k]-=(a[i][k]*q);
        }
        s=1;
    for(i=0;i<rango;++i)
        s*=a[i][i];
    printf("determinante=%lg\n",s);
}
