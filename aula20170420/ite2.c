#include<stdio.h>
#include<stdlib.h>

int main()
{
int b, p, aux, R;

printf("\nDigite um numero inteiro qualquer:\n");
scanf("%d",&b);

printf("\nDigite uma potencia ao que o numero anterior sera elevado:\n");
scanf("%d",&p);

aux=p;

for(R=1;p>=1;p--)
{
    R=R*b;
}


printf("\n%d ^ %d = %d\n",b,aux,R);

return 0;
}
