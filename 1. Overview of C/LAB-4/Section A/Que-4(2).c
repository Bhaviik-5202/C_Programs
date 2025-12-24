// Print average of three numbers with Scanf //

#include <stdio.h>  
int main() {  
    float num1 = 10.0, num2 = 20.0, num3 = 30.0, sum, average;  
    sum = num1 + num2 + num3;  
    average = sum / 3.0;  
    printf("Average: %.2f\n", average);  
    return 0;  
}