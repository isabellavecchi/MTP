#include<stdio.h>
#include<stdlib.h>

int main()
{
    srand(time(0));
    float porc, rec;
    int i,cont=0;

    printf("\nDigite uma probabilidade qualquer:\nP = \n");
    scanf("%f",&rec);
    for(i=0;i<100;i++)
    {
        porc = rand()/(float)RAND_MAX;
        if(porc<rec)    {cont++;}
    }

    printf("\nO numero gerado foi menor que o indicado %d vezes.\n",cont);

    return EXIT_SUCCESS;
}
