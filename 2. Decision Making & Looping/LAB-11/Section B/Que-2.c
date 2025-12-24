// Count frequency of digits in an integer. //

#include <stdio.h>

int main() {
    int num, count[10] = {0};
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    while (num != 0) {
        count[num % 10]++;
        num /= 10;
    }
    
    printf("Digit frequencies:\n");
    for (int i = 0; i < 10; i++) {
        if (count[i] > 0) {
            printf("Digit %d: %d times\n", i, count[i]);
        }
    }
    
    return 0;
}