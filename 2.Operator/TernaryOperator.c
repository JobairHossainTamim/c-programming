#include <stdio.h>

int main()
{

    int a, b, c, result;
    scanf("%d %d %d", &a, &b, &c);

    // Max two number
    // max=(a>b) ? a : b
    result = (a > b && a < c) ? a : (b > c) ? b : c;
    printf("largest number = %d", result);

    return 0;
}