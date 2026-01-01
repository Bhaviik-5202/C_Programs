#include <stdio.h>

float CelToFer(float cel);

int main() {

    float cel;
    printf("Enter Celsius : ");
    scanf("%f", &cel);

    float far = CelToFer(cel);

    printf("Fer : %f", far);

    return 0;
}

float CelToFer(float cel) {
    float far = (cel * (9.0/5.0) + 32);

    return far;
}