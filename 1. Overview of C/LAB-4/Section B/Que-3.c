// Print temperature from Fahrenheit to Celsius. (Formula: c=(((f-32)*5))/9)//

#include <stdio.h>  
int main() {  
    float fahrenheit, celsius;  

    // Input temperature in Fahrenheit  
    printf("Enter temperature in Fahrenheit: ");  
    scanf("%f", &fahrenheit);  

    // Convert to Celsius  
    celsius = (fahrenheit - 32) * 5 / 9;  

    // Output the temperature in Celsius  
    printf("Temperature in Celsius is: %.2f\n", celsius);  

    return 0;  
}