#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    float XA, YA, XB, YB, dist;

    printf("\nEntre com as coordenadas X e Y de A\nX= ");
    scanf("%f",&XA);
    printf("\nY= ");
    scanf("%f",&YA);
    printf("\n\nEntre com as coordenadas X e Y de B\nX= ");
    scanf("%f",&XB);
    printf("\nY= ");
    scanf("%f",&YB);

    dist = sqrt( pow(XB-XA,2) + pow(YB-YA,2) );

    printf("\nA distancia entre os pontos eh:\nD = %0.4f",dist);

    return EXIT_SUCCESS;
}
