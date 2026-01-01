#include <stdio.h>
#include <math.h>
void main() {
    float x1, x2;
    float y1, y2;
    float distance;

    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of first point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    distance = sqrt( (x2 -x1)*(x2-x1) + (y2- y1)*(y2-y1));
    printf("Distance between the two points = %.2f\n", distance);

}