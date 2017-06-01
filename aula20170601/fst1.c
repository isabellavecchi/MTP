#include<stdio.h>
#include<stdlib.h>

struct Divisao {
    int quo, R;
};
struct Divisao dividir(int a, int b){
    struct Divisao resposta;
    resposta.quo = a/b;
    resposta.R = a%b;
    return resposta;
};

int main()
{
    struct Divisao resposta;
    int dnd, dvr;
    printf("\nDigite o valor do dividendo e do divisor de uma equação, nesta ordem:\n");
    scanf("%d %d",&dnd,&dvr);
    resposta = dividir(dnd,div);
    printf("\nresposta: %d com resto %d\n",resposta.quo,resposta.R);

    return 0;
}
