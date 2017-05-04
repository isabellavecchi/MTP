#include<stdio.h>
#include<stdlib.h>
#define T 10

int main()
{
    int V[T], i, j, aux[T];
    printf("\nDigite os valores para o vetor a ser revertido:\n");
    for(i=0;i<T;i++)
    {
        printf("V[%d] = ",i+1);
        scanf("%d",&V[i]);
    }

    j=T-1;
    for(i=0;i<T;i++)
    {
        aux[i] = V[j];
        j--;
    }

    printf("\nO vetor reverso de V ficou:\n");
    for(i=0;i<T;i++)
    {
        printf("V[%d] = %d\n",i+1,aux[i]);
    }

    return EXIT_SUCCESS;
}
