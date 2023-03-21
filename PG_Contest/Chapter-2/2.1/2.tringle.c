#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
   double a, b, c, A, B, C;
   printf("Enter the length of three sides of a triangle: ");
   scanf("%lf %lf %lf", &a, &b, &c);

   A = acos((b*b + c*c - a*a)/(2*b*c)) * 180 / PI;
   B = acos((a*a + c*c - b*b)/(2*a*c)) * 180 / PI;
   C = 180 - A - B;

   printf("The three angles of the triangle are: %.2lf %.2lf %.2lf\n", A, B, C);
   
   return 0;
}