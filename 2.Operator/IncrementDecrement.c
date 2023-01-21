#include <stdio.h>

int main()
{
    int a = 5, b = 10;
    float x = 5.5, y = 10.5;
    printf("a++ %d  \n", a++);
    printf("++a %d  \n", ++a);
    printf("--b %f  \n", --b);
    printf("b-- %f  \n", b--);

    printf("x++ %0.2lf \n", x++);
    printf("++x %0.2lf  \n", ++x);
    printf("--y %0.2lf  \n", --y);
    printf("y-- %0.2lf  \n", y--);

    return 0;
}