#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int num, i, r;
    srand(time(0));
    printf("\nDigite um numero entre 1 e 10, por favor.\n");
    scanf("%d",&num);
    for(i=0;i<10;i++){
        while(getchar()){
            r = rand()%10 + 1;
            printf("\n%d",r);
            if(num==r)  {printf("   PARABENS!!!!");}
            break;
        }
    }


    return 0;
}
