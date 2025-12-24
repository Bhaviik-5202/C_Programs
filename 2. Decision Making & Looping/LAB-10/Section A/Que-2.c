/* 
Find the sum and average of different numbers which are accepted by 
user as many as user wants.
*/
#include <stdio.h>
int main() {
    int num, count = 0;
    float sum = 0, average;

    printf("Enter numbers (enter -1 to stop): \n");
    while (1) {
        scanf("%d", &num);
        if (num == -1) {
            break; // Stop input on -1
        }
        sum += num;
        count++;
    }

    if (count > 0) {
        average = sum / count;
        printf("Sum: %.2f, Average: %.2f\n", sum, average);
    } else {
        printf("No numbers were entered.\n");
    }
    return 0;
}