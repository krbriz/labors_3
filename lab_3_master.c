#include <stdio.h>
#include <math.h>



void main()
{
    float a, b, x, delta_x;
    printf("Ievadi a veertiibu:");
    fflush(stdin);
    scanf("%d", &a);
    


    printf("Ievadi a veertiibu:");
    fflush(stdin);
    scanf("%d", &b);
    
    printf("Ievadi precizitaati:");
    fflush(stdin);
    scanf("%d", &delta_x);

    
    printf("\tx\t\tsin(x)\t\tsin\'(x)\n");
    x = a;
    while (x < b)
    {
        printf("%10.2f\t%10.2f\t%10.2f\n", x, sin(x), (sin(x + delta_x) - sin(x)) / delta_x);
        x += delta_x; // x=x+delta_x;
    }
}