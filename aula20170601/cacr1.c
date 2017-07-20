#include<stdio.h>
#include<stdlib.h>

int confere(int n){
    int i, cont=0;
    for(i=2;i<n;i++){
        if(n%i==0)  cont++;
    }
    if(cont>0)  return 0;
    else        return 1;
}

int main(){
    int n, result;
    printf("Digite um inteiro nao negativo qualquer");
    scanf("%d",&n);
    result = confere(n);
    printf("(1) para primo | (0) para nao primo\nResultado: %d",result);

    FALTA O RESTOOOOOOOOOOOOOOOOOOOOOO


    return 0;
}
