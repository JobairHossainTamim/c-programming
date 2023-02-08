#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter The Number : ");
    scanf("%d %d", &a, &b);
    swap(a, b);
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Swapping %d,%d", a, b);
}