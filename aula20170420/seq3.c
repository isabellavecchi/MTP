#include<stdio.h>
#include<stdlib.h>

int main()
{
float A, B, C, D, E, M;

printf("\nDigite as 5 notas de um aluno:\n");
scanf("%f %f %f %f %f",&A,&B,&C,&D,&E);

M=(2*A + 2*B + 2*C + 3*D + 5*E)/14;

printf("\nA media dos alunos eh M = %.3f\n",M);


return 0;
}
