#include<stdio.h>
#include<stdlib.h>
#define TAM 256

void inverte(char *frase,int n, int i){
    char aux;
    aux = frase[i];
    frase[i]= frase[n];
    frase[n] = aux;
    i++;
    n--;
    if(i<=n){inverte(frase,n,i);}
}

int main()
{
    int i=0,n;
    char frase[TAM];
    printf("\nDigite uma frase qualquer por favor.\n");
    fgets(frase,TAM,stdin);
    n = strlen(frase) - 1;
    inverte(frase,n,i);
    printf("%s",frase);


    return 0;
}
