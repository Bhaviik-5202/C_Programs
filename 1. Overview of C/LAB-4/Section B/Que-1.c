// Print area of triangle//

#include <stdio.h>  
int main() {  
    float base, height, area;  

    // Input base and height  
    printf("Enter the base of the triangle: ");  
    scanf("%f", &base);  
    printf("Enter the height of the triangle: ");  
    scanf("%f", &height);  

    // Calculate area  
    area = (base * height) / 2;  

    // Print area with two decimal places  
    printf("The area of the triangle is: %.2f\n", area);  

    return 0;  
}