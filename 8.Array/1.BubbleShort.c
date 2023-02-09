
#include <stdio.h>

int main()
{
    int a[10], i, j, n, temp;

    printf("Enter Number Element :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        /* code */
        printf("Enter  Element Value : ");
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j] ;
                a[j] = a[j + 1] ;
                a[j + 1] = temp ;
            }
        }
    }
    printf("Number Are");
    for(i=0; i<n; i++){
        printf(" %d ", a[i]);
    }
    printf("\n");
}