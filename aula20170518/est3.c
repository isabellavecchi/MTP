#include<stdio.h>
#include<math.h>

typedef
    struct RGB{
        float R, G, B;
    }rgb;

typedef
    struct YCbCr{
        int Y, Cb, Cr;
    }ycc;

#define CONV_Y (r,g,b) ({round(16  + (65.481(r/255)  + 128.553(g/255) + 24.996(b/255)));})
#define CONV_Cb(r,g,b) ({round(128 + (−37.797(r/255) − 74.203(g/255)  + 112.0(b/255))) ;})
#define CONV_Cr(r,g,b) ({round(128 + (112.0(r/255)   − 93.786(g/255)  − 18.214(b/255)));})

#define VISUAL(x,a,b,c) \
({printf("\nCor: (%f,%f,%f)\n",x.a,x.b,x.c);})
                                                                                       ;;
int main()
{
    rgb rgb;
    ycc ycc;

    printf("\nDigite os valores dos componentes para RGB:\nR: \n");
    scanf("%f",&rgb.R);
    printf("\nG: \n");
    scanf("%f",&rgb.G);
    printf("\nB: \n");
    scanf("%f",&rgb.B);

    ycc.Y  = CONV_Y;
    ycc.Cb = CONV_Cb;
    ycc.Cr = CONV_Cr;

    printf("\nA configuraação das cores em YCbCr eh: ");
    VISUAL(ycc,Y,Cb,Cr);

    return EXIT_SUCCESS;
}
