#include<stdio.h>
#include<stdlib.h>

int main()
{
int i=0;
char palavra[256];

printf("\nDigite uma palavra qualquer\n");
scanf("%s",palavra);

while(palavra[i]!='\0')
{
    i++;
}

printf("\nA palavra possui %d caracteres.\n",i);

return 0;
}
