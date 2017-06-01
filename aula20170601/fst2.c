#include<stdio.h>
#include<stdlib.h>

struct FRA{
    int num,div;
};

struct FRA soma(int num1,int div1,int num2,int div2){
    struct FRA resposta;
    resposta.div = div1 * div2;
    resposta.num = num1 * div2 + num2 * div1;
    return resposta;
};

int main()
{
    struct FRA resposta;
    int div1,div2,num1,num2;
    printf("\nDigite o valor do numerador e do divisor da primeira fracao:\n");
    scanf("%d %d",&num1,&div1);
    printf("\nDigite o valor do numerador e do divisor da segunda fracao:\n");
    scanf("%d %d",&num2,&div2);
    resposta = soma(num1,div1,num2,div2);
    printf("\nA soma das fracoes eh igual a:\n%d/%d\n",resposta.num,resposta.div);
    return 0;
}
