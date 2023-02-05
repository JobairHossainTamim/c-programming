#include <stdio.h>

int main()
{
    int a, b, x, gdc;
    printf("Enter value : ");
    scanf("%d", &a);
     printf("Enter value : ");
    scanf("%d", &b);
    if (a < b)
    {
        x = a;
    }
    else
    {
        x = b;
    }
    for (; x >= 1; x--)
    {
        if (a % x == 0 && b % x ==0 ){
            gdc= x;
            break;
        }
    }
    printf(" gdc = %d\n", gdc);

}