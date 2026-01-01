#include <stdio.h>

int Factorial(int n);

int main() {

    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    printf("Factorial OF Number : %d", Factorial(n));

    return 0;

}

int Factorial(int n) {

    if ( n == 0) {
        return  1;
    }
    

    int fac1 = Factorial(n-1);
    int facN = fac1 * n;

    return facN;
}