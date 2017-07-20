#include <stdio.h>
#include <math.h>
float media(float *vetor, int qt){
    int i;
    float m=0.f;
    for (i=0; i<qt; i++)
        m+=vetor[i];
    return m/qt;
}
float desvio(float *vetor, int qt){
    int i;
    float m=media(vetor, qt);
    float soma=0.f;
    for (i=0; i<qt; i++)
        soma += pow((vetor[i])-m, 2);
    soma=sqrt(soma/(qt-1));
    return soma;
}
int main(){
    int qt,i;
    float * vetor;
    printf("Digite quantos numero deseja entrar: ");
    scanf("%d", &qt);
    vetor=(float *) malloc(qt*sizeof(float));
    for (i=0;i<qt; i++){
        printf("Elemento [%d]: ", i);
        scanf("%f", vetor+i);//ou scanf("%f", &(vetor[i]))
    }
    printf("Media= %g\n", media(vetor, qt));
    printf("Desvio Padrao = %g\n", desvio(vetor, qt));
    free(vetor);
    return 0;
}
