#include<stdio.h>
#include<stdlib.h>

struct Divisao {
    int quo, R;
};
void dividir(int * pa, int * pb, int * pquo, int * pR){         //"voidou" ele, não tem mais retorno
    struct Divisao * presposta;
  *pquo = *pa / *pb;
  *pR = *pa % *pb;
}

int main()
{
    struct Divisao resposta;
    int dnd, dvr, quo, R;
    printf("\nDigite o valor do dividendo e do divisor de uma equação, nesta ordem:\n");
    scanf("%d %d",&dnd,&dvr);
    dividir(&dnd,&div,&quo,&R);
    printf("\nresposta: %d com resto %d\n",quo,R);

    return 0;
}
