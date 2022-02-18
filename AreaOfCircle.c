#include <stdio.h>

int main()
{
    float Area , r , PI = 3.1416 ;

    printf ("Enter radius valus : ");

    scanf("%f", &r);

    Area = PI*r*r;

    printf("The area of a circle = %.2f\n\n", Area);

return 0;
}