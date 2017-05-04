#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define T 1000

int main()
{
    srand(time(0));
    int V[T], i, n;
    float soma=0.0;

    printf("\nDigite um numero inteiro positivo qualquer:\n");
    scanf("%d",&n);

    for(i=0;i<T;i++)
    {
        V[i]=rand()%n +1;
        soma += V[i];
    }

    soma /= T;

    printf("\nA media dos numeros eh:\nM = %f\n",soma);

    return EXIT_SUCCESS;
}
