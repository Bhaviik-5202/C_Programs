#include <stdio.h>
void main() {

    float r;
    printf("Enter Radius :");
    scanf("%f", &r);

    float area = 3.14 * r * r;
    printf("Area Of Circle : %.2f", area);
}