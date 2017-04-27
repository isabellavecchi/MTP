#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define NCHAR 256

int main()
{
    int i, cont=0;
    char frase[NCHAR];

    printf("\nDigite uma frase qualquer:\n");
    fgets(frase,NCHAR,stdin);

    for(i=0;frase[i]!=0;i++)
    {
        if(isalpha(frase[i]))   {cont++;}
    }

    printf("\nA frase possui %d caracteres\n",cont);

    return EXIT_SUCCESS;
}
