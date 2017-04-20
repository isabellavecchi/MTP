#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
srand(time(0));

int n, a;

printf("\nDigite um numero inteiro aleatorio:\n");
scanf("%d",&n);

a=rand()%10;

n=n+a;

if(n%2==0)  {printf("\n%d eh par\n",n);}
else        {printf("\n%d nao eh par\n",n);}


return 0;
}
