// print odd number

#include <stdio.h>

int main()
{

    int i = 0;
    while (i < 10)
    {
        i = i + 1;
        if(i % 2 == 1 ){
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}