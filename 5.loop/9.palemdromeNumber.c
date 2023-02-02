#include <stdio.h>

int main()
{

    int n, temp, rem, rev = 0;
    printf("Enter Number: ");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
        rev = rev * 10 + rem;
    }
    if (temp == rev)
    {
        printf("Palindrome");
    }
    else
        printf(" Not Palindrome");
}