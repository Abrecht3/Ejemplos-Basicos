#include<stdio.h>

int main (void){
    float fahr, cent;
    printf("Dame la Temperatura en Fahrenheit: \n");
    scanf("%f", &fahr);
    cent=5*(fahr-32)/9;
    printf("En Centigrados es: %4.2f \n",cent);
    return 0;
}
