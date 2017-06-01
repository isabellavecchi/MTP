#include<stdio.h>
#include<stdlib.h>
#define TAM 256

void inverte(char * frase) {
    if(*frase != '\0')
        inverte(frase + 1);
    printf("%c", *frase);
}

int main()
{
    char frase[TAM];
    printf("\nDigite uma frase qualquer por favor.\n");
    fgets(frase,TAM,stdin);
    inverte(frase);

    return 0;
}
