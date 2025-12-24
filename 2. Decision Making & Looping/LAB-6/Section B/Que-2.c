//  Determine the roots of the equation ax2+bx+c=0. //


#include <stdio.h>  
#include <math.h>  
int main() {  
    
    double a, b, c, discriminant, root1, root2;  

    // Input coefficients  
    printf("Enter coefficients a, b, and c: ");  
    scanf("%lf %lf %lf", &a, &b, &c);  

    // Calculate the discriminant  
    discriminant = b * b - 4 * a * c;  

    // Check the nature of the roots  
    if (discriminant > 0) {  
        root1 = (-b + sqrt(discriminant)) / (2 * a);  
        root2 = (-b - sqrt(discriminant)) / (2 * a);  
        printf("Roots are real and distinct:\nRoot 1 = %lf\nRoot 2 = %lf\n", root1, root2);  
    } else if (discriminant == 0) {  
        root1 = root2 = -b / (2 * a);  
        printf("Roots are real and equal:\nRoot 1 = Root 2 = %lf\n", root1);  
    } else {  
        double realPart = -b / (2 * a);  
        double imaginaryPart = sqrt(-discriminant) / (2 * a);  
        printf("Roots are complex:\nRoot 1 = %lf + %lfi\nRoot 2 = %lf - %lfi\n", realPart, imaginaryPart, realPart, imaginaryPart);  
    }  

    return 0;  
}