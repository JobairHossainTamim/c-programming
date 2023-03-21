#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

// a2 = b2 + c2 – 2bc cos α
// b2 = a2 + c2 – 2ac cos β
// c2 = b2 + a2 – 2ba cos γ


int main() {
    double a, b, c; // sides of the triangle
    double A, B, C; // angles of the triangle

    // input the sides of the triangle
    printf("Enter the length of three sides of a triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // calculate the angles using the law of cosines
    A = acos((b*b + c*c - a*a) / (2*b*c)) * 180 / PI;
    B = acos((c*c + a*a - b*b) / (2*c*a)) * 180 / PI;
    C = acos((a*a + b*b - c*c) / (2*a*b)) * 180 / PI;

    // output the angles in degrees
    printf("The angles of the triangle are: %.2lf, %.2lf, %.2lf degrees\n", A, B, C);

    return 0;
}

