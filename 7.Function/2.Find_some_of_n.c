// find some of natural num
#include <stdio.h>
int main()
{

    int num;
    printf("Enter number :");
    scanf("%d",   sum(num));
 
}

int sum(int n)
{

    if (n != 0)
    {
        return n + sum(n - 1);
    }
    else
    {
        return n;
    }
    printf("Number is %d", n);
}