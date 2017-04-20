#include<stdio.h>
#include<stdlib.h>

int main()
{
int n;

printf("\nDigite um numero inteiro aleatorio:\n");
scanf("%d",&n);

if(n%2==0) {printf("\nO numero eh par\n");}     else {printf("\nO numero eh impar\n");}
if(n%3==0) {printf("\nO numero eh multiplo de 3\n");}
if(n%5==0) {printf("\nO numero eh multiplo de 5\n");}
if(n%7==0) {printf("\nO numero eh multiplo de 7\n");}


return 0;
}
