#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 10

int main()
{
    srand(time(0));
    int n=0, i, max=0, min=MAX;

    printf("\nDigite um numero inteiro nao negativo entre 1 e 1000:\nn = ");
    scanf("%d",&n);

    int V[n];
    for(i=0;i<n;i++)
    {
        V[i] = rand()%MAX;
        if(max<V[i])    {max = V[i];}
        if(min>V[i])    {min = V[i];}
    }

    printf("\nOs valores minimo e maximo gerados aleatoriamente foram: \n\nMin: %d\nMax: %d\n",min,max);


    return EXIT_SUCCESS;
}
