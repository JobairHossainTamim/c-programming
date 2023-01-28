// Determinate b*2-4ac
//  x+=-b+sqrt(b*b-4ac)/2a
//  x+=-b-sqrt(b*b-4ac)/2a

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float det, r1, r2;

    printf(" \n Enter values a ,b and c : \n ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    det = (b * b) - (4 * a * c);

    if (det < 0)
    {
        printf(" Root are imaginary");
    }
    else
    {
        r1 = ((-b) + sqrt(det)) / (2 * a);
        r2 = ((-b) - sqrt(det)) / (2 * a);

        if (det == 0)

            printf(" Root are Real and equal");

        else

            printf(" Root are Real and Unique");
    }

    return 0;
}
