#include<stdio.h>

int main(void){
    float p1, p2, p3, puntaje;
    printf("Dame los tres Puntajes: ");
    scanf("%f %f %f", &p1, &p2, &p3);
    puntaje=10*(65+0.878*p1+1.1669*p2+0.8865*p3)/3;
    printf("Tu puntaje es: %4.5f", puntaje);
    return 0;
}
