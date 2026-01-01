#include <stdio.h>
int swap(int a, int b);
int _swap(int *a, int *b);

int main() {

    int x = 4;
    int y = 5;
    swap(x, y);
    printf("X : %d & Y : %d\n", x, y);
    
    _swap(&x, &y);
    printf("X : %d & Y : %d\n", x, y);
    return 0;
}

int swap(int a, int b) {
    int t= a;
    a = b;
    b = t;
    printf("A : %d & B : %d\n", a, b);
}

int _swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    printf("A : %d & B : %d\n", *a, *b);
}