#include <stdio.h>
int main()
{
    int a = 25;
    int divisor = 5;
    int result = 0;

    while (a != 0)
    {
        a = a - divisor;
        result = result + 1;
    }
    printf(" Result is %d\n", result);
}