#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define SOMA(x,y,x1,y1,x2,y2) \
({x=x1+x2;\
y=y1+y2;})

#define DIST(x1,y1,x2,y2) \
({sqrt(pow(x1-x2,2)+pow(y1-y2,2));})

#define VISUAL(x,y) \
({printf("\nPonto: (%f,%f)\n",x,y);})

int main()
{
    float x1,y1,x2,y2,x,y,d;
    printf("\nDigite as coordenadas para o A:\nX = ");
    scanf("%f",&x1);
    printf("\nY = ");
    scanf("%f",&y1);
    printf("\nDigite as coordenadas para o B:\nX = ");
    scanf("%f",&x2);
    printf("\nY = ");
    scanf("%f",&y2);

    SOMA(x,y,x1,y1,x2,y2);
    printf("\nSomando os pontos A e B, otem-se o");
    VISUAL(x,y);
    d = DIST(x1,y1,x2,y2);
    printf("\nA distancia entre os pontos A e B eh D = %f\n",d);

    return EXIT_SUCCESS;
}
