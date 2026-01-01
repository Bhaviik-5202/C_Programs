#include <stdio.h>

int SumofNum(int n);

int main() {

    int n;
    printf("Enter Number : ");
    scanf("%d", &n);

    printf("Sum Of Number : %d", SumofNum(n));

}

int SumofNum(int n) {
    if ( n == 1) {
        return 1;
    }
    
    int Sum1 = SumofNum(n-1);
    int SumN = Sum1 + n; // 
}