#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float a, b, c, teta;

    printf("\nDigite os dois lados de um triangulo e o angulo entre eles:\nlado A = ");
    scanf("%f",&a);
    printf("\nlado B = ");
    scanf("%f",&b);
    printf("\nAngulo = ");
    scanf("%f",&teta);

    c = sqrt( pow(a,2) + pow(b,2) - 2*a*b*cos(teta) );

    printf("\nO lado C mede\nC = %f\n",c);

    return EXIT_SUCCESS;
}
