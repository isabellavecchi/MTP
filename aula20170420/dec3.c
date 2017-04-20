#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
srand(time(0));

int a, b, c, soma;

a=rand()%6;
b=rand()%6;
c=rand()%6;

soma = a+b+c;
printf("\n%d + %d + %d = %d\n",a,b,c,soma);

if(soma==7 || soma==11) {printf("\nVoce ganhou!!\n");}
else                    {printf("\nVoce perdeu...\n");}

return 0;
}
