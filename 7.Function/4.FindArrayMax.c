#include <stdio.h>

int main()
{
    int arr[] = {50, 60, 70, 500};
    int n = 4;
    int max = findMax(arr,n);
    printf("%d\n",max);
}

int findMax(int arr[], int n)
{

    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}