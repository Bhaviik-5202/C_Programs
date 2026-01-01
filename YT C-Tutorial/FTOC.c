#include <stdio.h>
void main() {

    float f;
    printf("Enter Fahrenheit : ");
    scanf("%f", &f);

    float c = ( (f-32) *5 ) / 9;
    printf("Temperature in Celsius = %.2f°C\n", c);

}