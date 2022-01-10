#include <stdio.h>
#include <math.h>

int main()
{
    double y[N], y_prim[N-1];
    double a = 0., b = 2*M_PI, x, delta_x=(b-a)/(N-1);
    int i;

    x = a;

    for(i=0;i<N;i++)
    {
        y[i] = sin(x);
        x += delta_x;
    }

    for(i=0;i<N-1;i++)
    {
        y_prim[i] = (y[i+1]-y[i])/delta_x;
    }

    printf("\tx\t\tsin(x)\t\tsin\'(x)\n");
    x = a;
    for(i=0;i<N-1;i++)
    {
        printf("%10.2f\t%10.2f\t%10.2f\n", x, y[i], y_prim[i]);
        x += delta_x;
    }
    return 0;
}