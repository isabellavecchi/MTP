#include<stdlib.h>
#include<stdio.h>
#define TAM 256

typedef
    struct Ponto{double x, y;}
    Ponto;

int main(){
    int N=0, i;
    Ponto * conjunto;
    Ponto teste;

    char nome_arquivo[TAM];
    FILE * arquivo = NULL;
    printf("Digite o nome do arquivo(SEM ESPACOS): ");
    scanf("%s",nome_arquivo);
    sprintf(nome_arquivo,"%s.txt",nome_arquivo);
    arquivo = fopen(nome_arquivo,"rb");

    if(arquivo==NULL){
        fprintf(stderr,"Arquivo inexistente\n");
    }

    while(!feof(arquivo)){
        if(fread(&teste,sizeof(Ponto),1,arquivo)!=0){
            N++;
            conjunto = (Ponto *) realloc(conjunto,N*sizeof(Ponto));
            conjunto[N-1] = teste;
        }
    }
    fclose(arquivo);

    for(i=0;i<N;i++)
        printf("(%lf,%lf)\n",(conjunto+i)->x,conjunto[i].y);

    free(conjunto);

    return EXIT_SUCCESS;
}
