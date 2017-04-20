#include<stdio.h>
#include<stdlib.h>

int main()
{
int n, fat=1, i;

printf("\nDigite um numero inteiro aleatorio:\n");
scanf("%d",&n);

for(i=n;i>1;i--)
{
    fat=fat*i;
}

printf("\n%d! = %d\n",n,fat);

return 0;
}
