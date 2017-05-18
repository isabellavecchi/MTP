#include<stdio.h>
#include<stdlib.h>
#define TAM 16

int main()
{
    char frase[TAM];
    unsigned int *p;
    int i;
    for(i=0;i<TAM;i++)  {frase[i]='\0';}    //Limpando o buffering
    printf("\nDigite uma frase:\n");
    fgets(frase,TAM,stdin);
    p = (unsigned int *) frase;     //transformando de char para int

    printf("\nCada byte em inteiro eh:\n");
    for(i=0;i<sizeof(frase)/sizeof(p[0]);i++)
    {
        printf("%d   ",p[i]);
    }

    printf("\nCada byte em hexadecimal eh:\n");
    for(i=0;i<sizeof(frase)/sizeof(p[0]);i++)
    {
        printf("%x   ",p[i]);
    }

    return EXIT_SUCCESS;
}
