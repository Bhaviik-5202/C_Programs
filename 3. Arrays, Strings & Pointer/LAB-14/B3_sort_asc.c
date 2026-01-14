#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    int ia = *(const int *)a;
    int ib = *(const int *)b;
    return (ia > ib) - (ia < ib);
}

int main() {

    int n;
    printf("Enter n: ");
    scanf("%d", &n); 

    int *a = malloc(sizeof(int) * n);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    
    qsort(a, n, sizeof(int), cmp);

    printf("Sorted ascending:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    
    printf("\n");
    free(a);
    return 0;
}
