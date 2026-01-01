#include <stdio.h>
int printTable(int n);
int main() {

    int n;
    printf("Enter Value : ");
    scanf("%d", &n);

    printTable(n);


}

int printTable(int n) {
    for (int i = 1; i <= 1000; i++) {
        printf("%d X %d = %d\n", n, i, n*i);
    }
    
}