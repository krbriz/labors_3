#include <stdio.h>
#include <math.h>
#define N 100


int main()
{
    double y[N], x[N], y_prim[N-1];
    double a, b = 2*M_PI, delta_x=(b-a)/(N-1);
    int i;

    printf("Ievadi a veertiibu: ");
    fflush(stdin);
    scanf("%f", &a, &b);

    for(i=0;i<N;i++)
    {
        x[i] = a + i*delta_x;
        y[i] = sin(x[i]);
    }

    for(i=0;i<N-1;i++)
    {
        y_prim[i] = (y[i+1]-y[i])/(x[i+1]-x[i]);
        //y[i]-y[i-1]
        //y[i+1]-y[i-1]/(2*delta_x)
    }

    printf("\tx\t\tsin(x)\t\tsin\'(x)\n");
    for(i=0;i<N-1;i++)
    {
        printf("%10.2f\t%10.2f\t%10.2f\n", x[i], y[i], y_prim[i]);
    }
    printf ("%10.2f\t%10.2f\n", x[i], y[i]);

    return 0;
}