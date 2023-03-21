#include <stdio.h>
int main()
{
    int a = 255;
    int divisor = 5;
    int result = 0;
    int new_a = a;

    while (new_a >= divisor)
    {
        /* code */
        new_a = new_a - divisor;
        result = result + 1;
    }
    printf("if %d is divided by %d, \n ", a, divisor);
    printf("the result is %d\n", result);
    if (new_a != 0)
    {
        printf("remainder is : %d\n", new_a);
    }
}