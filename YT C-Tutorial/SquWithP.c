#include <stdio.h>

int squ(int n);
int _squ(int *n);
int main() {

    int num = 4;
    squ(num);
    printf("Number : %d\n", num);

    _squ(&num);
    printf("Number : %d\n", num);
}

int squ(int n) {
    n = n * n;
    printf("Square : %d\n", n);
}

// Call By Reference
int _squ(int *n) {
    *n = (*n) * (*n);
    printf("Square : %d\n", *n);
}
