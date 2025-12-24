/*
Calculate sum and average of the square of rst 10 integers whose square has last digit 3. 
*/ 
#include <stdio.h>  
int main() {  
    int count = 0; // To keep track of how many valid integers we have found  
    int num = 1; // Starting number  
    int sum = 0; // Sum of squares  
    int average; // Average of squares  

    while (count < 10) {  
        int square = num * num;  
        if (square % 10 == 3) { // Check if the last digit of the square is 3  
            sum += square; // Add to sum  
            count++; // Increment count  
        }  
        num++; // Move to the next integer  
    }  

    average = sum / count; // Calculate average  
    printf("Sum of squares: %d\n", sum);  
    printf("Average of squares: %d\n", average);  

    return 0;  
}