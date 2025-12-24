/* Three sides of a triangle are entered through the keyboard, 
WAP to check whether the triangle is isosceles, equilateral, 
scalene or right angled triangle */

#include <stdio.h>  
#include <math.h>  
int main() {  
    float side1, side2, side3;  

    printf("Enter the lengths of the three sides of the triangle: ");  
    scanf("%f %f %f", &side1, &side2, &side3);  

    // Check for equilateral triangle  
    if (side1 == side2 && side2 == side3) {  
        printf("The triangle is equilateral.\n");  
    }  
    // Check for right-angled triangle using Pythagorean theorem  
    else if ((side1 * side1 + side2 * side2 == side3 * side3) ||   
             (side1 * side1 + side3 * side3 == side2 * side2) ||   
             (side2 * side2 + side3 * side3 == side1 * side1)) {  
        printf("The triangle is right-angled.\n");  
    }  
    // Check for isosceles triangle  
    else if (side1 == side2 || side1 == side3 || side2 == side3) {  
        printf("The triangle is isosceles.\n");  
    }  
    // If none of the above, it is scalene  
    else {  
        printf("The triangle is scalene.\n");  
    }  

    return 0;  
}