#include <stdio.h>

int sum(int a, int b);
int main() {

    int a, b;
    printf("Enter A : ");
    scanf("%d", &a);

    printf("Enter B : ");
    scanf("%d", &b);

    int s = sum(a,b);
    printf("Sum Of A And B : %d\n", s);

    return 0;
}

int sum(int a, int b) {
    return a + b;
}
