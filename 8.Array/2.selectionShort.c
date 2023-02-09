#include <stdio.h>

int main()
{
    int a[10], n, i;
    printf("Enter Number Element :");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        /* code */
        printf("Enter  Element Value : ");
        scanf("%d", &a[i]);
    }
    selection(a, n);
}

void selection(int a[], int n)
{

    int i, j, k, temp;

    for (i = 0; i < n; i++)
    {
        j = i;
        for (k = i + 1; k < n; k++)
        {
            if (a[k] > a[j])

                j = k;
        }
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    printf("\n Short are \n");
    for (i = 0; i < n; i++)
    {
        printf("\n %d", a[i]);
    }
    printf('\n');
}