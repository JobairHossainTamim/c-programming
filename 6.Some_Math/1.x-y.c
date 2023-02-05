//x+y=14
// x-y=17
#include <stdio.h>


int main(){
    double x,y,x_plus_y,x_min_y;
    printf("Enter x+y :");
    scanf("%lf",&x_plus_y);
    printf("Enter x-y :");
    scanf("%lf",&x_min_y);

    x=(x_plus_y +x_min_y)/2;
    y=(x_plus_y -x_min_y)/2;

    printf(" x= %0.2lf , y= %0.2lf ", x,y);
}