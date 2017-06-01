#include<stdio.h>
#include<stdlib.h>

int Soma(int * A, int N, int i, int soma){
    if(i<N){
        soma += A[i];
        Soma(A,N,i+1,soma);
    }
    else
        return soma;
}

int main()
{
    int A[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29};
    int N = sizeof(A)/sizeof(int);
    int i=0,soma=0;
    soma = Soma(A,N,i,0);
    printf("Soma = %d",soma);

    return 0;
}
