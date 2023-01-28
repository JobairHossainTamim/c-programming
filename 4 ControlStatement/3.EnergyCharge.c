#include <stdio.h>
int main()
{
    int unit;
    float charge;
    printf("Enter Unite : \t");
    scanf("%d", &unit);
    if (unit < 0)
    {
        printf("Unite must be less than zero");
      
    }
    else
    {
        if (unit >= 0 && unit <= 200)
        {
            charge = 0.5 * unit;
        }
        else if(unit > 200 && unit <=400){
            charge= 100+0.65*(unit-200);
        }
        else if(unit > 401 && unit <=600){
            charge= 230+0.8*(unit-400);
        }
        if(unit >600){
            charge=390+0.9*(unit-600);
        }
        printf("charge : %0.2lf ", charge);
    }
}