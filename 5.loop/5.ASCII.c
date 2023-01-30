#include <stdio.h>

int main()
{
    char i;

    for (i = "a"; i <= "z"; i++)
    {
        printf("ASCII Equation %c is %d \n", i, i);
    }
    for (i = "A"; i <= "Z"; i++)
    {
        printf("ASCII Equation %c is %d \n", i, i);
    }
    return 0;
}