#include<stdio.h>
#include<stdlib.h>

int main()
{
int n, aux, cont=0, i;

printf("\nDigite um numero inteiro aleatorio:\n");
scanf("%d",&n);

int div[n];

for(aux=n;aux>=1;aux--)
{
    if(n%aux==0)
    {
        div[cont]=aux;
        cont++;
    }
}

aux=0;

for(i=1;i<cont;i++)
{
    aux = aux + div[i];
}

if(n==aux)  {printf("\n%d eh um numero perfeito\n",n);}
else        {printf("\n%d nao eh um numero perfeito\n",n);}

return 0;
}
