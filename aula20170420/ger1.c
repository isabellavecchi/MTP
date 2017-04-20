#include<stdio.h>
#include<stdlib.h>

int main()
{
int n, aux, cont=0;

printf("\nDigite um numero inteiro aleatorio:\n");
scanf("%d",&n);

for(aux=n-1;aux>1;aux--)
{
    if(n%aux==0)    {cont++;}
}

if(cont==0) {printf("\no numero eh primo\n");}
if(cont>0) {printf("\no numero nao eh primo e possui %d divisores\n",cont+2);}


return 0;
}
