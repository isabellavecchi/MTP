#include<stdlib.h>
#include<stdio.h>
#define TAM 256

typedef
    struct Ponto{double x, y;}
    Ponto;

int main(){
    Ponto * conjunto = NULL;
    int n, i;
    char nome_arquivo[TAM];
    FILE * arquivo = NULL;

    fprintf(stdout,"Entre com o nome do arquivo (SEM ESPACOS): ");
    fscanf(stdin,"%s",nome_arquivo);
    sprintf(nome_arquivo,"%s.txt",nome_arquivo);
    printf("Quantos pontos? ");
    scanf("%d",&n);
    conjunto = (Ponto *) malloc(n*sizeof(Ponto));

    for(i=0;i<n;i++){
        printf("\nX(%d) = ",i+1);
        scanf("%lf",&(conjunto[i].x));
        printf("\nY(%d) = ",i+1);
        scanf("%lf",&(conjunto[i].y));
    }

    arquivo = fopen(nome_arquivo,"wb"); //wb -> escrever em modo binário
    fwrite(conjunto, sizeof(Ponto),n,arquivo);
    fclose(arquivo);
    free(conjunto);
    return EXIT_SUCCESS;
}
