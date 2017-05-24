#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define TAM 1000

typedef
    struct Ponto{
        float x;
        float y;
        float z;
    }
    ponto;

int main()
{
    float cmx, cmy, cmz;
    int i,op;
    srand(time(0));
    ponto vetor[TAM];
    for(i=0;i<TAM;i++)
    {
        vetor[i].x = (rand()/(float)RAND_MAX)*20 -10;
        vetor[i].y = (rand()/(float)RAND_MAX)*20 -10;
        vetor[i].z = (rand()/(float)RAND_MAX)*20 -10;
    }
    printf("nPor favor, escolha um numero de 10 a 1000.\n");
    scanf("%d",&op);
    while(op<10 || op>TAM)
    {
        printf("\nentrada invlaida. Digite um numero entre 10 a 1000, por gentileza.\n");
        scanf("%d",&op);
    }
    for(i=0;i<op;i++)
    {
    cmx += vetor[i].x;
    cmz += vetor[i].y;
    cmy += vetor[i].z;
    }

    printf("\nO Centro de Massa dos escolhidos fica no ponto:\nCM = (%f,%f,%f)\n",cmx/op,cmy/op,cmz/op);

    return EXIT_SUCCESS;
}
