//programa que resuelve ecuaciones de segundo grado
//con las ecuaciones racionalizadas
#include<stdio.h>
#include<math.h>

int main(void)
{
    int a,b,c,temp;
    float x1,x2;
    printf("Programa que resuelve ecuaciones de segundo grado\n");
    printf("Ingrese los coeficientes: \n");
    printf("a= \t");
    scanf("%d",&a);
    printf("b= \t");
    scanf("%d",&b);
    printf("c= \t");
    scanf("%d",&c);
    printf("\n\n");
    if(b>0)
    {
        temp=pow(b,2)-(4*a*c);
        if(temp>=0)
        {
            x1=(-2*c)/(b-sqrt(temp));
            printf("X1=%f\n",x1);
            x2=(-2*c)/(b+sqrt(temp));
            printf("X2=%f\n",x2);
        }
        else
        {
            temp=temp*(-1);
            printf("X1=%d/%d-%fi\n",(-2*c),b*b,sqrt(temp));
            printf("X2=%d/%d+%fi\n",(-2*c),b*b,sqrt(temp));
        }
    }
    else
    {
        temp=pow(b,2)-(4*a*c);
        if(temp>=0)
        {
            x1=(-2*c)/(b+sqrt(temp));
            printf("X1=%f\n",x1);
            x2=(-2*c)/(b-sqrt(temp));
            printf("X2=%f\n",x2);
        }
        else
        {
            temp=temp*(-1);
            printf("X1=%d/%d+%fi\n",(-2*c),b*b,sqrt(temp));
            printf("X2=%d/%d-%fi\n",(-2*c),b*b,sqrt(temp));
        }
    }
    return 0;
}
