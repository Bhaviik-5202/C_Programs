/* Print Pascal triangle.
Output of the following program. */

#include <stdio.h>    
int main() {
    int rows = 5; // Number of rows in Pascal's Triangle

    for (int i = 0; i < rows; i++) {
        int number = 1; // First number in each row
        printf("%*s", rows - i, ""); // Print spaces for alignment
        for (int j = 0; j <= i; j++) {
            printf("%d ", number);
            number = number * (i - j) / (j + 1); // Calculate the next number
        }
        printf("\n");
    }
    return 0;
}