// a1x +b1y = c1
//  a2x b2y = c2

#include <stdio.h>

int main()
{
    double a1, a2, b1, b2, c1, c2, x, y;
    printf("Enter number:");
    scanf("%lf , %lf , %lf , %lf , %lf , %lf ", &a1, &a2, &b1, &b2, &c1, &c2);
    x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
    y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);
    printf("x = %0.2lf, y = %0.2lf", x, y);
}