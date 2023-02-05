#include <stdio.h>
int main()
{

    double loan, interest, year, total, month;

    printf("Enter loan : ");
    scanf("%lf", &loan);
    printf("Enter Interest : ");
    scanf("%lf", &interest);
    printf("Enter Year : ");
    scanf("%lf", &year);

    total = loan + loan * (interest / 100.00);
    month = total / (year * 12);

    printf("Total Amount %0.2lf ", total);
    printf("Month %0.2lf ", month);
}