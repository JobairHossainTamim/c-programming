#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter Number : ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {

        printf("%d X %d = %d", num, i, num * i);
        printf("\n");
    }
}