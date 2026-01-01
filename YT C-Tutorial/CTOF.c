#include <stdio.h>
void main() {

    float c;
    printf("Enter Celsius :");
    scanf("%d", &c);

    float f = ((9*c) / 5)+32;
    printf("Temperature in Fahrenheit = %.2f°F\n", f);
}