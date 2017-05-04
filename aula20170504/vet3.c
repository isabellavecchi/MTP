#include<stdio.h>
#include<stdlib.h>
#define T 10

int main()
{
    int V[T], i, soma=0, produto=1;
    printf("\nDigite os valores para o vetor V:\n");
    for(i=0;i<T;i++)
    {
        printf("V[%d] = ",i+1);
        scanf("%d",&V[i]);
    }

    for(i=0;i<T;i++)
    {
        soma += V[i];
        produto *= V[i];
    }

    printf("\nA soma dos componentes do vetor V eh:\nSoma = %d\n\nO produto dos componentes do vetor V eh:\nProduto = %d\n\n",soma,produto);


    return EXIT_SUCCESS;
}
