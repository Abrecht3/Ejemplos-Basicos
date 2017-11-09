#include<stdio.h>

float radius,area;

main()
{
    printf("Enter radius(i.e. 10): ");
    scanf("%d",&radius);
    area=3.1415*radius*radius;
    printf("\n\nel area es: %f ",area);
}
