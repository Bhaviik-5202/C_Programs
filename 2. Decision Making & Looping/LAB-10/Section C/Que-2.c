// Find HCF and LCM of two numbers. //

#include <stdio.h>

int main() {
    int num1, num2, hcf, lcm, temp1, temp2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    temp1 = num1;
    temp2 = num2;

    // Calculate HCF
    while (temp2 != 0) {
        hcf = temp2;
        temp2 = temp1 % temp2;
        temp1 = hcf;
    }

    // Calculate LCM
    lcm = (num1 * num2) / hcf;

    printf("HCF: %d, LCM: %d\n", hcf, lcm);
    return 0;
}