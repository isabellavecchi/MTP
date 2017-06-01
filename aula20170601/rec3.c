#include<stdio.h>
#include<stdlib.h>

int MDC(int u, int v){
    if(u==v)                return u;
    if(u==0)                return v;
    if(u%2==0 && v%2!=0)    return MDC(u/2,v);
    if(u%2!=0 && v%2==0)    return MDC(u,v/2);
    if(u%2==0 && v%2==0)    return 2 * MDC(u/2,v/2);
    if(u>v)                 return MDC((u-v)/2,v);
    else                    return MDC((v-u)/2,u);
}

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
    int mdc;
    struct FRA resposta;
    int div1,div2,num1,num2;
    printf("\nDigite o valor do numerador e do divisor da primeira fracao:\n");
    scanf("%d %d",&num1,&div1);
    printf("\nDigite o valor do numerador e do divisor da segunda fracao:\n");
    scanf("%d %d",&num2,&div2);
    resposta = soma(num1,div1,num2,div2);
    mdc = MDC(resposta.num,resposta.div);
    printf("\nA soma das fracoes eh igual a:\n%d / %d\n",resposta.num/mdc,resposta.div/mdc);
    return 0;
}
