#include <stdio.h>
#include <math.h>


//  math 
//  d=√((x2 – x1)² + (y2 – y1)²)

int main() {
    float x1, y1, x2, y2, distance;

    // Input the coordinates of the first point
    printf("Enter the coordinates of the first point (x1, y1): ");
    scanf("%f %f", &x1, &y1);

    // Input the coordinates of the second point
    printf("Enter the coordinates of the second point (x2, y2): ");
    scanf("%f %f", &x2, &y2);

    // Calculate the distance between the two points using the distance formula
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Output the result
    printf("The distance between (%.2f, %.2f) and (%.2f, %.2f) is %.2f\n", x1, y1, x2, y2, distance);

    return 0;
}
