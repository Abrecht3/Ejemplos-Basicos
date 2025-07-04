/*ESTE PROGRAMA APLICA EL METODO DE NEWTON PARA ENCONTRAR LA RAIZ DE UNA ECUACION. Xn+1= Xn-f(Xn)/f'(Xn)........*/
#include<stdio.h>
#include<math.h>
void lectura_datos(),newton(),imprimir_resultado();
double f(double),derivada_f(double),xn,tolerancia,error;
unsigned int niteraciones,cuenta;
int main()
{
lectura_datos();
	newton();
return 0;
}
void lectura_datos()
{

printf("\n\tESTE PROGRAMA ENCUENTRA RAICES POR EL METODO DE NEWTON\n");
printf("\t\t\t Xn+1=Xn-f(Xn)/f´(Xn).....\n");
printf("\tProporciona Xn=");
scanf("%lf",&xn);
printf("\tProporciona Tolerancia=");
scanf("%lf",&tolerancia);
printf("\tProporciona # Maximo de Iteraciones:");
scanf("%u",&niteraciones);
}

void newton()
{

double xnm1;
error=1.0;
cuenta=0;
while(error>tolerancia && cuenta<niteraciones)
{

	++cuenta;
	xnm1=xn-f(xn)/derivada_f(xn);
	error=fabs(xnm1-xn);
	printf("\nl=%u Xn=%2.15lf Xnm1=%2.15lf error=%2.15lf",cuenta,xn,xnm1,error);
	xn=xnm1;
}

	imprimir_resultado();

}

double f(double x)

{

return(pow(x,2)-sin(x));

}

double derivada_f(double x)

{

return(2*x-cos(x));

}

void imprimir_resultado()

{

printf("\n\n\t#De Iteraciones=%u",cuenta);
printf("\n\tRaiz=%2.18lf",xn);
printf("\n\tError=%2.18lf\n",error);

}



