#include <stdio.h>
#define indice 50

void leer_matriz(),montante(),VecTorX(),resultado();
unsigned rango, aumento;
double matriz[indice][indice+1],vectorx[indice];

main()
{
  leer_matriz();
  montante();
  VecTorX();
  resultado();
}

void leer_matriz()
{
        register int i,j;
        printf("\n\n\tESTE PROGRAMA RESULEVE AX=C POR EL METODO DE MONTANTE\n");
        printf("\n\n\tProporciona El Rango De A= ");
        scanf("%u",&rango);
        aumento=rango+1;
        printf("\n\nProporciona La Matriz Aumentada: \n");
        for(i=0;i<rango;i++)
        {
                for(j=0;j<aumento;j++)
                {
        printf("\tA[%d,%d]=",i+1,j+1);
        scanf("%lf",&matriz[i][j]);
                }
        printf("\n");
        }
}

void montante()
{
        int p0=1, vuelta=1,i,j,k;
        double temp, pivote;
        for(i=0;i<rango;i++)
        {
                pivote=matriz[i][i];
                for(j=0;j<rango;j++)
                {
                        if(j!=i)
                        {
                                for(k=vuelta;k<=rango;k++)
                                {

matriz[j][k]=(pivote*matriz[j][k]-matriz[j][i]*matriz[i][k])/p0;
                                }
                        }
                }
                temp=pivote;
                for(j=0;j<rango;j++)
                {
                        matriz[j][i]=0;
                }
                matriz[i][i]=temp;
                p0=matriz[i][i];
                vuelta++;
        }
                for(j=0;j<rango-1;j++)
                {
                        matriz[j][j]=matriz[rango-1][rango-1];
                }
}

void VecTorX()
{
        int i;
        for(i=0;i<rango;i++)
        {
                vectorx[i]=matriz[i][rango]/matriz[rango-1][rango-1];
                printf("vector x[%d]=%lf\n",i,vectorx[i]);
        }
        printf("\nMatriz Resultante al aplicar el metodo de montante\n");

}

void resultado()
{
        int i, j;
        for(i=0;i<rango;i++)
                for(j=0;j<=rango;j++)
                {
                        printf("a[%d][%d]=%lf\n",i,j,matriz[i][j]);

                }

        printf("\nDETERMINANTE DEL SISTEMA= %lf",matriz[i=1][j=1]);
         printf("\n\n\tRESULTADO\n");
        printf("\n");


        for(j=0;j<rango;j++)
        {
                printf("VECTOR X[%d]= %lf\n",j+1,vectorx[j]);
        }
       printf("\n");
}

