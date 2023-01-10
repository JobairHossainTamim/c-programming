#include <stdio.h>
/*
input
10 4
3.0 1.0
output
14 6
4.0  2.0 (Never ever 4.00000 or 2.0000)

*/
int main()
{

    int a, b, sumI, diff;
    float c, d, sf, df;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    sumI=a+b;
    diff=a-b;
    sf=c+d;
    df=c-d;

    printf("%d %d \n", sumI, diff);
    printf("%.lf %.lf \n", sf, df);

    return 0;
}