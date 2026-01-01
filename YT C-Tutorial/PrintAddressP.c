#include <stdio.h>

void printAdd(int n);
int _printAdd(int *n);

int main() {

    int n = 4;

    printAdd(n);
    printf("Address OF n in main        : %p\n", &n);

    _printAdd(&n);
    printf("Address OF n in main        : %p\n", &n);

    return 0;
}

void printAdd(int n) {
    printf("Address OF n inside printAdd : %p\n", &n);
}

int _printAdd(int *n) {
    printf("Address OF n inside _printAdd (pointer itself) : %p\n", &n);
    printf("Address stored INSIDE pointer (*n variable)    : %p\n", n);
}
