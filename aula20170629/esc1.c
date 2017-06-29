#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(){
    char c, nome_arquivo[30];
    FILE * arquivo = NULL;
    printf("Digite o nome do arquivo(SEM ESPACOS): ");
    scanf("%s",nome_arquivo);
    sprintf(nome_arquivo, "%s.txt", nome_arquivo);
    arquivo = fopen(nome_arquivo,"w");
    printf("Escreva seu texto e digite('\\'+ENTER) para encerrar:\n");
    do{
        c = getchar();
        fputc(toupper(c),arquivo);
    }while(c!= '\\');
    fclose(arquivo);
    return 0;
}
