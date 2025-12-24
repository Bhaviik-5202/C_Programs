/* 
Estimate the Value of the Mathematical Constant e

Using the formula \
(e = 1 + \frac{1}{1!} + \frac{1}{2!} + \frac{1}{3!} + \frac{1}{4!} + ...\):
*/

#include <stdio.h>
int main() {
    int terms = 10; // Number of terms to approximate e
    double e = 1.0; // Start with 1 for the 0! term
    double factorial = 1.0; // To calculate factorial

    for (int i = 1; i <= terms; i++) {
        factorial *= i; // Calculate i!
        e += 1.0 / factorial; // Add the term to e
    }

    printf("Estimated value of e: %.10f\n", e);
    return 0;
}