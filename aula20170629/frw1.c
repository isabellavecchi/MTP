#include<stdio.h>
#include<stdlib.h>
#define N 256

void mostra(char * nome, int idade_anos, float altura_metros){
    fprintf(stdout,"%s%d anos\n%f metros\n",nome,idade_anos,altura_metros);
}

void captura(char * nome, int * p_idade_anos, float * p_altura_metros){
    char c;
    fprintf(stdout,"Entre com o nome: ");
    fgets(nome,N,stdin);
    fprintf(stdout,"Entre com a idade [anos]: ");
    fscanf(stdin,"%d",p_idade_anos);   while(!(c=getchar()));
    fprintf(stdout,"Entre com a altura [metros]: ");
    fscanf(stdin,"%f",p_altura_metros);    while(!(c=getchar()));
}

void gravar(char * nome_arquivo){
    char nome[N];
    int idade_anos;
    float altura_metros;
    FILE * arquivo = NULL;
    arquivo = fopen("info.txt","w");
    if(arquivo==NULL){
        fprintf(stderr,"Problema na gravacao\n");
        exit(EXIT_FAILURE);
    }
    captura(nome,&idade_anos,&altura_metros);
    fprintf(arquivo,"%s%d\n%f\n",nome,idade_anos,altura_metros);
    fclose(arquivo);
}

void recuperar(char * nome_arquivo){
    char nome[N], c;
    int idade_anos;
    float altura_metros;
    FILE * arquivo = NULL;
    arquivo = fopen("info.txt","r");
    if(arquivo==NULL){                          //consertando o erro like a boss
        fprintf(stderr,"Arquivo inexistente\n");
        exit(EXIT_FAILURE);
    }
    fgets(nome,N,arquivo);
    fscanf(arquivo,"%d",&idade_anos);
    fscanf(arquivo,"%f",&altura_metros);
    fclose(arquivo);
    mostra(nome,idade_anos,altura_metros);
}

int menu(char * arquivo){
    int opc; char c;
    printf("\n-----Menu-----\n\nDigite:\n(1) Para gravar\n(2) Para recuperar\n\n");
    scanf("%d",&opc);
    while(!(c=getchar()));   //Para não ocupar buffering no teclado
    printf("(%d)\n",opc);
    if(opc==1) gravar(arquivo);
    else{
        if(opc==2) recuperar(arquivo);
        else       printf("COMANDO INVALIDO");
        }
        return opc;
    }

int main(){
    int opc; char arquivo[N];
    fprintf(stdout,"Entre com o nome do arquivo (SEM ESPACOS): ");
    fscanf(stdin,"%s",arquivo);
    while(menu(arquivo)==1 || menu(arquivo)==2);
    return EXIT_SUCCESS;
}
