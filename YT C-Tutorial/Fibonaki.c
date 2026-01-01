#include <stdio.h>

int fibo(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int fib1 = fibo(n - 1);
    int fib2 = fibo(n - 2);
    int fiboN = fib1 + fib2;

    return fiboN;
}

int main() {
    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    int res = fibo(n);
    printf("Fibonacci(%d) = %d\n", n, res);

    return 0;
}