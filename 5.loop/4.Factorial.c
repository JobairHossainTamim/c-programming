#include <stdio.h>

int main()
{
    int num, i, factorial;

    printf("Enter Number : ");
    scanf("%d", &num);
    factorial = 1;
    i = 1;

    while (i <= num)
    {
        factorial *= i;
        i++;
    }
    printf(" Factorial of %d and %d\n", num, factorial);
    return 0;
}