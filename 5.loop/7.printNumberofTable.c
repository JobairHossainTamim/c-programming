#include <stdio.h>

int main()
{
    int num, i, j;
    printf("Enter number of Table: ");
    scanf("%d", &num);

    for (j = 2; j <= num; j++)
    {

        for (i = 1; i <= 10; i++)
        {
            printf("%d X %d = %d", j, i, j * i);
            printf("\n");
        }
        printf("\n");
    }
}