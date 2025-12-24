// Swap first and last digits of a number. //

#include <stdio.h>
#include <math.h>

int main() {
    int num, swappedNum, firstDigit, lastDigit, digits;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    lastDigit = num % 10; // Get last digit
    digits = (int)log10(num); // Get number of digits
    firstDigit = num / (int)pow(10, digits); // Get first digit
    
    // Remove first and last digit from the number
    num = num - firstDigit * (int)pow(10, digits) - lastDigit;
    
    // Add swapped digits
    swappedNum = lastDigit * (int)pow(10, digits) + num + firstDigit;
    
    printf("Number after swapping first and last digits: %d\n", swappedNum);
    return 0;
}