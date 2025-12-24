// Convert temperature from Celsius to Fahrenheit //

#include <stdio.h>
int main()
{
    double Fahrenheit;
    double Celsius;
 
    printf ("Enter the Temperature in Celsius: ");
    scanf ("%lf", &Celsius);
 
    Fahrenheit = (9 * Celsius) / 5 + 32;
 
    printf ("The Temperature in Fahrenheit is: %.2lf\n", Fahrenheit);
 
    return 0;
}