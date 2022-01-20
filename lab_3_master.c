#include <stdio.h>
#include <math.h>



void main()
{
    float a, b = 2*M_PI, x, delta_x = 1.e-2;
    printf("Ievadi X veertiibu:");
    scanf("%d", &a);
    fflush(stdin);
    printf("\tx\t\tsin(x)\t\tsin\'(x)\n");
    x = a;
    while (x < b)
    {
        printf("%10.2f\t%10.2f\t%10.2f\n", x, sin(x), (sin(x + delta_x) - sin(x)) / delta_x);
        x += delta_x; // x=x+delta_x;
    }
}