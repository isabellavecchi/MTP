#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 256

int main()
{
    char str[TAM], resp[TAM];
    int tamanho=0, i;

    printf("\nDigite uma frase que deseja criptografar:\n");
    fgets(str,TAM,stdin);

    tamanho = strlen(str)-1;
    str[tamanho] = '\0';

    for(i=0;i<tamanho;i++)
    {
        str[i] = toupper(str[i]);
        if(isalpha(str[i]))
        {
            if(str[i]>='A' && str[i]<='M')  {str[i] += 13;}
            else {str[i] -= 13;} // if(str[i]>='N' && str[i]<='Z')
        }
    }

    printf("%s",str);

    return EXIT_SUCCESS;
}
