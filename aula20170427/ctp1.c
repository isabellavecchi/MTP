#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define NCHAR 256

int main()
{
    int i;
    char frase[NCHAR];

    printf("\nDigite uma frase qualquer:\n");
    fgets(frase,NCHAR,stdin);

    for(i=0;frase[i]!=0;i++)
    {
        frase[i] = tolower(frase[i]);
    }

    printf("\nA frase em minusculas ficou:\n%s",frase);

    return EXIT_SUCCESS;
}
