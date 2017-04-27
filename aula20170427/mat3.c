#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float n, b,lg;

    printf("\nDigite um numero qualquer e a base do logaritmo desejada\nn = \n");
    scanf("%f",&n);
    printf("b = ");
    scanf("%f",&b);

    lg = log(n)/log(b);

    printf("\nO log de %0.2f na base %0.2f eh:\nlog = %0.2f",n,b,lg);

    return EXIT_SUCCESS;
}
