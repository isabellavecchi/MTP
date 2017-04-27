#include<stdio.h>
#include<stdlib.h>
#include<complex.h>

int main()
{
    double complex A, B, Z;
    double rA, rB, iA, iB;

    printf("\nEntre com o real de A\n");
    scanf("%lf",&rA);
    printf("\nEntre com o imaginario de A\n");
    scanf("%lf",&iA);
    printf("\nEntre com o real de B\n");
    scanf("%lf",&rB);
    printf("\nEntre com o imaginario de B\n");
    scanf("%lf",&iB);

    A = rA + I*iA;
    B = rB + I*iB;
    Z= A + B;

    printf("\nA soma e   %lf + I*%lf\n",creal(Z),cimag(Z));
    printf("Ou igual a %lf < %lf rad\n",cabs(Z), carg(Z));

    return EXIT_SUCCESS;
}
