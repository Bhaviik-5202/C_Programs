// Print area of circle. (pie*r*r)//

#include <stdio.h>  
#define PI 3.14159  
int main() {  
    float radius, area;  

    // Get the radius of the circle from the user  
    printf("Enter the radius of the circle: ");  
    scanf("%f", &radius);  

    // Calculate the area of the circle  
    area = PI * radius * radius;  

    // Print the area of the circle  
    printf("The area of the circle is: %.2f\n", area);  

    return 0;  
}