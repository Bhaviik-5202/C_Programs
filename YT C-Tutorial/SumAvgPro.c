#include <stdio.h>

int doWork(int a, int b, int *sum, int *avg, int *pro);

int main() {

    int a = 3;
    int b = 5;
    int sum, avg, pro;

    doWork(a, b, &sum, &avg, &pro);

    printf("  Sum : %d\n Avg : %d\n Pro : %d\n", sum, avg, pro);

    return 0;
}

int doWork(int a, int b, int *sum, int *avg, int *pro) {
    *sum = a + b;
    *avg = (a + b) / 2;
    *pro = a * b;
}